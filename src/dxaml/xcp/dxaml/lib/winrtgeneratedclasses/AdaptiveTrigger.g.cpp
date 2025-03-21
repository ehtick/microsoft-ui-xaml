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

#include "AdaptiveTrigger.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::AdaptiveTrigger::AdaptiveTrigger()
{
}

DirectUI::AdaptiveTrigger::~AdaptiveTrigger()
{
}

HRESULT DirectUI::AdaptiveTrigger::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::AdaptiveTrigger)))
    {
        *ppObject = static_cast<DirectUI::AdaptiveTrigger*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IAdaptiveTrigger)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IAdaptiveTrigger*>(this);
    }
    else
    {
        RRETURN(DirectUI::StateTriggerBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::AdaptiveTrigger::get_MinWindowHeight(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AdaptiveTrigger_MinWindowHeight, pValue));
}
IFACEMETHODIMP DirectUI::AdaptiveTrigger::put_MinWindowHeight(DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AdaptiveTrigger_MinWindowHeight, value));
}
IFACEMETHODIMP DirectUI::AdaptiveTrigger::get_MinWindowWidth(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AdaptiveTrigger_MinWindowWidth, pValue));
}
IFACEMETHODIMP DirectUI::AdaptiveTrigger::put_MinWindowWidth(DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AdaptiveTrigger_MinWindowWidth, value));
}

// Events.

// Methods.

HRESULT DirectUI::AdaptiveTriggerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IAdaptiveTriggerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IAdaptiveTriggerFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IAdaptiveTriggerStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IAdaptiveTriggerStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::AdaptiveTriggerFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IAdaptiveTrigger** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::IAdaptiveTrigger);
    const GUID metadataAPIGUID = MetadataAPI::GetClassInfoByIndex(GetTypeIndex())->GetGuid();
    const KnownTypeIndex typeIndex = GetTypeIndex();

    if(uuidofGUID != metadataAPIGUID)
    {
        XAML_FAIL_FAST();
    }
#endif

    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::AdaptiveTriggerFactory::get_MinWindowWidthProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AdaptiveTrigger_MinWindowWidth, ppValue));
}
IFACEMETHODIMP DirectUI::AdaptiveTriggerFactory::get_MinWindowHeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::AdaptiveTrigger_MinWindowHeight, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_AdaptiveTrigger()
    {
        RRETURN(ctl::ActivationFactoryCreator<AdaptiveTriggerFactory>::CreateActivationFactory());
    }
}
