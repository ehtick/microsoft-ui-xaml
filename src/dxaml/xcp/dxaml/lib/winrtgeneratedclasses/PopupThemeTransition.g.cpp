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

#include "PopupThemeTransition.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::PopupThemeTransitionGenerated::PopupThemeTransitionGenerated()
{
}

DirectUI::PopupThemeTransitionGenerated::~PopupThemeTransitionGenerated()
{
}

HRESULT DirectUI::PopupThemeTransitionGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::PopupThemeTransition)))
    {
        *ppObject = static_cast<DirectUI::PopupThemeTransition*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IPopupThemeTransition)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IPopupThemeTransition*>(this);
    }
    else
    {
        RRETURN(DirectUI::Transition::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::PopupThemeTransitionGenerated::get_FromHorizontalOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PopupThemeTransition_FromHorizontalOffset, pValue));
}
IFACEMETHODIMP DirectUI::PopupThemeTransitionGenerated::put_FromHorizontalOffset(DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PopupThemeTransition_FromHorizontalOffset, value));
}
IFACEMETHODIMP DirectUI::PopupThemeTransitionGenerated::get_FromVerticalOffset(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PopupThemeTransition_FromVerticalOffset, pValue));
}
IFACEMETHODIMP DirectUI::PopupThemeTransitionGenerated::put_FromVerticalOffset(DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PopupThemeTransition_FromVerticalOffset, value));
}

// Events.

// Methods.

HRESULT DirectUI::PopupThemeTransitionFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics*>(this);
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
IFACEMETHODIMP DirectUI::PopupThemeTransitionFactory::get_FromHorizontalOffsetProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PopupThemeTransition_FromHorizontalOffset, ppValue));
}
IFACEMETHODIMP DirectUI::PopupThemeTransitionFactory::get_FromVerticalOffsetProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PopupThemeTransition_FromVerticalOffset, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_PopupThemeTransition()
    {
        RRETURN(ctl::ActivationFactoryCreator<PopupThemeTransitionFactory>::CreateActivationFactory());
    }
}
