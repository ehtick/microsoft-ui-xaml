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

#include "DynamicTimeline.g.h"

#define __DragOverThemeAnimation_GUID "6aa16ae1-08f6-439b-9189-42ad23e48c46"

namespace DirectUI
{
    class DragOverThemeAnimation;

    class __declspec(novtable) DragOverThemeAnimationGenerated:
        public DirectUI::DynamicTimeline
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IDragOverThemeAnimation
    {
        friend class DirectUI::DragOverThemeAnimation;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.DragOverThemeAnimation");

        BEGIN_INTERFACE_MAP(DragOverThemeAnimationGenerated, DirectUI::DynamicTimeline)
            INTERFACE_ENTRY(DragOverThemeAnimationGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IDragOverThemeAnimation)
        END_INTERFACE_MAP(DragOverThemeAnimationGenerated, DirectUI::DynamicTimeline)

    public:
        DragOverThemeAnimationGenerated();
        ~DragOverThemeAnimationGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DragOverThemeAnimation;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::DragOverThemeAnimation;
        }

        // Properties.
        IFACEMETHOD(get_Direction)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::AnimationDirection* pValue) override;
        IFACEMETHOD(put_Direction)(ABI::Microsoft::UI::Xaml::Controls::Primitives::AnimationDirection value) override;
        IFACEMETHOD(get_TargetName)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_TargetName)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_ToOffset)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_ToOffset)(DOUBLE value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "DragOverThemeAnimation_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) DragOverThemeAnimationFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics
    {
        BEGIN_INTERFACE_MAP(DragOverThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(DragOverThemeAnimationFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics)
        END_INTERFACE_MAP(DragOverThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_TargetNameProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ToOffsetProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DirectionProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DragOverThemeAnimation;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
