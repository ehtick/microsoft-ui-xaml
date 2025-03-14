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

#include "precomp.h"
#include "SemanticZoomViewChangedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::SemanticZoomViewChangedEventArgs::SemanticZoomViewChangedEventArgs(): m_isSourceZoomedInView()
{
}

DirectUI::SemanticZoomViewChangedEventArgs::~SemanticZoomViewChangedEventArgs()
{
}

HRESULT DirectUI::SemanticZoomViewChangedEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::SemanticZoomViewChangedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::SemanticZoomViewChangedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::EventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.
IFACEMETHODIMP DirectUI::SemanticZoomViewChangedEventArgs::get_IsSourceZoomedInView(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(m_isSourceZoomedInView, pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::SemanticZoomViewChangedEventArgs::put_IsSourceZoomedInView(BOOLEAN value)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(value, &m_isSourceZoomedInView));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::SemanticZoomViewChangedEventArgs::get_SourceItem(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(m_pSourceItem.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::SemanticZoomViewChangedEventArgs::put_SourceItem(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pValue)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    SetPtrValue(m_pSourceItem, pValue);
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::SemanticZoomViewChangedEventArgs::get_DestinationItem(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(m_pDestinationItem.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::SemanticZoomViewChangedEventArgs::put_DestinationItem(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomLocation* pValue)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    SetPtrValue(m_pDestinationItem, pValue);
Cleanup:
    RRETURN(hr);
}

// Methods.


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateSemanticZoomViewChangedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::SemanticZoomViewChangedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_SemanticZoomViewChangedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::ActivationFactory<DirectUI::SemanticZoomViewChangedEventArgs>>::CreateActivationFactory());
    }
}
