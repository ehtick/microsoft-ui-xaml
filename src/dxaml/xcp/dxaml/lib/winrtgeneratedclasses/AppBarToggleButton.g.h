// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#pragma once

#include "ToggleButton.g.h"

#define __AppBarToggleButton_GUID "755c72cc-519d-4d29-9923-9165ae798ac9"

namespace DirectUI
{
    class AppBarToggleButton;
    class AppBarToggleButtonTemplateSettings;
    class IconElement;

    class __declspec(novtable) AppBarToggleButtonGenerated:
        public DirectUI::ToggleButton
        , public ABI::Microsoft::UI::Xaml::Controls::IAppBarToggleButton
        , public ABI::Microsoft::UI::Xaml::Controls::ICommandBarElement
        , public ABI::Microsoft::UI::Xaml::Controls::ICommandBarLabeledElement
        , public ABI::Microsoft::UI::Xaml::Controls::ICommandBarOverflowElement
    {
        friend class DirectUI::AppBarToggleButton;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.AppBarToggleButton");

        BEGIN_INTERFACE_MAP(AppBarToggleButtonGenerated, DirectUI::ToggleButton)
            INTERFACE_ENTRY(AppBarToggleButtonGenerated, ABI::Microsoft::UI::Xaml::Controls::IAppBarToggleButton)
            INTERFACE_ENTRY(AppBarToggleButtonGenerated, ABI::Microsoft::UI::Xaml::Controls::ICommandBarElement)
            INTERFACE_ENTRY(AppBarToggleButtonGenerated, ABI::Microsoft::UI::Xaml::Controls::ICommandBarLabeledElement)
            INTERFACE_ENTRY(AppBarToggleButtonGenerated, ABI::Microsoft::UI::Xaml::Controls::ICommandBarOverflowElement)
        END_INTERFACE_MAP(AppBarToggleButtonGenerated, DirectUI::ToggleButton)

    public:
        AppBarToggleButtonGenerated();
        ~AppBarToggleButtonGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AppBarToggleButton;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::AppBarToggleButton;
        }

        // Properties.
        IFACEMETHOD(get_DynamicOverflowOrder)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_DynamicOverflowOrder)(INT value) override;
        IFACEMETHOD(get_Icon)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IIconElement** ppValue) override;
        IFACEMETHOD(put_Icon)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IIconElement* pValue) override;
        IFACEMETHOD(get_IsCompact)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsCompact)(BOOLEAN value) override;
        IFACEMETHOD(get_IsInOverflow)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_KeyboardAcceleratorTextOverride)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_KeyboardAcceleratorTextOverride)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_Label)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_Label)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_LabelPosition)(_Out_ ABI::Microsoft::UI::Xaml::Controls::CommandBarLabelPosition* pValue) override;
        IFACEMETHOD(put_LabelPosition)(ABI::Microsoft::UI::Xaml::Controls::CommandBarLabelPosition value) override;
        IFACEMETHOD(get_TemplateSettings)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings** ppValue) override;
        _Check_return_ HRESULT put_TemplateSettings(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings* pValue);
        IFACEMETHOD(get_UseOverflowStyle)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_UseOverflowStyle)(BOOLEAN value) override;

        // Events.

        // Methods.
        IFACEMETHOD(GetHasBottomLabel)(_Out_ BOOLEAN* pResult) override;
        IFACEMETHOD(GetHasRightLabel)(_Out_ BOOLEAN* pResult) override;
        IFACEMETHOD(SetDefaultLabelPosition)(ABI::Microsoft::UI::Xaml::Controls::CommandBarDefaultLabelPosition defaultLabelPosition) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "AppBarToggleButton_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) AppBarToggleButtonFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IAppBarToggleButtonFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IAppBarToggleButtonStatics
    {
        BEGIN_INTERFACE_MAP(AppBarToggleButtonFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(AppBarToggleButtonFactory, ABI::Microsoft::UI::Xaml::Controls::IAppBarToggleButtonFactory)
            INTERFACE_ENTRY(AppBarToggleButtonFactory, ABI::Microsoft::UI::Xaml::Controls::IAppBarToggleButtonStatics)
        END_INTERFACE_MAP(AppBarToggleButtonFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IAppBarToggleButton** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_LabelProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IconProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_LabelPositionProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_KeyboardAcceleratorTextOverrideProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_IsCompactProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsInOverflowProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DynamicOverflowOrderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AppBarToggleButton;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
