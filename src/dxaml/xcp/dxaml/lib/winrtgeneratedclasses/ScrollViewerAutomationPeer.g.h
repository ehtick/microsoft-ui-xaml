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

#include "FrameworkElementAutomationPeer.g.h"

#define __ScrollViewerAutomationPeer_GUID "7d94c164-bbe5-4a8d-bab9-ef09d775b6d0"

namespace DirectUI
{
    class ScrollViewerAutomationPeer;

    class __declspec(novtable) ScrollViewerAutomationPeerGenerated:
        public DirectUI::FrameworkElementAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Provider::IScrollProvider
    {
        friend class DirectUI::ScrollViewerAutomationPeer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Automation.Peers.ScrollViewerAutomationPeer");

        BEGIN_INTERFACE_MAP(ScrollViewerAutomationPeerGenerated, DirectUI::FrameworkElementAutomationPeer)
            INTERFACE_ENTRY(ScrollViewerAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer)
            INTERFACE_ENTRY(ScrollViewerAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Provider::IScrollProvider)
        END_INTERFACE_MAP(ScrollViewerAutomationPeerGenerated, DirectUI::FrameworkElementAutomationPeer)

    public:
        ScrollViewerAutomationPeerGenerated();
        ~ScrollViewerAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ScrollViewerAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ScrollViewerAutomationPeer;
        }

        // Properties.
        IFACEMETHOD(get_HorizontallyScrollable)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_HorizontalScrollPercent)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_HorizontalViewSize)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_VerticallyScrollable)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(get_VerticalScrollPercent)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(get_VerticalViewSize)(_Out_ DOUBLE* pValue) override;

        // Events.

        // Methods.
        IFACEMETHOD(Scroll)(ABI::Microsoft::UI::Xaml::Automation::ScrollAmount horizontalAmount, ABI::Microsoft::UI::Xaml::Automation::ScrollAmount verticalAmount) override;
        IFACEMETHOD(SetScrollPercent)(DOUBLE horizontalPercent, DOUBLE verticalPercent) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ScrollViewerAutomationPeer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ScrollViewerAutomationPeerFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory
    {
        BEGIN_INTERFACE_MAP(ScrollViewerAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(ScrollViewerAutomationPeerFactory, ABI::Microsoft::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory)
        END_INTERFACE_MAP(ScrollViewerAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithOwner)(_In_ ABI::Microsoft::UI::Xaml::Controls::IScrollViewer* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ScrollViewerAutomationPeer;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithOwnerImpl(_In_ ABI::Microsoft::UI::Xaml::Controls::IScrollViewer* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
