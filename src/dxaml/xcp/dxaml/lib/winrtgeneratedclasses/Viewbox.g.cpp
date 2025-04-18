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

#include "Viewbox.g.h"
#include "UIElement.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::Viewbox::Viewbox()
{
}

DirectUI::Viewbox::~Viewbox()
{
}

HRESULT DirectUI::Viewbox::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Viewbox)))
    {
        *ppObject = static_cast<DirectUI::Viewbox*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IViewbox)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IViewbox*>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElement::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::Viewbox::get_Child(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Viewbox_Child, ppValue));
}
IFACEMETHODIMP DirectUI::Viewbox::put_Child(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Viewbox_Child, pValue));
}
IFACEMETHODIMP DirectUI::Viewbox::get_Stretch(_Out_ ABI::Microsoft::UI::Xaml::Media::Stretch* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Viewbox_Stretch, pValue));
}
IFACEMETHODIMP DirectUI::Viewbox::put_Stretch(ABI::Microsoft::UI::Xaml::Media::Stretch value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Viewbox_Stretch, value));
}
IFACEMETHODIMP DirectUI::Viewbox::get_StretchDirection(_Out_ ABI::Microsoft::UI::Xaml::Controls::StretchDirection* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Viewbox_StretchDirection, pValue));
}
IFACEMETHODIMP DirectUI::Viewbox::put_StretchDirection(ABI::Microsoft::UI::Xaml::Controls::StretchDirection value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Viewbox_StretchDirection, value));
}

// Events.

// Methods.

HRESULT DirectUI::ViewboxFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IViewboxStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IViewboxStatics*>(this);
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

IFACEMETHODIMP DirectUI::ViewboxFactory::get_StretchProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Viewbox_Stretch, ppValue));
}
IFACEMETHODIMP DirectUI::ViewboxFactory::get_StretchDirectionProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Viewbox_StretchDirection, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Viewbox()
    {
        RRETURN(ctl::ActivationFactoryCreator<ViewboxFactory>::CreateActivationFactory());
    }
}
