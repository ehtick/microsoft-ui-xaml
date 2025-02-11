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

#include "Style.g.h"
#include "SetterBaseCollection.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::Style::Style()
{
}

DirectUI::Style::~Style()
{
}

HRESULT DirectUI::Style::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Style)))
    {
        *ppObject = static_cast<DirectUI::Style*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IStyle)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IStyle*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::Style::get_BasedOn(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IStyle** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Style_BasedOn, ppValue));
}
IFACEMETHODIMP DirectUI::Style::put_BasedOn(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Style_BasedOn, pValue));
}
IFACEMETHODIMP DirectUI::Style::get_IsSealed(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Style_IsSealed, pValue));
}
IFACEMETHODIMP DirectUI::Style::get_Setters(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::ISetterBaseCollection** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Style_Setters, ppValue));
}
IFACEMETHODIMP DirectUI::Style::get_TargetType(_Out_ ABI::Windows::UI::Xaml::Interop::TypeName* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Style_TargetType, pValue));
}
IFACEMETHODIMP DirectUI::Style::put_TargetType(ABI::Windows::UI::Xaml::Interop::TypeName value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Style_TargetType, value));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::Style::Seal()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "Style_Seal", 0);
    }


    

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));

    IFC(static_cast<CStyle*>(GetHandle())->Seal());


Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "Style_Seal", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::StyleFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IStyleFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IStyleFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::StyleFactory::CreateInstance(ABI::Windows::UI::Xaml::Interop::TypeName targetType, _Outptr_ ABI::Microsoft::UI::Xaml::IStyle** ppInstance)
{
    HRESULT hr = S_OK;
    
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceImpl(targetType, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.





// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Style()
    {
        RRETURN(ctl::ActivationFactoryCreator<StyleFactory>::CreateActivationFactory());
    }
}
