// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TitleBar.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(TitleBar)
}

#include "TitleBar.g.cpp"

GlobalDependencyProperty TitleBarProperties::s_ContentProperty{ nullptr };
GlobalDependencyProperty TitleBarProperties::s_IconSourceProperty{ nullptr };
GlobalDependencyProperty TitleBarProperties::s_IsBackButtonEnabledProperty{ nullptr };
GlobalDependencyProperty TitleBarProperties::s_IsBackButtonVisibleProperty{ nullptr };
GlobalDependencyProperty TitleBarProperties::s_IsPaneToggleButtonVisibleProperty{ nullptr };
GlobalDependencyProperty TitleBarProperties::s_LeftHeaderProperty{ nullptr };
GlobalDependencyProperty TitleBarProperties::s_RightHeaderProperty{ nullptr };
GlobalDependencyProperty TitleBarProperties::s_SubtitleProperty{ nullptr };
GlobalDependencyProperty TitleBarProperties::s_TemplateSettingsProperty{ nullptr };
GlobalDependencyProperty TitleBarProperties::s_TitleProperty{ nullptr };

TitleBarProperties::TitleBarProperties()
    : m_backRequestedEventSource{static_cast<TitleBar*>(this)}
    , m_paneToggleRequestedEventSource{static_cast<TitleBar*>(this)}
{
    EnsureProperties();
}

void TitleBarProperties::EnsureProperties()
{
    if (!s_ContentProperty)
    {
        s_ContentProperty =
            InitializeDependencyProperty(
                L"Content",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::TitleBar>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnContentPropertyChanged));
    }
    if (!s_IconSourceProperty)
    {
        s_IconSourceProperty =
            InitializeDependencyProperty(
                L"IconSource",
                winrt::name_of<winrt::IconSource>(),
                winrt::name_of<winrt::TitleBar>(),
                false /* isAttached */,
                ValueHelper<winrt::IconSource>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIconSourcePropertyChanged));
    }
    if (!s_IsBackButtonEnabledProperty)
    {
        s_IsBackButtonEnabledProperty =
            InitializeDependencyProperty(
                L"IsBackButtonEnabled",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TitleBar>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsBackButtonEnabledPropertyChanged));
    }
    if (!s_IsBackButtonVisibleProperty)
    {
        s_IsBackButtonVisibleProperty =
            InitializeDependencyProperty(
                L"IsBackButtonVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TitleBar>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnIsBackButtonVisiblePropertyChanged));
    }
    if (!s_IsPaneToggleButtonVisibleProperty)
    {
        s_IsPaneToggleButtonVisibleProperty =
            InitializeDependencyProperty(
                L"IsPaneToggleButtonVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TitleBar>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnIsPaneToggleButtonVisiblePropertyChanged));
    }
    if (!s_LeftHeaderProperty)
    {
        s_LeftHeaderProperty =
            InitializeDependencyProperty(
                L"LeftHeader",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::TitleBar>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnLeftHeaderPropertyChanged));
    }
    if (!s_RightHeaderProperty)
    {
        s_RightHeaderProperty =
            InitializeDependencyProperty(
                L"RightHeader",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::TitleBar>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnRightHeaderPropertyChanged));
    }
    if (!s_SubtitleProperty)
    {
        s_SubtitleProperty =
            InitializeDependencyProperty(
                L"Subtitle",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::TitleBar>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSubtitlePropertyChanged));
    }
    if (!s_TemplateSettingsProperty)
    {
        s_TemplateSettingsProperty =
            InitializeDependencyProperty(
                L"TemplateSettings",
                winrt::name_of<winrt::TitleBarTemplateSettings>(),
                winrt::name_of<winrt::TitleBar>(),
                false /* isAttached */,
                ValueHelper<winrt::TitleBarTemplateSettings>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnTemplateSettingsPropertyChanged));
    }
    if (!s_TitleProperty)
    {
        s_TitleProperty =
            InitializeDependencyProperty(
                L"Title",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::TitleBar>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnTitlePropertyChanged));
    }
}

void TitleBarProperties::ClearProperties()
{
    s_ContentProperty = nullptr;
    s_IconSourceProperty = nullptr;
    s_IsBackButtonEnabledProperty = nullptr;
    s_IsBackButtonVisibleProperty = nullptr;
    s_IsPaneToggleButtonVisibleProperty = nullptr;
    s_LeftHeaderProperty = nullptr;
    s_RightHeaderProperty = nullptr;
    s_SubtitleProperty = nullptr;
    s_TemplateSettingsProperty = nullptr;
    s_TitleProperty = nullptr;
}

void TitleBarProperties::OnContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TitleBar>();
    winrt::get_self<TitleBar>(owner)->OnPropertyChanged(args);
}

void TitleBarProperties::OnIconSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TitleBar>();
    winrt::get_self<TitleBar>(owner)->OnPropertyChanged(args);
}

void TitleBarProperties::OnIsBackButtonEnabledPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TitleBar>();
    winrt::get_self<TitleBar>(owner)->OnPropertyChanged(args);
}

void TitleBarProperties::OnIsBackButtonVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TitleBar>();
    winrt::get_self<TitleBar>(owner)->OnPropertyChanged(args);
}

void TitleBarProperties::OnIsPaneToggleButtonVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TitleBar>();
    winrt::get_self<TitleBar>(owner)->OnPropertyChanged(args);
}

void TitleBarProperties::OnLeftHeaderPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TitleBar>();
    winrt::get_self<TitleBar>(owner)->OnPropertyChanged(args);
}

void TitleBarProperties::OnRightHeaderPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TitleBar>();
    winrt::get_self<TitleBar>(owner)->OnPropertyChanged(args);
}

void TitleBarProperties::OnSubtitlePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TitleBar>();
    winrt::get_self<TitleBar>(owner)->OnPropertyChanged(args);
}

void TitleBarProperties::OnTemplateSettingsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TitleBar>();
    winrt::get_self<TitleBar>(owner)->OnPropertyChanged(args);
}

void TitleBarProperties::OnTitlePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TitleBar>();
    winrt::get_self<TitleBar>(owner)->OnPropertyChanged(args);
}

void TitleBarProperties::Content(winrt::UIElement const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TitleBar*>(this)->SetValue(s_ContentProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
    }
}

winrt::UIElement TitleBarProperties::Content()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<TitleBar*>(this)->GetValue(s_ContentProperty));
}

void TitleBarProperties::IconSource(winrt::IconSource const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TitleBar*>(this)->SetValue(s_IconSourceProperty, ValueHelper<winrt::IconSource>::BoxValueIfNecessary(value));
    }
}

winrt::IconSource TitleBarProperties::IconSource()
{
    return ValueHelper<winrt::IconSource>::CastOrUnbox(static_cast<TitleBar*>(this)->GetValue(s_IconSourceProperty));
}

void TitleBarProperties::IsBackButtonEnabled(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TitleBar*>(this)->SetValue(s_IsBackButtonEnabledProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool TitleBarProperties::IsBackButtonEnabled()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TitleBar*>(this)->GetValue(s_IsBackButtonEnabledProperty));
}

void TitleBarProperties::IsBackButtonVisible(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TitleBar*>(this)->SetValue(s_IsBackButtonVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool TitleBarProperties::IsBackButtonVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TitleBar*>(this)->GetValue(s_IsBackButtonVisibleProperty));
}

void TitleBarProperties::IsPaneToggleButtonVisible(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TitleBar*>(this)->SetValue(s_IsPaneToggleButtonVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool TitleBarProperties::IsPaneToggleButtonVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TitleBar*>(this)->GetValue(s_IsPaneToggleButtonVisibleProperty));
}

void TitleBarProperties::LeftHeader(winrt::UIElement const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TitleBar*>(this)->SetValue(s_LeftHeaderProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
    }
}

winrt::UIElement TitleBarProperties::LeftHeader()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<TitleBar*>(this)->GetValue(s_LeftHeaderProperty));
}

void TitleBarProperties::RightHeader(winrt::UIElement const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TitleBar*>(this)->SetValue(s_RightHeaderProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
    }
}

winrt::UIElement TitleBarProperties::RightHeader()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<TitleBar*>(this)->GetValue(s_RightHeaderProperty));
}

void TitleBarProperties::Subtitle(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TitleBar*>(this)->SetValue(s_SubtitleProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring TitleBarProperties::Subtitle()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<TitleBar*>(this)->GetValue(s_SubtitleProperty));
}

void TitleBarProperties::TemplateSettings(winrt::TitleBarTemplateSettings const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TitleBar*>(this)->SetValue(s_TemplateSettingsProperty, ValueHelper<winrt::TitleBarTemplateSettings>::BoxValueIfNecessary(value));
    }
}

winrt::TitleBarTemplateSettings TitleBarProperties::TemplateSettings()
{
    return ValueHelper<winrt::TitleBarTemplateSettings>::CastOrUnbox(static_cast<TitleBar*>(this)->GetValue(s_TemplateSettingsProperty));
}

void TitleBarProperties::Title(winrt::hstring const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<TitleBar*>(this)->SetValue(s_TitleProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
    }
}

winrt::hstring TitleBarProperties::Title()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<TitleBar*>(this)->GetValue(s_TitleProperty));
}

winrt::event_token TitleBarProperties::BackRequested(winrt::TypedEventHandler<winrt::TitleBar, winrt::IInspectable> const& value)
{
    return m_backRequestedEventSource.add(value);
}

void TitleBarProperties::BackRequested(winrt::event_token const& token)
{
    m_backRequestedEventSource.remove(token);
}

winrt::event_token TitleBarProperties::PaneToggleRequested(winrt::TypedEventHandler<winrt::TitleBar, winrt::IInspectable> const& value)
{
    return m_paneToggleRequestedEventSource.add(value);
}

void TitleBarProperties::PaneToggleRequested(winrt::event_token const& token)
{
    m_paneToggleRequestedEventSource.remove(token);
}
