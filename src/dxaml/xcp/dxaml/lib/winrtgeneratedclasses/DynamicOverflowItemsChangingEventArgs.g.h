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


#define __DynamicOverflowItemsChangingEventArgs_GUID "91c393d4-c11a-4d8e-9c1a-248c41ba46e3"

namespace DirectUI
{
    class DynamicOverflowItemsChangingEventArgs;

    class __declspec(novtable) __declspec(uuid(__DynamicOverflowItemsChangingEventArgs_GUID)) DynamicOverflowItemsChangingEventArgs :
        public ABI::Microsoft::UI::Xaml::Controls::IDynamicOverflowItemsChangingEventArgs,
        public DirectUI::EventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.DynamicOverflowItemsChangingEventArgs");

        BEGIN_INTERFACE_MAP(DynamicOverflowItemsChangingEventArgs, DirectUI::EventArgs)
            INTERFACE_ENTRY(DynamicOverflowItemsChangingEventArgs, ABI::Microsoft::UI::Xaml::Controls::IDynamicOverflowItemsChangingEventArgs)
        END_INTERFACE_MAP(DynamicOverflowItemsChangingEventArgs, DirectUI::EventArgs)

    public:
        DynamicOverflowItemsChangingEventArgs();
        ~DynamicOverflowItemsChangingEventArgs() override;

        // Properties.
        IFACEMETHOD(get_Action)(_Out_ ABI::Microsoft::UI::Xaml::Controls::CommandBarDynamicOverflowAction* pValue) override;
        _Check_return_ HRESULT put_Action(ABI::Microsoft::UI::Xaml::Controls::CommandBarDynamicOverflowAction value);

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        ABI::Microsoft::UI::Xaml::Controls::CommandBarDynamicOverflowAction m_action;
    };
}


