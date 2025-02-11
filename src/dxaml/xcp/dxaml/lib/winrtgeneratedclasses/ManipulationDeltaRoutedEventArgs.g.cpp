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
#include "ManipulationDeltaRoutedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::ManipulationDeltaRoutedEventArgsGenerated::ManipulationDeltaRoutedEventArgsGenerated()
{
}

DirectUI::ManipulationDeltaRoutedEventArgsGenerated::~ManipulationDeltaRoutedEventArgsGenerated()
{
}

HRESULT DirectUI::ManipulationDeltaRoutedEventArgsGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ManipulationDeltaRoutedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::ManipulationDeltaRoutedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::RoutedEventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

CEventArgs* DirectUI::ManipulationDeltaRoutedEventArgsGenerated::CreateCorePeer()
{
    return new CManipulationDeltaEventArgs(DXamlCore::GetCurrent()->GetHandle());
}

// Properties.
IFACEMETHODIMP DirectUI::ManipulationDeltaRoutedEventArgsGenerated::get_Container(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    CUIElement* pValueCore = nullptr;

    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationDeltaEventArgs*>(pCoreEventArgsNoRef)->get_Container(&pValueCore));

    IFC(CValueBoxer::ConvertToFramework(pValueCore, ppValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationDeltaRoutedEventArgsGenerated::get_Position(_Out_ ABI::Windows::Foundation::Point* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    ABI::Windows::Foundation::Point valueCore;

    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationDeltaEventArgs*>(pCoreEventArgsNoRef)->get_Position(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationDeltaRoutedEventArgsGenerated::get_IsInertial(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore;

    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationDeltaEventArgs*>(pCoreEventArgsNoRef)->get_IsInertial(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationDeltaRoutedEventArgsGenerated::get_Delta(_Out_ ABI::Microsoft::UI::Input::ManipulationDelta* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<ManipulationDeltaRoutedEventArgs*>(this)->get_DeltaImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationDeltaRoutedEventArgsGenerated::get_Cumulative(_Out_ ABI::Microsoft::UI::Input::ManipulationDelta* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<ManipulationDeltaRoutedEventArgs*>(this)->get_CumulativeImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationDeltaRoutedEventArgsGenerated::get_Velocities(_Out_ ABI::Microsoft::UI::Input::ManipulationVelocities* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<ManipulationDeltaRoutedEventArgs*>(this)->get_VelocitiesImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationDeltaRoutedEventArgsGenerated::get_Handled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore;

    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationDeltaEventArgs*>(pCoreEventArgsNoRef)->get_Handled(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationDeltaRoutedEventArgsGenerated::put_Handled(BOOLEAN value)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore = value;

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationDeltaEventArgs*>(pCoreEventArgsNoRef)->put_Handled(valueCore));


Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationDeltaRoutedEventArgsGenerated::get_PointerDeviceType(_Out_ ABI::Microsoft::UI::Input::PointerDeviceType* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    DirectUI::PointerDeviceType valueCore;

    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationDeltaEventArgs*>(pCoreEventArgsNoRef)->get_PointerDeviceType(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::ManipulationDeltaRoutedEventArgsGenerated::Complete()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ManipulationDeltaRoutedEventArgs_Complete", 0);
    }
    CEventArgs* pCoreEventArgsNoRef = nullptr;


    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationDeltaEventArgs*>(pCoreEventArgsNoRef)->Complete());


Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ManipulationDeltaRoutedEventArgs_Complete", hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateManipulationDeltaRoutedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::ManipulationDeltaRoutedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_ManipulationDeltaRoutedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::ActivationFactory<DirectUI::ManipulationDeltaRoutedEventArgs>>::CreateActivationFactory());
    }
}
