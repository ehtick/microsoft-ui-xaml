﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using Common;
using MUXControlsTestApp.Utilities;
using System.Linq;
using System.Threading;
using Windows.Foundation.Metadata;
using Windows.System;
using Microsoft.UI.Xaml;
using Microsoft.UI.Xaml.Controls;
using Microsoft.UI.Xaml.Controls.Primitives;
using Microsoft.UI.Xaml.Input;
using Microsoft.UI.Xaml.Media;
using MUXControls.TestAppUtils;
using PlatformConfiguration = Common.PlatformConfiguration;
using OSVersion = Common.OSVersion;
using System.Collections.Generic;
using XamlControlsResources = Microsoft.UI.Xaml.Controls.XamlControlsResources;
using Microsoft.UI.Xaml.Markup;
using System;
using System.Text;

using WEX.TestExecution;
using WEX.TestExecution.Markup;
using WEX.Logging.Interop;

namespace Microsoft.UI.Xaml.Tests.MUXControls.ApiTests
{
    [TestClass]
    public class CommonStylesApiTests : ApiTestBase
    {
        [TestMethod]
        public void VerifyAllThemesContainSameResourceKeys()
        {
            bool dictionariesContainSameElements = true;
            RunOnUIThread.Execute(() =>
            {
                var resourceDictionaries = new XamlControlsResources();
                Log.Comment("ThemeDictionaries");

                var defaultThemeDictionary = resourceDictionaries.ThemeDictionaries["Default"] as ResourceDictionary;

                foreach (var dictionaryName in resourceDictionaries.ThemeDictionaries.Keys)
                {
                    // Skip the Default theme dictionary
                    if (dictionaryName.ToString() == "Default")
                    {
                        continue;
                    }

                    Log.Comment("Comparing against " + dictionaryName.ToString());
                    var themeDictionary = resourceDictionaries.ThemeDictionaries[dictionaryName] as ResourceDictionary;

                    Log.Comment("Keys count in Default: " + defaultThemeDictionary.Keys.Count);
                    Log.Comment("Keys count in " + dictionaryName + ": " + themeDictionary.Keys.Count);

                    bool allKeysInDefaultExistInDictionary = AreKeysFromExpectedInActualDictionary(defaultThemeDictionary, "Default", themeDictionary, dictionaryName.ToString());
                    bool allKeysInDictionaryExistInDefault = AreKeysFromExpectedInActualDictionary(themeDictionary, dictionaryName.ToString(), defaultThemeDictionary, "Default");

                    dictionariesContainSameElements &= (allKeysInDefaultExistInDictionary && allKeysInDictionaryExistInDefault);
                }

                Verify.AreEqual(0, resourceDictionaries.MergedDictionaries.Count, "MergedDictionaries is not empty, Verify if you really wanted to update the merged dictionary. If so, update the test");
            });

            Verify.IsTrue(dictionariesContainSameElements, "Resource Keys you have added are missing in one of the theme dictionaries. This is trouble since we might end up crashing when trying to resolve the key in that Theme.");
            if(!dictionariesContainSameElements)
            {
                Log.Error("Resource Keys you have added are missing in one of the theme dictionaries. This is trouble since we might end up crashing when trying to resolve the key in that Theme.");
            }
        }

        [TestMethod]
        public void VerifyNoResourceKeysWereRemovedFromPreviousStableReleaseInV2Styles()
        {
            RunOnUIThread.Execute(() =>
            {
                EnsureNoMissingThemeResources(
                BaselineResources.BaselineResourcesList2dot5Stable,
                new XamlControlsResources());
            });
        }

        private bool AreKeysFromExpectedInActualDictionary(ResourceDictionary expectedDictionary, string expectedDictionaryName, ResourceDictionary actualDictionary, string actualDictionaryName)
        {
            List<string> missingKeysInActualDictionary = new List<string>();
            foreach (var entry in expectedDictionary)
            {
                if (!actualDictionary.ContainsKey(entry.Key))
                {
                    missingKeysInActualDictionary.Add(entry.Key.ToString());
                }
            }

            if (missingKeysInActualDictionary.Count > 0)
            {
                Log.Comment("Keys found in " + expectedDictionaryName + " but not in " + actualDictionaryName);
                foreach (var missingKey in missingKeysInActualDictionary)
                {
                    Log.Error("* " + missingKey);
                }
            }

            return (missingKeysInActualDictionary.Count == 0);
        }

        private void EnsureNoMissingThemeResources(IList<string> baseline, XamlControlsResources dictionaryToVerify)
        {
            var actualResourcesKeys = new HashSet<string>();
            var resourceDictionaries = dictionaryToVerify;

            foreach (var dictionaryName in resourceDictionaries.ThemeDictionaries.Keys)
            {
                var themeDictionary = resourceDictionaries.ThemeDictionaries[dictionaryName] as ResourceDictionary;

                foreach (var entry in themeDictionary)
                {
                    string entryKey = entry.Key as string;
                    if (!actualResourcesKeys.Contains(entryKey))
                    {
                        actualResourcesKeys.Add(entryKey);
                    }
                }
            }

            foreach (var entry in resourceDictionaries)
            {
                string entryKey = entry.Key as string;
                if (!actualResourcesKeys.Contains(entryKey))
                {
                    actualResourcesKeys.Add(entryKey);
                }
            }

            StringBuilder missingKeysList = new StringBuilder();

            bool allBaselineResourceKeysExist = true;
            foreach (var baselineResourceKey in baseline)
            {
                if (!actualResourcesKeys.Contains(baselineResourceKey))
                {
                    missingKeysList.Append(baselineResourceKey + ", ");
                    allBaselineResourceKeysExist = false;
                }
            }

            Verify.IsTrue(allBaselineResourceKeysExist, "List of missing resource keys: " + missingKeysList.ToString());
            if(!allBaselineResourceKeysExist)
            {
                Log.Error("List of missing resource keys: " + missingKeysList.ToString());
            }
        }

        public void DumpThemeResources()
        {
            RunOnUIThread.Execute(() =>
            {
                var resourceDictionary = new XamlControlsResources();

                Log.Comment("ThemeDictionaries");
                foreach (var key in resourceDictionary.ThemeDictionaries.Keys)
                {
                    Log.Comment("* " + key.ToString());

                    var themeDictionary = resourceDictionary.ThemeDictionaries[key] as ResourceDictionary;
                    foreach (var entry in themeDictionary)
                    {
                        Log.Comment("\t*" + entry.ToString());
                    }
                }

                Log.Comment("Entries in Resource Dictionary");
                foreach (var entry in resourceDictionary)
                {
                    Log.Comment("* " + entry.ToString());
                }
            });
        }

#if MUX_PRERELEASE
        // Compact resources have been removed from the final release
        [TestMethod]
        public void VerifyUseCompactResourcesAPI()
        {
            //Verify there is no crash and TreeViewItemMinHeight is not the same when changing UseCompactResources.
            RunOnUIThread.Execute(() =>
            {
                var dict = new XamlControlsResources();
                var height = dict["TreeViewItemMinHeight"].ToString();

                dict.UseCompactResources = true;
                var compactHeight = dict["TreeViewItemMinHeight"].ToString();
                Verify.AreNotEqual(height, compactHeight, "Height in Compact is not the same as default");
                Verify.AreEqual("24", compactHeight, "Height in 24 in Compact");

                dict.UseCompactResources = false;
                var height2 = dict["TreeViewItemMinHeight"].ToString();
                Verify.AreEqual(height, height2, "Height are the same after disabled compact");
            });

            MUXControlsTestApp.Utilities.IdleSynchronizer.Wait();
        }
#endif

        [TestMethod]
        public void CornerRadiusFilterConverterTest()
        {
            if (!PlatformConfiguration.IsOsVersionGreaterThan(OSVersion.Redstone4))
            {
                Log.Comment("Corner radius is only available on RS5+");
                return;
            }

            RunOnUIThread.Execute(() =>
            {
                var root = (StackPanel)XamlReader.Load(
                    @"<StackPanel xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' 
                             xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'
                             xmlns:primitives='using:Microsoft.UI.Xaml.Controls.Primitives'> 
                            <StackPanel.Resources>
                                <primitives:CornerRadiusFilterConverter x:Key='TopCornerRadiusFilterConverter' Filter='Top' Scale='2'/>
                                <primitives:CornerRadiusFilterConverter x:Key='RightCornerRadiusFilterConverter' Filter='Right'/>
                                <primitives:CornerRadiusFilterConverter x:Key='BottomCornerRadiusFilterConverter' Filter='Bottom'/>
                                <primitives:CornerRadiusFilterConverter x:Key='LeftCornerRadiusFilterConverter' Filter='Left'/>
                                <CornerRadius x:Key='testCornerRadius'>6,6,6,6</CornerRadius>
                            </StackPanel.Resources>
                            <Grid x:Name='TopRadiusGrid'
                                CornerRadius='{Binding Source={StaticResource testCornerRadius}, Converter={StaticResource TopCornerRadiusFilterConverter}}'>
                            </Grid>
                            <Grid x:Name='RightRadiusGrid'
                                CornerRadius='{Binding Source={StaticResource testCornerRadius}, Converter={StaticResource RightCornerRadiusFilterConverter}}'>
                            </Grid>
                            <Grid x:Name='BottomRadiusGrid'
                                CornerRadius='{Binding Source={StaticResource testCornerRadius}, Converter={StaticResource BottomCornerRadiusFilterConverter}}'>
                            </Grid>
                            <Grid x:Name='LeftRadiusGrid'
                                CornerRadius='{Binding Source={StaticResource testCornerRadius}, Converter={StaticResource LeftCornerRadiusFilterConverter}}'>
                            </Grid>
                       </StackPanel>");

                var topRadiusGrid = (Grid)root.FindName("TopRadiusGrid");
                var rightRadiusGrid = (Grid)root.FindName("RightRadiusGrid");
                var bottomRadiusGrid = (Grid)root.FindName("BottomRadiusGrid");
                var leftRadiusGrid = (Grid)root.FindName("LeftRadiusGrid");

                Verify.AreEqual(new CornerRadius(12, 12, 0, 0), topRadiusGrid.CornerRadius);
                Verify.AreEqual(new CornerRadius(0, 6, 6, 0), rightRadiusGrid.CornerRadius);
                Verify.AreEqual(new CornerRadius(0, 0, 6, 6), bottomRadiusGrid.CornerRadius);
                Verify.AreEqual(new CornerRadius(6, 0, 0, 6), leftRadiusGrid.CornerRadius);
            });
        }

        // https://github.com/microsoft/microsoft-ui-xaml/issues/4320
        // Task 30789390: Re-enable AppBarToggleButton disabled test
        [TestMethod]
        [TestProperty("TestPass:MaxOSVer", "22621")] // This test is currently failing on 23h2, hence stop at 22h2 which is 22621.
        public void VerifyVisualTreeForControlsInCommonStyles()
        {
            var controlsToVerify = new List<string> {
                "AppBarButton", /*"AppBarToggleButton",*/ "Button", "CheckBox",
                "CommandBar", "ContentDialog", "DatePicker", "FlipView", "ListViewItem",
                "PasswordBox", "Pivot", "PivotItem", "RichEditBox", "Slider", "SplitView",
                "TextBox", "TimePicker", "ToolTip", "ToggleButton", "ToggleSwitch"};

            bool failed = false;

            foreach (var control in controlsToVerify)
            {
                try
                {
                    Log.Comment($"Verify visual tree for {control}");
                    VisualTreeTestHelper.VerifyVisualTree(xaml: XamlStringForControl(control), verificationFileNamePrefix: control);
                }
                catch (Exception e)
                {
                    failed = true;
                    Log.Error(e.Message);
                }
            }

            if (failed)
            {
                Verify.Fail("One or more visual tree verification failed, see details above");
            }
        }

        [TestMethod]
        [TestProperty("TestPass:MaxOSVer", "22621")] // This test is currently failing on 23h2, hence stop at 22h2 which is 22621.
        public void VerifyVisualTreeForCommandBarCornerRadius()
        {
            var xaml =
                @"<StackPanel Width='400' Height='400' xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' 
                    xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                        <CommandBar Background='Green' CornerRadius='10,10,10,10' IsOpen='True'>
                        <AppBarToggleButton Icon='Shuffle' Label='Shuffle'  />
                        <AppBarToggleButton Icon='RepeatAll' Label='Repeat' />
                        <AppBarSeparator Margin='20,10,20,0' Foreground='Yellow'/>
        
                        <CommandBar.Content>
                            <TextBlock Text='Now playing...' Margin='12,14'/>
                        </CommandBar.Content>
                        </CommandBar>
                        <CommandBar Background='Green' CornerRadius='5,10,5,10' IsOpen='False'>
                        <AppBarToggleButton Icon='Shuffle' Label='Shuffle'  />
                        <AppBarToggleButton Icon='RepeatAll' Label='Repeat' />
                        <AppBarSeparator Margin='20,10,20,0' Padding='16,12,15,12' Foreground='Yellow'/>
                        <CommandBar.Content>
                            <TextBlock Text='Now playing...' Margin='12,14'/>
                        </CommandBar.Content>
                        </CommandBar>
                    </StackPanel>";

            VisualTreeTestHelper.VerifyVisualTree(xaml: xaml,
                verificationFileNamePrefix: "VerifyVisualTreeForCommandBarCornerRadius");
        }

        [TestMethod]
        [TestProperty("TestPass:MaxOSVer", "22621")] // This test is currently failing on 23h2, hence stop at 22h2 which is 22621.
        public void VerifyVisualTreeForCommandBarOverflowMenu()
        {
            StackPanel root = null;
            CommandBar commandBar = null;
            UIElement overflowContent = null;

            RunOnUIThread.Execute(() =>
            {
                root = (StackPanel)XamlReader.Load(
                    @"<StackPanel xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' 
                        xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                            <CommandBar x:Name='TestCommandBar'>
                                <AppBarButton Icon='AddFriend'/>
                                <AppBarButton Icon='World' Label='World'/>
                                <AppBarToggleButton Icon='Volume' Label='Volume'/>
                                <CommandBar.SecondaryCommands>
                                    <AppBarButton Label='Like'/>
                                    <AppBarButton Label='Dislike'/>
                                    <AppBarToggleButton Label='Toggle'/>
                                </CommandBar.SecondaryCommands>
                                <CommandBar.Content>
                                    <TextBlock Text='Hello World' Margin='12'/>
                                </CommandBar.Content>
                            </CommandBar>
                      </StackPanel>");

                commandBar = (CommandBar)root.FindName("TestCommandBar");
                Verify.IsNotNull(commandBar);
                Content = root;
                Content.UpdateLayout();
                commandBar.IsOpen = true;
                Content.UpdateLayout();
                var popup = VisualTreeHelper.GetOpenPopupsForXamlRoot(Content.XamlRoot).Last();
                Verify.IsNotNull(popup);
                overflowContent = popup.Child;
            });

            var visualTreeDumperFilter = new VisualTreeDumper.DefaultFilter();
            visualTreeDumperFilter.PropertyNameAllowedList.Remove("MaxWidth");
            visualTreeDumperFilter.PropertyNameAllowedList.Remove("MaxHeight");
            VisualTreeTestHelper.VerifyVisualTree(root: overflowContent, verificationFileNamePrefix: "CommandBarOverflowMenu", filter: visualTreeDumperFilter);
        }

        [TestMethod]
        public void VerifyAppBarButtonLightweightStyling()
        {
            StackPanel root = null;
            AppBarButton appBarButton = null;
            ManualResetEvent appBarButtonLoadedEvent = new ManualResetEvent(false);

            RunOnUIThread.Execute(() =>
            {
                root = (StackPanel)XamlReader.Load(
                    @"<StackPanel xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' 
                        xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                            <StackPanel.Resources>
                                <Visibility x:Key='AppBarButtonHasFlyoutChevronVisibility'>Collapsed</Visibility>
                                <SolidColorBrush x:Key='AppBarButtonSubItemChevronForeground' Color='Red' />
                                <x:String x:Key='AppBarButtonFlyoutGlyph'>&#xE972;</x:String>
                                <x:Double x:Key='AppBarButtonSubItemChevronFontSize'>12</x:Double>
                                <Thickness x:Key='AppBarButtonSubItemChevronMargin'>-24,20,12,0</Thickness>
                                <x:String x:Key='AppBarButtonOverflowFlyoutGlyph'>&#xE973;</x:String>
                                <x:Double x:Key='AppBarButtonSecondarySubItemChevronFontSize'>14</x:Double>
                                <Thickness x:Key='AppBarButtonSecondarySubItemChevronMargin'>-25,20,12,0</Thickness>
                            </StackPanel.Resources>
                            <AppBarButton x:Name='TestAppBarButton'/>
                      </StackPanel>");

                appBarButton = (AppBarButton)root.FindName("TestAppBarButton");
                appBarButton.Loaded += (sender, args) => { appBarButtonLoadedEvent.Set(); };
                Content = root;
                Content.UpdateLayout();
            });

            appBarButtonLoadedEvent.WaitOne();
            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                Panel subItemChevronPanel = (Panel)GetVisualChildByName(appBarButton, "SubItemChevronPanel");
                FontIcon subItemChevron = (FontIcon)GetVisualChildByName(appBarButton, "SubItemChevron");
                FontIcon overflowSubItemChevron = (FontIcon)GetVisualChildByName(appBarButton, "OverflowSubItemChevron");

                Verify.AreEqual((Visibility)root.Resources["AppBarButtonHasFlyoutChevronVisibility"], subItemChevronPanel.Visibility);

                Verify.AreEqual((string)root.Resources["AppBarButtonFlyoutGlyph"], subItemChevron.Glyph);
                Verify.AreEqual((double)root.Resources["AppBarButtonSubItemChevronFontSize"], subItemChevron.FontSize);
                Verify.AreEqual(((SolidColorBrush)root.Resources["AppBarButtonSubItemChevronForeground"]).Color, ((SolidColorBrush)subItemChevron.Foreground).Color);
                Verify.AreEqual((Thickness)root.Resources["AppBarButtonSubItemChevronMargin"], subItemChevron.Margin);

                Verify.AreEqual((string)root.Resources["AppBarButtonOverflowFlyoutGlyph"], overflowSubItemChevron.Glyph);
                Verify.AreEqual((double)root.Resources["AppBarButtonSecondarySubItemChevronFontSize"], overflowSubItemChevron.FontSize);
                Verify.AreEqual(((SolidColorBrush)root.Resources["AppBarButtonSubItemChevronForeground"]).Color, ((SolidColorBrush)overflowSubItemChevron.Foreground).Color);
                Verify.AreEqual((Thickness)root.Resources["AppBarButtonSecondarySubItemChevronMargin"], overflowSubItemChevron.Margin);
            });
        }

        [TestMethod]
        public void VerifyAppBarButtonChevronMarginsDoNotCollide()
        {
            StackPanel root = null;
            ManualResetEvent rootLoadedEvent = new ManualResetEvent(false);
            CommandBar commandBar = null;
            ManualResetEvent commandBarSizeChangedEvent = new ManualResetEvent(false);
            AppBarButton appBarButton = null;

            RunOnUIThread.Execute(() =>
            {
                root = (StackPanel)XamlReader.Load(
                    @"<StackPanel xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' 
                        xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                            <StackPanel.Resources>
                                <Visibility x:Key='AppBarButtonHasFlyoutChevronVisibility'>Visible</Visibility>
                                <x:String x:Key='AppBarButtonFlyoutGlyph'>&#xE972;</x:String>
                                <Thickness x:Key='AppBarButtonSubItemChevronMargin'>-22,20,12,0</Thickness>
                                <Thickness x:Key='AppBarButtonSubItemChevronLabelOnRightMargin'>-6,20,12,0</Thickness>
                                <MenuFlyout x:Key='MenuFlyout' Placement='Bottom'>
                                    <MenuFlyoutItem Text='Item 1'/>
                                    <MenuFlyoutItem Text='Item 2'/>
                                    <MenuFlyoutItem Text='Item 3'/>
                                </MenuFlyout>
                            </StackPanel.Resources>
                            <CommandBar x:Name='CommandBar' DefaultLabelPosition='Right'>
                                <AppBarButton Label='Add' Icon='Add' Flyout='{StaticResource MenuFlyout}'/>
                                <AppBarSeparator />
                                <AppBarButton x:Name='LastAppBarButton' Label='Add' Icon='Add' Flyout='{StaticResource MenuFlyout}'/>
                                <AppBarSeparator />
                                <CommandBar.SecondaryCommands>
                                    <AppBarButton Icon='Add' Label='Add' />
                                </CommandBar.SecondaryCommands>
                            </CommandBar>
                      </StackPanel>");

                root.Loaded += (sender, args) => { rootLoadedEvent.Set(); };
                commandBar = (CommandBar)root.FindName("CommandBar");
                commandBar.SizeChanged += (sender, args) => { commandBarSizeChangedEvent.Set(); };
                appBarButton = (AppBarButton)root.FindName("LastAppBarButton");

                Content = root;
                Content.UpdateLayout();
            });

            rootLoadedEvent.WaitOne();
            IdleSynchronizer.Wait();

            FontIcon subItemChevron = null;

            RunOnUIThread.Execute(() =>
            {
                subItemChevron = (FontIcon)GetVisualChildByName(appBarButton, "SubItemChevron");

                Verify.AreEqual((Thickness)root.Resources["AppBarButtonSubItemChevronLabelOnRightMargin"], subItemChevron.Margin);

                commandBarSizeChangedEvent.Reset();
                commandBar.Width = 0;
            });

            commandBarSizeChangedEvent.WaitOne();
            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                commandBarSizeChangedEvent.Reset();
                commandBar.Width = double.NaN;
            });

            commandBarSizeChangedEvent.WaitOne();
            IdleSynchronizer.Wait();

            RunOnUIThread.Execute(() =>
            {
                Verify.AreEqual((Thickness)root.Resources["AppBarButtonSubItemChevronLabelOnRightMargin"], subItemChevron.Margin);
            });
        }

        private string XamlStringForControl(string controlName)
        {
            return $@"<Grid Width='400' Height='400' xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                          <{controlName} />
                   </Grid>";
        }

        private FrameworkElement GetVisualChildByName(DependencyObject root, string name)
        {
            if (root is FrameworkElement element && element.Name == name)
            {
                return element;
            }

            int childCount = VisualTreeHelper.GetChildrenCount(root);

            for (int i = 0; i < childCount; i++)
            {
                FrameworkElement visualChild = GetVisualChildByName(VisualTreeHelper.GetChild(root, i), name);

                if (visualChild != null)
                {
                    return visualChild;
                }
            }

            return null;
        }
    }

    class ControlVisualTreeTestFilter : VisualTreeDumper.DefaultFilter
    {
        public override bool ShouldVisitProperty(string propertyName)
        {
            return base.ShouldVisitProperty(propertyName) && !propertyName.Contains("RenderSize");
        }
    }

    [TestClass]
    public class CommonStylesVisualTreeTestSamples
    {
        [TestMethod]
        [TestProperty("TestPass:IncludeOnlyOn", "Desktop")] // The default theme is different on OneCore, leading to a test failure.
        [TestProperty("TestPass:MaxOSVer", "22621")] // This test is currently failing on 23h2, hence stop at 22h2 which is 22621.
        public void VerifyVisualTreeForAppBarAndAppBarToggleButton()
        {
            var xaml = @"<Grid Width='400' Height='400' xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                            <StackPanel>
                                <AppBarButton Icon='Accept' Label='Accept'/>
                                <AppBarToggleButton Icon='Dislike' Label='Dislike'/>
                            </StackPanel>
                       </Grid>";
            VisualTreeTestHelper.VerifyVisualTree(xaml: xaml,
                verificationFileNamePrefix: "VerifyVisualTreeForAppBarAndAppBarToggleButton");
        }

        [TestMethod]
        public void VerifyVisualTreeExampleLoadAndVerifyForAllThemes()
        {
            var xaml = @"<Grid Width='400' Height='400' xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                       </Grid>";
            VisualTreeTestHelper.VerifyVisualTree(xaml: xaml,
                verificationFileNamePrefix: "VerifyVisualTreeExampleLoadAndVerifyForAllThemes",
                theme: Theme.All);
        }

        [TestMethod]
        public void VerifyVisualTreeExampleLoadAndVerifyForDarkThemeWithCustomName()
        {
            var xaml = @"<Grid Width='400' Height='400' xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                       </Grid>";
            UIElement root = VisualTreeTestHelper.SetupVisualTree(xaml);
            RunOnUIThread.Execute(() =>
            {
                (root as FrameworkElement).RequestedTheme = ElementTheme.Dark;
            });
            VisualTreeTestHelper.VerifyVisualTree(root: root,
                verificationFileNamePrefix: "VerifyVisualTreeExampleLoadAndVerifyForDarkThemeWithCustomName");
        }

        [TestMethod]
        public void VerifyVisualTreeExampleForLightTheme()
        {
            var xaml = @"<Grid Width='400' Height='400' xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                       </Grid>";
            UIElement root = VisualTreeTestHelper.SetupVisualTree(xaml);
            VisualTreeTestHelper.VerifyVisualTree(root: root,
                verificationFileNamePrefix: "VerifyVisualTreeExampleForLightTheme",
                theme: Theme.Light);
        }

        [TestMethod]
        // [TestProperty("TestPass:IncludeOnlyOn", "Desktop")] // The default theme is different on OneCore, leading to a test failure.
        [TestProperty("TestPass:MaxOSVer", "22621")] // This test is currently failing on 23h2, hence stop at 22h2 which is 22621.
        public void VerifyVisualTreeExampleWithCustomerFilter()
        {
            var xaml = @"<Grid Width='400' Height='400' xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                        <TextBlock Text='Abc' />
                       </Grid>";

            VisualTreeTestHelper.VerifyVisualTree(xaml: xaml,
                verificationFileNamePrefix: "VerifyVisualTreeExampleWithCustomerFilter",
                filter: new CustomizedFilter());
        }

        [TestMethod]
        // [TestProperty("TestPass:IncludeOnlyOn", "Desktop")] // The default theme is different on OneCore, leading to a test failure.
        public void VerifyVisualTreeExampleWithCustomerPropertyValueTranslator()
        {
            var xaml = @"<Grid Width='400' Height='400' xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml'> 
                            <TextBlock Text='Abc' />
                       </Grid>";

            VisualTreeTestHelper.VerifyVisualTree(xaml: xaml,
                verificationFileNamePrefix: "VerifyVisualTreeExampleWithCustomerPropertyValueTranslator",
                translator: new CustomizedTranslator());
        }

        class CustomizedFilter : VisualTreeDumper.IFilter
        {

            private static readonly string[] _propertyNamePostfixBlockList = new string[] { "Property", "Transitions", "Template", "Style", "Selector" };

            private static readonly string[] _propertyNameBlockList = new string[] { "Interactions", "ColumnDefinitions", "RowDefinitions",
            "Children", "Resources", "Transitions", "Dispatcher", "TemplateSettings", "ContentTemplate", "ContentTransitions",
            "ContentTemplateSelector", "Content", "ContentTemplateRoot", "XYFocusUp", "XYFocusRight", "XYFocusLeft", "Parent",
            "Triggers", "RequestedTheme", "XamlRoot", "IsLoaded", "BaseUri", "Resources"};

            private static readonly Dictionary<string, string> _knownPropertyValueDict = new Dictionary<string, string> {
                {"Padding", "0,0,0,0"},
                {"IsTabStop", "False" },
                {"IsEnabled", "True"},
                {"IsLoaded", "True" },
                {"HorizontalContentAlignment", "Center" },
                {"FontSize", "14" },
                {"TabIndex", "2147483647" },
                {"AllowFocusWhenDisabled", "False" },
                {"CharacterSpacing", "0" },
                {"BorderThickness", "0,0,0,0"},
                {"FocusState", "Unfocused"},
                {"IsTextScaleFactorEnabled", "True" },
                {"UseSystemFocusVisuals","False" },
                {"RequiresPointer","Never" },
                {"IsFocusEngagementEnabled","False" },
                {"IsFocusEngaged","False" },
                {"ElementSoundMode","Default" },
                {"CornerRadius","0,0,0,0" },
                {"BackgroundSizing","InnerBorderEdge" },
                {"Width","NaN" },
                {"Name","" },
                {"MinWidth","0" },
                {"MinHeight","0" },
                {"MaxWidth","∞" },
                {"MaxHeight","∞" },
                {"Margin","0,0,0,0" },
                {"Language","en-US" },
                {"HorizontalAlignment","Stretch" },
                {"Height","NaN" },
                {"FlowDirection","LeftToRight" },
                {"RequestedTheme","Default" },
                {"FocusVisualSecondaryThickness","1,1,1,1" },
                {"FocusVisualPrimaryThickness","2,2,2,2" },
                {"FocusVisualMargin","0,0,0,0" },
                {"AllowFocusOnInteraction","True" },
                {"Visibility","Visible" },
                {"UseLayoutRounding","True" },
                {"RenderTransformOrigin","0,0" },
                {"AllowDrop","False" },
                {"Opacity","1" },
                {"ManipulationMode","System" },
                {"IsTapEnabled","True" },
                {"IsRightTapEnabled","True" },
                {"IsHoldingEnabled","True" },
                {"IsHitTestVisible","True" },
                {"IsDoubleTapEnabled","True" },
                {"CanDrag","False" },
                {"IsAccessKeyScope","False" },
                {"ExitDisplayModeOnAccessKeyInvoked","True" },
                {"AccessKey","" },
                {"KeyTipHorizontalOffset","0" },
                {"XYFocusRightNavigationStrategy","Auto" },
                {"HighContrastAdjustment","Application" },
                {"TabFocusNavigation","Local" },
                {"XYFocusUpNavigationStrategy","Auto" },
                {"XYFocusLeftNavigationStrategy","Auto" },
                {"XYFocusKeyboardNavigation","Auto" },
                {"XYFocusDownNavigationStrategy","Auto" },
                {"KeyboardAcceleratorPlacementMode","Auto" },
                {"CanBeScrollAnchor","False" },
                {"Translation","<0, 0, 0>" },
                {"Scale","<1, 1, 1>" },
                {"RotationAxis","<0, 0, 1>" },
                {"CenterPoint","<0, 0, 0>" },
                {"Rotation","0" },
                {"TransformMatrix","{ {M11:1 M12:0 M13:0 M14:0} {M21:0 M22:1 M23:0 M24:0} {M31:0 M32:0 M33:1 M34:0} {M41:0 M42:0 M43:0 M44:1} }"},
            };

            public bool ShouldVisitPropertyValuePair(string propertyName, string value)
            {
                string v = _knownPropertyValueDict.ContainsKey(propertyName) ? _knownPropertyValueDict[propertyName] : VisualTreeDumper.ValueNULL;
                return !(v.Equals(value) || (!string.IsNullOrEmpty(value) && value.StartsWith("Exception")));
            }

            public bool ShouldVisitElement(string elementName)
            {
                return true;
            }

            public bool ShouldVisitProperty(string propertyName)
            {
                return (_propertyNamePostfixBlockList.Where(item => propertyName.EndsWith(item)).Count()) == 0 &&
                    !_propertyNameBlockList.Contains(propertyName);
            }
        }

        class CustomizedTranslator : VisualTreeDumper.DefaultPropertyValueTranslator // Add prefix MyValue to all Value
        {
            public override string PropertyValueToString(string propertyName, object value)
            {
                return "MyValue" + base.PropertyValueToString(propertyName, value);
            }
        }
    }
}