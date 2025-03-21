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

#include "Control.g.h"
#include <FeatureFlags.h>
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement) 
#define FEATURE_HEADERPLACEMENT_OVERRIDE override
#else
#define FEATURE_HEADERPLACEMENT_OVERRIDE
#endif
#define __ToggleSwitch_GUID "4a16430c-8a1b-435a-9100-17795a709d05"

namespace DirectUI
{
    class ToggleSwitch;
    class DataTemplate;
    class ToggleSwitchTemplateSettings;

    class __declspec(novtable) ToggleSwitchGenerated:
        public DirectUI::Control
        , public ABI::Microsoft::UI::Xaml::Controls::IToggleSwitch
        , public ABI::Microsoft::UI::Xaml::Controls::IToggleSwitchOverrides
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
        , public ABI::Microsoft::UI::Xaml::Controls::IToggleSwitchFeature_HeaderPlacement
#endif
    {
        friend class DirectUI::ToggleSwitch;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ToggleSwitch");

        BEGIN_INTERFACE_MAP(ToggleSwitchGenerated, DirectUI::Control)
            INTERFACE_ENTRY(ToggleSwitchGenerated, ABI::Microsoft::UI::Xaml::Controls::IToggleSwitch)
            INTERFACE_ENTRY(ToggleSwitchGenerated, ABI::Microsoft::UI::Xaml::Controls::IToggleSwitchOverrides)
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
            INTERFACE_ENTRY(ToggleSwitchGenerated, ABI::Microsoft::UI::Xaml::Controls::IToggleSwitchFeature_HeaderPlacement)
#endif
        END_INTERFACE_MAP(ToggleSwitchGenerated, DirectUI::Control)

    public:
        ToggleSwitchGenerated();
        ~ToggleSwitchGenerated() override;

        // Event source typedefs.
        typedef CRoutedEventSource<ABI::Microsoft::UI::Xaml::IRoutedEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::IRoutedEventArgs> ToggledEventSourceType;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ToggleSwitch;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ToggleSwitch;
        }

        // Properties.
        IFACEMETHOD(get_Header)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Header)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_HeaderPlacement)(_Out_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement* pValue) FEATURE_HEADERPLACEMENT_OVERRIDE;
        IFACEMETHOD(put_HeaderPlacement)(ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement value) FEATURE_HEADERPLACEMENT_OVERRIDE;
        IFACEMETHOD(get_HeaderTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_HeaderTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_IsOn)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsOn)(BOOLEAN value) override;
        IFACEMETHOD(get_OffContent)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_OffContent)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_OffContentTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_OffContentTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_OnContent)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_OnContent)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_OnContentTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_OnContentTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_TemplateSettings)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings** ppValue) override;
        _Check_return_ HRESULT put_TemplateSettings(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings* pValue);

        // Events.
        _Check_return_ HRESULT GetToggledEventSourceNoRef(_Outptr_ ToggledEventSourceType** ppEventSource);
        IFACEMETHOD(add_Toggled)(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_Toggled)(EventRegistrationToken token) override;

        // Methods.
        IFACEMETHOD(OnHeaderChanged)(_In_opt_ IInspectable* pOldContent, _In_opt_ IInspectable* pNewContent) override;
        _Check_return_ HRESULT OnHeaderChangedProtected(_In_opt_ IInspectable* pOldContent, _In_opt_ IInspectable* pNewContent);
        IFACEMETHOD(OnOffContentChanged)(_In_opt_ IInspectable* pOldContent, _In_opt_ IInspectable* pNewContent) override;
        _Check_return_ HRESULT OnOffContentChangedProtected(_In_opt_ IInspectable* pOldContent, _In_opt_ IInspectable* pNewContent);
        IFACEMETHOD(OnOnContentChanged)(_In_opt_ IInspectable* pOldContent, _In_opt_ IInspectable* pNewContent) override;
        _Check_return_ HRESULT OnOnContentChangedProtected(_In_opt_ IInspectable* pOldContent, _In_opt_ IInspectable* pNewContent);
        IFACEMETHOD(OnToggled)() override;
        _Check_return_ HRESULT OnToggledProtected();


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
        _Check_return_ HRESULT EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo) override;
        _Check_return_ HRESULT EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler) override;

    private:

        // Fields.
    };
}

#include "ToggleSwitch_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ToggleSwitchFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IToggleSwitchStatics
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
        , public ABI::Microsoft::UI::Xaml::Controls::IToggleSwitchStaticsFeature_HeaderPlacement
#endif
    {
        BEGIN_INTERFACE_MAP(ToggleSwitchFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(ToggleSwitchFactory, ABI::Microsoft::UI::Xaml::Controls::IToggleSwitchStatics)
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
            INTERFACE_ENTRY(ToggleSwitchFactory, ABI::Microsoft::UI::Xaml::Controls::IToggleSwitchStaticsFeature_HeaderPlacement)
#endif
        END_INTERFACE_MAP(ToggleSwitchFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_IsOnProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_OnContentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_OnContentTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_OffContentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_OffContentTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        
        IFACEMETHOD(get_HeaderPlacementProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_HEADERPLACEMENT_OVERRIDE;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ToggleSwitch;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
