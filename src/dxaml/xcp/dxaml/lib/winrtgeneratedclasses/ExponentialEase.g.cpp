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

#include "ExponentialEase.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::ExponentialEase::ExponentialEase()
{
}

DirectUI::ExponentialEase::~ExponentialEase()
{
}

HRESULT DirectUI::ExponentialEase::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ExponentialEase)))
    {
        *ppObject = static_cast<DirectUI::ExponentialEase*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IExponentialEase)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IExponentialEase*>(this);
    }
    else
    {
        RRETURN(DirectUI::EasingFunctionBase::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ExponentialEase::get_Exponent(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ExponentialEase_Exponent, pValue));
}
IFACEMETHODIMP DirectUI::ExponentialEase::put_Exponent(DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ExponentialEase_Exponent, value));
}

// Events.

// Methods.

HRESULT DirectUI::ExponentialEaseFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IExponentialEaseStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IExponentialEaseStatics*>(this);
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
IFACEMETHODIMP DirectUI::ExponentialEaseFactory::get_ExponentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ExponentialEase_Exponent, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ExponentialEase()
    {
        RRETURN(ctl::ActivationFactoryCreator<ExponentialEaseFactory>::CreateActivationFactory());
    }
}
