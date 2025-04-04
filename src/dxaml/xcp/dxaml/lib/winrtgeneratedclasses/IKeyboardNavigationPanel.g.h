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

#pragma once

namespace DirectUI
{
    interface __declspec(uuid("cba39132-b6f1-4d2e-8669-4d2bb78bc8ac")) IKeyboardNavigationPanel : public IInspectable
    {
        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(SupportsKeyNavigationAction)(ABI::Microsoft::UI::Xaml::Controls::KeyNavigationAction action, _Out_ BOOLEAN* pReturnValue) = 0;
        IFACEMETHOD(GetTargetIndexFromNavigationAction)(UINT sourceIndex, ABI::Microsoft::UI::Xaml::Controls::ElementType sourceType, ABI::Microsoft::UI::Xaml::Controls::KeyNavigationAction action, BOOLEAN allowWrap, UINT itemIndexHintForHeaderNavigation, _Out_ UINT* pComputedTargetIndex, _Out_ ABI::Microsoft::UI::Xaml::Controls::ElementType* pComputedTargetType, _Out_ BOOLEAN* pActionValidForSourceIndex) = 0;
    };
}
