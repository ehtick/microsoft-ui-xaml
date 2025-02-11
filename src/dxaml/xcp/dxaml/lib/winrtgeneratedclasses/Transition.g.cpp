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

#include "Transition.g.h"
#include "UIElement.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::TransitionGenerated::TransitionGenerated()
{
}

DirectUI::TransitionGenerated::~TransitionGenerated()
{
}

HRESULT DirectUI::TransitionGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Transition)))
    {
        *ppObject = static_cast<DirectUI::Transition*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ITransition)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::ITransition*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ITransitionPrivate)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::ITransitionPrivate*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT DirectUI::TransitionGenerated::get_GeneratedStaggerFunction(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Transition_GeneratedStaggerFunction, ppValue));
}
_Check_return_ HRESULT DirectUI::TransitionGenerated::put_GeneratedStaggerFunction(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Transition_GeneratedStaggerFunction, pValue));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::TransitionGenerated::CreateStoryboard(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, ABI::Windows::Foundation::Rect start, ABI::Windows::Foundation::Rect destination, ABI::Microsoft::UI::Xaml::TransitionTrigger transitionTrigger, _In_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Storyboard*>* pStoryboards, _Out_ ABI::Microsoft::UI::Xaml::TransitionParent* pParentForTransition)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "Transition_CreateStoryboard", 0);
    }
    ARG_NOTNULL(pElement, "element");
    ARG_NOTNULL(pStoryboards, "storyboards");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Transition*>(this)->CreateStoryboardImpl(pElement, start, destination, transitionTrigger, pStoryboards, pParentForTransition));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "Transition_CreateStoryboard", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::TransitionGenerated::ParticipatesInTransition(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, ABI::Microsoft::UI::Xaml::TransitionTrigger transitonTrigger, _Out_ BOOLEAN* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "Transition_ParticipatesInTransition", 0);
    }
    ARG_NOTNULL(pElement, "element");
    ARG_VALIDRETURNPOINTER(pResult);
    *pResult={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<Transition*>(this)->ParticipatesInTransitionImpl(pElement, transitonTrigger, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "Transition_ParticipatesInTransition", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::TransitionFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ITransitionFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::ITransitionFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::ITransitionFactoryPrivate)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::ITransitionFactoryPrivate*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.


// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::TransitionFactory::CreateInstance(_In_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::ITransition** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "Transition_CreateInstance", 0);
    }
    ARG_NOTNULL(pOuter, "outer");
    ARG_NOTNULL(ppInner, "inner");
    ARG_VALIDRETURNPOINTER(ppResult);
    *ppResult={};
    IFC(CheckActivationAllowed());
    IFC(CreateInstanceImpl(pOuter, ppInner, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "Transition_CreateInstance", hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Transition()
    {
        RRETURN(ctl::ActivationFactoryCreator<TransitionFactory>::CreateActivationFactory());
    }
}
