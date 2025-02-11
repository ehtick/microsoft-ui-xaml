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

#include "AutoSuggestBoxTextChangedEventArgs.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::AutoSuggestBoxTextChangedEventArgsGenerated::AutoSuggestBoxTextChangedEventArgsGenerated()
{
}

DirectUI::AutoSuggestBoxTextChangedEventArgsGenerated::~AutoSuggestBoxTextChangedEventArgsGenerated()
{
}

HRESULT DirectUI::AutoSuggestBoxTextChangedEventArgsGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::AutoSuggestBoxTextChangedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::AutoSuggestBoxTextChangedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBoxTextChangedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBoxTextChangedEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::AutoSuggestBoxTextChangedEventArgsGenerated::get_Reason(_Out_ ABI::Microsoft::UI::Xaml::Controls::AutoSuggestionBoxTextChangeReason* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBoxTextChangedEventArgs_Reason, pValue));
}
IFACEMETHODIMP DirectUI::AutoSuggestBoxTextChangedEventArgsGenerated::put_Reason(ABI::Microsoft::UI::Xaml::Controls::AutoSuggestionBoxTextChangeReason value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AutoSuggestBoxTextChangedEventArgs_Reason, value));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::AutoSuggestBoxTextChangedEventArgsGenerated::CheckCurrent(_Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "AutoSuggestBoxTextChangedEventArgs_CheckCurrent", 0);
    }
    ARG_VALIDRETURNPOINTER(pReturnValue);
    *pReturnValue={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<AutoSuggestBoxTextChangedEventArgs*>(this)->CheckCurrentImpl(pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "AutoSuggestBoxTextChangedEventArgs_CheckCurrent", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::AutoSuggestBoxTextChangedEventArgsFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBoxTextChangedEventArgsStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IAutoSuggestBoxTextChangedEventArgsStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::AutoSuggestBoxTextChangedEventArgsFactory::get_ReasonProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AutoSuggestBoxTextChangedEventArgs_Reason, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_AutoSuggestBoxTextChangedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<AutoSuggestBoxTextChangedEventArgsFactory>::CreateActivationFactory());
    }
}
