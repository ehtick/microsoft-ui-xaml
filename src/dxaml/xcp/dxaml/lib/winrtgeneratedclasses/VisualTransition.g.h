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

#include "Duration.g.h"

#define __VisualTransition_GUID "8d9aa1b2-bfdf-4c34-b179-60eee810942f"

namespace DirectUI
{
    class VisualTransition;
    class EasingFunctionBase;
    class Storyboard;

    class __declspec(novtable) __declspec(uuid(__VisualTransition_GUID)) VisualTransition:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::IVisualTransition
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.VisualTransition");

        BEGIN_INTERFACE_MAP(VisualTransition, DirectUI::DependencyObject)
            INTERFACE_ENTRY(VisualTransition, ABI::Microsoft::UI::Xaml::IVisualTransition)
        END_INTERFACE_MAP(VisualTransition, DirectUI::DependencyObject)

    public:
        VisualTransition();
        ~VisualTransition() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::VisualTransition;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::VisualTransition;
        }

        // Properties.
        IFACEMETHOD(get_From)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_From)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_GeneratedDuration)(_Out_ ABI::Microsoft::UI::Xaml::Duration* pValue) override;
        IFACEMETHOD(put_GeneratedDuration)(ABI::Microsoft::UI::Xaml::Duration value) override;
        IFACEMETHOD(get_GeneratedEasingFunction)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBase** ppValue) override;
        IFACEMETHOD(put_GeneratedEasingFunction)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBase* pValue) override;
        IFACEMETHOD(get_Storyboard)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::Animation::IStoryboard** ppValue) override;
        IFACEMETHOD(put_Storyboard)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::IStoryboard* pValue) override;
        IFACEMETHOD(get_To)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_To)(_In_opt_ HSTRING value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) VisualTransitionFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::IVisualTransitionFactory
    {
        BEGIN_INTERFACE_MAP(VisualTransitionFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(VisualTransitionFactory, ABI::Microsoft::UI::Xaml::IVisualTransitionFactory)
        END_INTERFACE_MAP(VisualTransitionFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IVisualTransition** ppInstance);

        // Static properties.

        // Dependency properties.
        
        
        
        
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::VisualTransition;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
