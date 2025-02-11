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
#include "TextControlCopyingToClipboardEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::TextControlCopyingToClipboardEventArgs::TextControlCopyingToClipboardEventArgs()
{
}

DirectUI::TextControlCopyingToClipboardEventArgs::~TextControlCopyingToClipboardEventArgs()
{
}

HRESULT DirectUI::TextControlCopyingToClipboardEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TextControlCopyingToClipboardEventArgs)))
    {
        *ppObject = static_cast<DirectUI::TextControlCopyingToClipboardEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ITextControlCopyingToClipboardEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ITextControlCopyingToClipboardEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::EventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.
IFACEMETHODIMP DirectUI::TextControlCopyingToClipboardEventArgs::get_Handled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore;

    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CTextControlCopyingToClipboardEventArgs*>(pCoreEventArgsNoRef)->get_Handled(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TextControlCopyingToClipboardEventArgs::put_Handled(BOOLEAN value)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore = value;

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CTextControlCopyingToClipboardEventArgs*>(pCoreEventArgsNoRef)->put_Handled(valueCore));


Cleanup:
    RRETURN(hr);
}

// Methods.


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateTextControlCopyingToClipboardEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::TextControlCopyingToClipboardEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_TextControlCopyingToClipboardEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}
