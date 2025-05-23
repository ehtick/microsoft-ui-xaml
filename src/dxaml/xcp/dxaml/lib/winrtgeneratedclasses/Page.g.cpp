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

#include "Page.g.h"
#include "AppBar.g.h"
#include "Frame.g.h"
#include "NavigatingCancelEventArgs.g.h"
#include "NavigationEventArgs.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::PageGenerated::PageGenerated()
{
}

DirectUI::PageGenerated::~PageGenerated()
{
}

HRESULT DirectUI::PageGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Page)))
    {
        *ppObject = static_cast<DirectUI::Page*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IPage)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IPage*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IPageOverrides)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IPageOverrides*>(this);
    }
    else
    {
        RRETURN(DirectUI::UserControl::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::PageGenerated::get_BottomAppBar(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IAppBar** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Page_BottomAppBar, ppValue));
}
IFACEMETHODIMP DirectUI::PageGenerated::put_BottomAppBar(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IAppBar* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Page_BottomAppBar, pValue));
}
IFACEMETHODIMP DirectUI::PageGenerated::get_Frame(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IFrame** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Page_Frame, ppValue));
}
_Check_return_ HRESULT DirectUI::PageGenerated::put_Frame(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IFrame* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Page_Frame, pValue));
}
IFACEMETHODIMP DirectUI::PageGenerated::get_NavigationCacheMode(_Out_ ABI::Microsoft::UI::Xaml::Navigation::NavigationCacheMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Page_NavigationCacheMode, pValue));
}
IFACEMETHODIMP DirectUI::PageGenerated::put_NavigationCacheMode(ABI::Microsoft::UI::Xaml::Navigation::NavigationCacheMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Page_NavigationCacheMode, value));
}
IFACEMETHODIMP DirectUI::PageGenerated::get_TopAppBar(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IAppBar** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckThread());
    IFC(static_cast<Page*>(this)->get_TopAppBarImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PageGenerated::put_TopAppBar(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IAppBar* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Page*>(this)->put_TopAppBarImpl(pValue));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::PageGenerated::OnNavigatedFrom(_In_ ABI::Microsoft::UI::Xaml::Navigation::INavigationEventArgs* pE)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "Page_OnNavigatedFrom", 0);
    }
    ARG_NOTNULL(pE, "e");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Page*>(this)->OnNavigatedFromImpl(pE));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "Page_OnNavigatedFrom", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::PageGenerated::OnNavigatedFromProtected(_In_ ABI::Microsoft::UI::Xaml::Navigation::INavigationEventArgs* pE)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IPageOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnNavigatedFrom(pE));
    }
    else
    {
        IFC(OnNavigatedFrom(pE));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PageGenerated::OnNavigatedTo(_In_ ABI::Microsoft::UI::Xaml::Navigation::INavigationEventArgs* pE)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "Page_OnNavigatedTo", 0);
    }
    ARG_NOTNULL(pE, "e");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Page*>(this)->OnNavigatedToImpl(pE));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "Page_OnNavigatedTo", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::PageGenerated::OnNavigatedToProtected(_In_ ABI::Microsoft::UI::Xaml::Navigation::INavigationEventArgs* pE)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IPageOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnNavigatedTo(pE));
    }
    else
    {
        IFC(OnNavigatedTo(pE));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::PageGenerated::OnNavigatingFrom(_In_ ABI::Microsoft::UI::Xaml::Navigation::INavigatingCancelEventArgs* pE)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "Page_OnNavigatingFrom", 0);
    }
    ARG_NOTNULL(pE, "e");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Page*>(this)->OnNavigatingFromImpl(pE));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "Page_OnNavigatingFrom", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::PageGenerated::OnNavigatingFromProtected(_In_ ABI::Microsoft::UI::Xaml::Navigation::INavigatingCancelEventArgs* pE)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IPageOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnNavigatingFrom(pE));
    }
    else
    {
        IFC(OnNavigatingFrom(pE));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}

HRESULT DirectUI::PageFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IPageFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IPageFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IPageStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IPageStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::PageFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IPage** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IPage);
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
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::PageFactory::get_FrameProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Page_Frame, ppValue));
}

IFACEMETHODIMP DirectUI::PageFactory::get_TopAppBarProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Page_TopAppBar, ppValue));
}
IFACEMETHODIMP DirectUI::PageFactory::get_BottomAppBarProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Page_BottomAppBar, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Page()
    {
        RRETURN(ctl::ActivationFactoryCreator<PageFactory>::CreateActivationFactory());
    }
}
