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

#include "ToolTipService.g.h"
#include "XamlTelemetry.h"


HRESULT DirectUI::ToolTipServiceFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IToolTipServiceStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IToolTipServiceStatics*>(this);
    }
    else
    {
        RRETURN(ctl::AbstractActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.

// Attached properties.
_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::GetPlacementStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::PlacementMode* pValue)
{
    RRETURN(DependencyObject::GetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_Placement, pValue));
}

_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::SetPlacementStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, ABI::Microsoft::UI::Xaml::Controls::Primitives::PlacementMode value)
{
    RRETURN(DependencyObject::SetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_Placement, value));
}


IFACEMETHODIMP DirectUI::ToolTipServiceFactory::get_PlacementProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToolTipService_Placement, ppValue));
}


IFACEMETHODIMP DirectUI::ToolTipServiceFactory::GetPlacement(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::PlacementMode* pValue)
{
    RRETURN(GetPlacementStatic(pElement, pValue));
}

IFACEMETHODIMP DirectUI::ToolTipServiceFactory::SetPlacement(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, ABI::Microsoft::UI::Xaml::Controls::Primitives::PlacementMode value)
{
    RRETURN(SetPlacementStatic(pElement, value));
}
_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::GetPlacementTargetStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    RRETURN(DependencyObject::GetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_PlacementTarget, ppValue));
}

_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::SetPlacementTargetStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    RRETURN(DependencyObject::SetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_PlacementTarget, pValue));
}


IFACEMETHODIMP DirectUI::ToolTipServiceFactory::get_PlacementTargetProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToolTipService_PlacementTarget, ppValue));
}


IFACEMETHODIMP DirectUI::ToolTipServiceFactory::GetPlacementTarget(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    RRETURN(GetPlacementTargetStatic(pElement, ppValue));
}

IFACEMETHODIMP DirectUI::ToolTipServiceFactory::SetPlacementTarget(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    RRETURN(SetPlacementTargetStatic(pElement, pValue));
}
_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::GetToolTipStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(DependencyObject::GetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_ToolTip, ppValue));
}

_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::SetToolTipStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ IInspectable* pValue)
{
    RRETURN(DependencyObject::SetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_ToolTip, pValue));
}


IFACEMETHODIMP DirectUI::ToolTipServiceFactory::get_ToolTipProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ToolTipService_ToolTip, ppValue));
}


IFACEMETHODIMP DirectUI::ToolTipServiceFactory::GetToolTip(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetToolTipStatic(pElement, ppValue));
}

IFACEMETHODIMP DirectUI::ToolTipServiceFactory::SetToolTip(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ IInspectable* pValue)
{
    RRETURN(SetToolTipStatic(pElement, pValue));
}
_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::GetKeyboardAcceleratorToolTipStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(DependencyObject::GetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_KeyboardAcceleratorToolTip, ppValue));
}

_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::SetKeyboardAcceleratorToolTipStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ IInspectable* pValue)
{
    RRETURN(DependencyObject::SetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_KeyboardAcceleratorToolTip, pValue));
}
_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::GetKeyboardAcceleratorToolTipObjectStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IToolTip** ppValue)
{
    RRETURN(DependencyObject::GetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_KeyboardAcceleratorToolTipObject, ppValue));
}

_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::SetKeyboardAcceleratorToolTipObjectStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IToolTip* pValue)
{
    RRETURN(DependencyObject::SetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_KeyboardAcceleratorToolTipObject, pValue));
}
_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::GetToolTipObjectStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IToolTip** ppValue)
{
    RRETURN(DependencyObject::GetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_ToolTipObject, ppValue));
}

_Check_return_ HRESULT DirectUI::ToolTipServiceFactory::SetToolTipObjectStatic(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IToolTip* pValue)
{
    RRETURN(DependencyObject::SetAttachedValueByKnownIndex(static_cast<DirectUI::DependencyObject*>(pElement), KnownPropertyIndex::ToolTipService_ToolTipObject, pValue));
}

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ToolTipService()
    {
        RRETURN(ctl::ActivationFactoryCreator<ToolTipServiceFactory>::CreateActivationFactory());
    }
}
