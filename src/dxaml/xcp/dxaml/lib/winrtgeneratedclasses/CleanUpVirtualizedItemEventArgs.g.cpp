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
#include "CleanUpVirtualizedItemEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::CleanUpVirtualizedItemEventArgs::CleanUpVirtualizedItemEventArgs(): m_cancel()
{
}

DirectUI::CleanUpVirtualizedItemEventArgs::~CleanUpVirtualizedItemEventArgs()
{
}

HRESULT DirectUI::CleanUpVirtualizedItemEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::CleanUpVirtualizedItemEventArgs)))
    {
        *ppObject = static_cast<DirectUI::CleanUpVirtualizedItemEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICleanUpVirtualizedItemEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICleanUpVirtualizedItemEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::RoutedEventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.
IFACEMETHODIMP DirectUI::CleanUpVirtualizedItemEventArgs::get_Value(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(m_pValue.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::CleanUpVirtualizedItemEventArgs::put_Value(_In_opt_ IInspectable* pValue)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    SetPtrValue(m_pValue, pValue);
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CleanUpVirtualizedItemEventArgs::get_UIElement(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(m_pUIElement.CopyTo(ppValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::CleanUpVirtualizedItemEventArgs::put_UIElement(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    SetPtrValue(m_pUIElement, pValue);
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CleanUpVirtualizedItemEventArgs::get_Cancel(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(m_cancel, pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CleanUpVirtualizedItemEventArgs::put_Cancel(BOOLEAN value)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(value, &m_cancel));
Cleanup:
    RRETURN(hr);
}

// Methods.


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateCleanUpVirtualizedItemEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::CleanUpVirtualizedItemEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_CleanUpVirtualizedItemEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}
