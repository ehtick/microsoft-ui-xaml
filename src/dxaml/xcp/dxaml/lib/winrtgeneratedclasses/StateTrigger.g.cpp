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

#include "StateTrigger.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::StateTrigger::StateTrigger()
{
}

DirectUI::StateTrigger::~StateTrigger()
{
}

HRESULT DirectUI::StateTrigger::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::StateTrigger)))
    {
        *ppObject = static_cast<DirectUI::StateTrigger*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IStateTrigger)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IStateTrigger*>(this);
    }
    else
    {
        RRETURN(DirectUI::StateTriggerBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::StateTrigger::get_IsActive(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::StateTrigger_IsActive, pValue));
}
IFACEMETHODIMP DirectUI::StateTrigger::put_IsActive(BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::StateTrigger_IsActive, value));
}

// Events.

// Methods.

HRESULT DirectUI::StateTriggerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IStateTriggerStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IStateTriggerStatics*>(this);
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
IFACEMETHODIMP DirectUI::StateTriggerFactory::get_IsActiveProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::StateTrigger_IsActive, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_StateTrigger()
    {
        RRETURN(ctl::ActivationFactoryCreator<StateTriggerFactory>::CreateActivationFactory());
    }
}
