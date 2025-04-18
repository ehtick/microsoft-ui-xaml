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

#include "ConnectedAnimationConfiguration.g.h"

#define __GravityConnectedAnimationConfiguration_GUID "26a94083-090c-4999-ae94-2a2aa5e54b9f"

namespace DirectUI
{
    class GravityConnectedAnimationConfiguration;

    class __declspec(novtable) GravityConnectedAnimationConfigurationGenerated:
        public DirectUI::ConnectedAnimationConfiguration
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration
    {
        friend class DirectUI::GravityConnectedAnimationConfiguration;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.GravityConnectedAnimationConfiguration");

        BEGIN_INTERFACE_MAP(GravityConnectedAnimationConfigurationGenerated, DirectUI::ConnectedAnimationConfiguration)
            INTERFACE_ENTRY(GravityConnectedAnimationConfigurationGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration)
        END_INTERFACE_MAP(GravityConnectedAnimationConfigurationGenerated, DirectUI::ConnectedAnimationConfiguration)

    public:
        GravityConnectedAnimationConfigurationGenerated();
        ~GravityConnectedAnimationConfigurationGenerated() override;

        // Event source typedefs.


        // Properties.
        IFACEMETHOD(get_IsShadowEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsShadowEnabled)(BOOLEAN value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "GravityConnectedAnimationConfiguration_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) GravityConnectedAnimationConfigurationFactory:
       public ctl::AggregableActivationFactory<DirectUI::GravityConnectedAnimationConfiguration>
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfigurationFactory
    {
        BEGIN_INTERFACE_MAP(GravityConnectedAnimationConfigurationFactory, ctl::AggregableActivationFactory<DirectUI::GravityConnectedAnimationConfiguration>)
            INTERFACE_ENTRY(GravityConnectedAnimationConfigurationFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfigurationFactory)
        END_INTERFACE_MAP(GravityConnectedAnimationConfigurationFactory, ctl::AggregableActivationFactory<DirectUI::GravityConnectedAnimationConfiguration>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;



    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
