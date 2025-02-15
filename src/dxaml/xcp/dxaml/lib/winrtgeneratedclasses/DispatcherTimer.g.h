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

#include "Timeline.g.h"

#define __DispatcherTimer_GUID "3ca35ce3-3c1f-4765-b605-dfc8ce330b19"

namespace DirectUI
{
    class DispatcherTimer;

    class __declspec(novtable) DispatcherTimerGenerated:
        public DirectUI::Timeline
        , public ABI::Microsoft::UI::Xaml::IDispatcherTimer
    {
        friend class DirectUI::DispatcherTimer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.DispatcherTimer");

        BEGIN_INTERFACE_MAP(DispatcherTimerGenerated, DirectUI::Timeline)
            INTERFACE_ENTRY(DispatcherTimerGenerated, ABI::Microsoft::UI::Xaml::IDispatcherTimer)
        END_INTERFACE_MAP(DispatcherTimerGenerated, DirectUI::Timeline)

    public:
        DispatcherTimerGenerated();
        ~DispatcherTimerGenerated() override;

        // Event source typedefs.
        typedef CEventSource<ABI::Windows::Foundation::IEventHandler<IInspectable*>, IInspectable, IInspectable> TickEventSourceType;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DispatcherTimer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::DispatcherTimer;
        }

        // Properties.
        IFACEMETHOD(get_Interval)(_Out_ ABI::Windows::Foundation::TimeSpan* pValue) override;
        IFACEMETHOD(put_Interval)(ABI::Windows::Foundation::TimeSpan value) override;
        IFACEMETHOD(get_IsEnabled)(_Out_ BOOLEAN* pValue) override;

        // Events.
        _Check_return_ HRESULT GetTickEventSourceNoRef(_Outptr_ TickEventSourceType** ppEventSource);
        IFACEMETHOD(add_Tick)(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_Tick)(EventRegistrationToken token) override;

        // Methods.
        IFACEMETHOD(Start)() override;
        IFACEMETHOD(Stop)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "DispatcherTimer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) DispatcherTimerFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::IDispatcherTimerFactory
    {
        BEGIN_INTERFACE_MAP(DispatcherTimerFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(DispatcherTimerFactory, ABI::Microsoft::UI::Xaml::IDispatcherTimerFactory)
        END_INTERFACE_MAP(DispatcherTimerFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IDispatcherTimer** ppInstance);

        // Static properties.

        // Dependency properties.
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DispatcherTimer;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
