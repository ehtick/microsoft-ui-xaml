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

#include "XamlCompositionBrushBase.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::XamlCompositionBrushBaseGenerated::XamlCompositionBrushBaseGenerated()
{
}

DirectUI::XamlCompositionBrushBaseGenerated::~XamlCompositionBrushBaseGenerated()
{
}

HRESULT DirectUI::XamlCompositionBrushBaseGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::XamlCompositionBrushBase)))
    {
        *ppObject = static_cast<DirectUI::XamlCompositionBrushBase*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBase)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBase*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBaseProtected)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBaseProtected*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBasePrivates)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBasePrivates*>(this);
    }
    else
    {
        RRETURN(DirectUI::Brush::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseGenerated::get_CompositionBrush(_Outptr_result_maybenull_ ABI::Microsoft::UI::Composition::ICompositionBrush** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckThread());
    IFC(static_cast<XamlCompositionBrushBase*>(this)->get_CompositionBrushImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseGenerated::put_CompositionBrush(_In_opt_ ABI::Microsoft::UI::Composition::ICompositionBrush* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlCompositionBrushBase*>(this)->put_CompositionBrushImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseGenerated::get_FallbackColor(_Out_ ABI::Windows::UI::Color* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::XamlCompositionBrushBase_FallbackColor, pValue));
}
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseGenerated::put_FallbackColor(ABI::Windows::UI::Color value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::XamlCompositionBrushBase_FallbackColor, value));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseGenerated::ClearBrushForXamlRoot(_In_ IInspectable* pXamlRoot, _In_ ABI::Microsoft::UI::Composition::ICompositionBrush* pBrush)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_ClearBrushForXamlRoot", 0);
    }
    ARG_NOTNULL(pXamlRoot, "xamlRoot");
    ARG_NOTNULL(pBrush, "brush");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlCompositionBrushBase*>(this)->ClearBrushForXamlRootImpl(pXamlRoot, pBrush));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_ClearBrushForXamlRoot", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseGenerated::ClearCompositionBrushMap()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_ClearCompositionBrushMap", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlCompositionBrushBase*>(this)->ClearCompositionBrushMapImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_ClearCompositionBrushMap", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseGenerated::GetBrushForXamlRoot(_In_ IInspectable* pXamlRoot, _Outptr_ ABI::Microsoft::UI::Composition::ICompositionBrush** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_GetBrushForXamlRoot", 0);
    }
    ARG_NOTNULL(pXamlRoot, "xamlRoot");
    ARG_VALIDRETURNPOINTER(ppResult);
    *ppResult={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlCompositionBrushBase*>(this)->GetBrushForXamlRootImpl(pXamlRoot, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_GetBrushForXamlRoot", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseGenerated::OnConnected()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_OnConnected", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlCompositionBrushBase*>(this)->OnConnectedImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_OnConnected", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::XamlCompositionBrushBaseGenerated::OnConnectedProtected()
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnConnected());
    }
    else
    {
        IFC(OnConnected());
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseGenerated::OnDisconnected()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_OnDisconnected", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlCompositionBrushBase*>(this)->OnDisconnectedImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_OnDisconnected", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::XamlCompositionBrushBaseGenerated::OnDisconnectedProtected()
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnDisconnected());
    }
    else
    {
        IFC(OnDisconnected());
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseGenerated::SetBrushForXamlRoot(_In_ IInspectable* pXamlRoot, _In_ ABI::Microsoft::UI::Composition::ICompositionBrush* pBrush)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_SetBrushForXamlRoot", 0);
    }
    ARG_NOTNULL(pXamlRoot, "xamlRoot");
    ARG_NOTNULL(pBrush, "brush");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlCompositionBrushBase*>(this)->SetBrushForXamlRootImpl(pXamlRoot, pBrush));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlCompositionBrushBase_SetBrushForXamlRoot", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::XamlCompositionBrushBaseFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBaseFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBaseFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBaseStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBaseStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableAbstractCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBase** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Media::IXamlCompositionBrushBase);
    const GUID metadataAPIGUID = MetadataAPI::GetClassInfoByIndex(GetTypeIndex())->GetGuid();
    const KnownTypeIndex typeIndex = GetTypeIndex();

    if(uuidofGUID != metadataAPIGUID)
    {
        XAML_FAIL_FAST();
    }
#endif

    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableAbstractCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::XamlCompositionBrushBaseFactory::get_FallbackColorProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::XamlCompositionBrushBase_FallbackColor, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_XamlCompositionBrushBase()
    {
        RRETURN(ctl::ActivationFactoryCreator<XamlCompositionBrushBaseFactory>::CreateActivationFactory());
    }
}
