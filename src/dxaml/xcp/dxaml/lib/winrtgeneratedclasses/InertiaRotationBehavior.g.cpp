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

#include "InertiaRotationBehavior.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::InertiaRotationBehavior::InertiaRotationBehavior()
{
}

DirectUI::InertiaRotationBehavior::~InertiaRotationBehavior()
{
}

HRESULT DirectUI::InertiaRotationBehavior::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::InertiaRotationBehavior)))
    {
        *ppObject = static_cast<DirectUI::InertiaRotationBehavior*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IInertiaRotationBehavior)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IInertiaRotationBehavior*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::InertiaRotationBehavior::get_DesiredDeceleration(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::InertiaRotationBehavior_DesiredDeceleration, pValue));
}
IFACEMETHODIMP DirectUI::InertiaRotationBehavior::put_DesiredDeceleration(DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::InertiaRotationBehavior_DesiredDeceleration, value));
}
IFACEMETHODIMP DirectUI::InertiaRotationBehavior::get_DesiredRotation(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::InertiaRotationBehavior_DesiredRotation, pValue));
}
IFACEMETHODIMP DirectUI::InertiaRotationBehavior::put_DesiredRotation(DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::InertiaRotationBehavior_DesiredRotation, value));
}

// Events.

// Methods.

// Factory methods.

// Dependency properties.



// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_InertiaRotationBehavior()
    {
        RRETURN(ctl::ActivationFactoryCreator<InertiaRotationBehaviorFactory>::CreateActivationFactory());
    }
}
