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

#include "MenuFlyoutPresenter.g.h"
#include "MenuFlyoutPresenterTemplateSettings.g.h"
#include "SystemBackdrop.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::MenuFlyoutPresenterGenerated::MenuFlyoutPresenterGenerated()
{
}

DirectUI::MenuFlyoutPresenterGenerated::~MenuFlyoutPresenterGenerated()
{
}

HRESULT DirectUI::MenuFlyoutPresenterGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::MenuFlyoutPresenter)))
    {
        *ppObject = static_cast<DirectUI::MenuFlyoutPresenter*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuPresenter)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuPresenter*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter2)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter2>(this);
    }
    else
    {
        RRETURN(DirectUI::ItemsControl::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterGenerated::get_IsDefaultShadowEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutPresenter_IsDefaultShadowEnabled, pValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterGenerated::put_IsDefaultShadowEnabled(BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutPresenter_IsDefaultShadowEnabled, value));
}
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterGenerated::get_Owner(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::ISubMenuOwner** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckThread());
    IFC(static_cast<MenuFlyoutPresenter*>(this)->get_OwnerImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterGenerated::put_Owner(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::ISubMenuOwner* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<MenuFlyoutPresenter*>(this)->put_OwnerImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterGenerated::get_OwningMenu(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IMenu** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckThread());
    IFC(static_cast<MenuFlyoutPresenter*>(this)->get_OwningMenuImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterGenerated::put_OwningMenu(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IMenu* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<MenuFlyoutPresenter*>(this)->put_OwningMenuImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterGenerated::get_SubPresenter(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IMenuPresenter** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckThread());
    IFC(static_cast<MenuFlyoutPresenter*>(this)->get_SubPresenterImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterGenerated::put_SubPresenter(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IMenuPresenter* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<MenuFlyoutPresenter*>(this)->put_SubPresenterImpl(pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MenuFlyoutPresenterGenerated::get_SystemBackdrop(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutPresenter_SystemBackdrop, ppValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MenuFlyoutPresenterGenerated::put_SystemBackdrop(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutPresenter_SystemBackdrop, pValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterGenerated::get_TemplateSettings(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutPresenter_TemplateSettings, ppValue));
}
_Check_return_ HRESULT DirectUI::MenuFlyoutPresenterGenerated::put_TemplateSettings(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MenuFlyoutPresenter_TemplateSettings, pValue));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterGenerated::CloseSubMenu()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "MenuFlyoutPresenter_CloseSubMenu", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<MenuFlyoutPresenter*>(this)->CloseSubMenuImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "MenuFlyoutPresenter_CloseSubMenu", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::MenuFlyoutPresenterFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterStatics*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterStatics2)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterStatics2*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter);
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

IFACEMETHODIMP DirectUI::MenuFlyoutPresenterFactory::get_IsDefaultShadowEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MenuFlyoutPresenter_IsDefaultShadowEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::MenuFlyoutPresenterFactory::get_SystemBackdropProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MenuFlyoutPresenter_SystemBackdrop, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_MenuFlyoutPresenter()
    {
        RRETURN(ctl::ActivationFactoryCreator<MenuFlyoutPresenterFactory>::CreateActivationFactory());
    }
}
