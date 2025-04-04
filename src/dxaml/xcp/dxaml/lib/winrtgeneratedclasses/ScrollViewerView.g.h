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


#define __ScrollViewerView_GUID "2c093ebc-8a2c-4454-bc76-2cae494bc0ac"

namespace DirectUI
{
    class ScrollViewerView;

    class __declspec(novtable) __declspec(uuid(__ScrollViewerView_GUID)) ScrollViewerView:
        public ctl::WeakReferenceSource
        , public ABI::Microsoft::UI::Xaml::Controls::IScrollViewerView
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ScrollViewerView");

        BEGIN_INTERFACE_MAP(ScrollViewerView, ctl::WeakReferenceSource)
            INTERFACE_ENTRY(ScrollViewerView, ABI::Microsoft::UI::Xaml::Controls::IScrollViewerView)
        END_INTERFACE_MAP(ScrollViewerView, ctl::WeakReferenceSource)

    public:
        ScrollViewerView();
        ~ScrollViewerView() override;

        // Event source typedefs.


        // Properties.
        IFACEMETHOD(get_HorizontalOffset)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_HorizontalOffset(DOUBLE value);
        IFACEMETHOD(get_VerticalOffset)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_VerticalOffset(DOUBLE value);
        IFACEMETHOD(get_ZoomFactor)(_Out_ FLOAT* pValue) override;
        _Check_return_ HRESULT put_ZoomFactor(FLOAT value);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        DOUBLE m_horizontalOffset;
        DOUBLE m_verticalOffset;
        FLOAT m_zoomFactor;
    };
}


