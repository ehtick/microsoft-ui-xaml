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


#define __SplitViewPaneClosingEventArgs_GUID "f43a58c6-ab0b-42be-aa33-43c050c29659"

namespace DirectUI
{
    class SplitViewPaneClosingEventArgs;

    class __declspec(novtable) __declspec(uuid(__SplitViewPaneClosingEventArgs_GUID)) SplitViewPaneClosingEventArgs :
        public ABI::Microsoft::UI::Xaml::Controls::ISplitViewPaneClosingEventArgs,
        public DirectUI::EventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.SplitViewPaneClosingEventArgs");

        BEGIN_INTERFACE_MAP(SplitViewPaneClosingEventArgs, DirectUI::EventArgs)
            INTERFACE_ENTRY(SplitViewPaneClosingEventArgs, ABI::Microsoft::UI::Xaml::Controls::ISplitViewPaneClosingEventArgs)
        END_INTERFACE_MAP(SplitViewPaneClosingEventArgs, DirectUI::EventArgs)

    public:
        SplitViewPaneClosingEventArgs();
        ~SplitViewPaneClosingEventArgs() override;

        // Properties.
        IFACEMETHOD(get_Cancel)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_Cancel)(BOOLEAN value) override;

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


