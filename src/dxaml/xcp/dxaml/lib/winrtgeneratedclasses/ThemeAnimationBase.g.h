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

#define __ThemeAnimationBase_GUID "653bc276-fbab-436f-9bb6-e5b7db78d2c5"

namespace DirectUI
{
    class ThemeAnimationBase;
    class TimelineCollection;

    class __declspec(novtable) ThemeAnimationBaseGenerated:
        public DirectUI::DynamicTimeline
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IThemeAnimationBase
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IThemeAnimationBaseOverrides
    {
        friend class DirectUI::ThemeAnimationBase;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.ThemeAnimationBase");

        BEGIN_INTERFACE_MAP(ThemeAnimationBaseGenerated, DirectUI::DynamicTimeline)
            INTERFACE_ENTRY(ThemeAnimationBaseGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IThemeAnimationBase)
            INTERFACE_ENTRY(ThemeAnimationBaseGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IThemeAnimationBaseOverrides)
        END_INTERFACE_MAP(ThemeAnimationBaseGenerated, DirectUI::DynamicTimeline)

    public:
        ThemeAnimationBaseGenerated();
        ~ThemeAnimationBaseGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ThemeAnimationBase;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ThemeAnimationBase;
        }

        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(CreateTimelinesInternal)(BOOLEAN onlyGenerateSteadyState, _In_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Timeline*>* pTimelineCollection) override;
        _Check_return_ HRESULT CreateTimelinesInternalProtected(BOOLEAN onlyGenerateSteadyState, _In_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Timeline*>* pTimelineCollection);


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ThemeAnimationBase_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ThemeAnimationBaseFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IThemeAnimationBaseFactory
    {
        BEGIN_INTERFACE_MAP(ThemeAnimationBaseFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
            INTERFACE_ENTRY(ThemeAnimationBaseFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IThemeAnimationBaseFactory)
        END_INTERFACE_MAP(ThemeAnimationBaseFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::IThemeAnimationBase** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ThemeAnimationBase;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
