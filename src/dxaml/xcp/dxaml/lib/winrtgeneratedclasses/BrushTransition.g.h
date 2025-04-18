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


#define __BrushTransition_GUID "8711bf52-367e-4ae7-adf2-3c1e4087ee89"

namespace DirectUI
{
    class BrushTransition;

    class __declspec(novtable) BrushTransitionGenerated:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::IBrushTransition
    {
        friend class DirectUI::BrushTransition;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.BrushTransition");

        BEGIN_INTERFACE_MAP(BrushTransitionGenerated, DirectUI::DependencyObject)
            INTERFACE_ENTRY(BrushTransitionGenerated, ABI::Microsoft::UI::Xaml::IBrushTransition)
        END_INTERFACE_MAP(BrushTransitionGenerated, DirectUI::DependencyObject)

    public:
        BrushTransitionGenerated();
        ~BrushTransitionGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::BrushTransition;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::BrushTransition;
        }

        // Properties.
        IFACEMETHOD(get_Duration)(_Out_ ABI::Windows::Foundation::TimeSpan* pValue) override;
        IFACEMETHOD(put_Duration)(ABI::Windows::Foundation::TimeSpan value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "BrushTransition_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) BrushTransitionFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::IBrushTransitionFactory
    {
        BEGIN_INTERFACE_MAP(BrushTransitionFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(BrushTransitionFactory, ABI::Microsoft::UI::Xaml::IBrushTransitionFactory)
        END_INTERFACE_MAP(BrushTransitionFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IBrushTransition** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::BrushTransition;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
