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

#include "RoutedEventArgs.g.h"

#define __DragStartedEventArgs_GUID "52ad6e1b-c540-4189-84f9-4c1e6ad3cde4"

namespace DirectUI
{
    class DragStartedEventArgs;

    class __declspec(novtable) DragStartedEventArgsGenerated :
        public ABI::Microsoft::UI::Xaml::Controls::Primitives::IDragStartedEventArgs,
        public DirectUI::RoutedEventArgs
    {
        friend class DirectUI::DragStartedEventArgs;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Primitives.DragStartedEventArgs");

        BEGIN_INTERFACE_MAP(DragStartedEventArgsGenerated, DirectUI::RoutedEventArgs)
            INTERFACE_ENTRY(DragStartedEventArgsGenerated, ABI::Microsoft::UI::Xaml::Controls::Primitives::IDragStartedEventArgs)
        END_INTERFACE_MAP(DragStartedEventArgsGenerated, DirectUI::RoutedEventArgs)

    public:
        DragStartedEventArgsGenerated();
        ~DragStartedEventArgsGenerated() override;

        // Properties.
        IFACEMETHOD(get_HorizontalOffset)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_HorizontalOffset(DOUBLE value);
        IFACEMETHOD(get_VerticalOffset)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_VerticalOffset(DOUBLE value);

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "DragStartedEventArgs_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) DragStartedEventArgsFactory:
       public ctl::AggregableActivationFactory<DirectUI::DragStartedEventArgs>
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory
    {
        BEGIN_INTERFACE_MAP(DragStartedEventArgsFactory, ctl::AggregableActivationFactory<DirectUI::DragStartedEventArgs>)
            INTERFACE_ENTRY(DragStartedEventArgsFactory, ABI::Microsoft::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory)
        END_INTERFACE_MAP(DragStartedEventArgsFactory, ctl::AggregableActivationFactory<DirectUI::DragStartedEventArgs>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithHorizontalOffsetAndVerticalOffset)(DOUBLE horizontalOffset, DOUBLE verticalOffset, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IDragStartedEventArgs** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;



    private:
        _Check_return_ HRESULT CreateInstanceWithHorizontalOffsetAndVerticalOffsetImpl(DOUBLE horizontalOffset, DOUBLE verticalOffset, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IDragStartedEventArgs** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
