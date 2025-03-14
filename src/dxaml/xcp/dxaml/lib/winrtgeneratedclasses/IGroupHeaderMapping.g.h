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
    interface __declspec(uuid("785ff7cd-7787-45bd-bc64-5fa4b48d619e")) IGroupHeaderMapping : public IInspectable
    {
        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(GroupFromHeader)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pHeader, _Outptr_ IInspectable** ppReturnValue) = 0;
        IFACEMETHOD(HeaderFromGroup)(_In_ IInspectable* pGroup, _Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) = 0;
        IFACEMETHOD(IndexFromHeader)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pHeader, BOOLEAN excludeHiddenEmptyGroups, _Out_ INT* pReturnValue) = 0;
        IFACEMETHOD(HeaderFromIndex)(INT index, _Outptr_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) = 0;
        IFACEMETHOD(GroupHeaderContainerFromItemContainer)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pItemContainer, _Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppReturnValue) = 0;
    };
}
