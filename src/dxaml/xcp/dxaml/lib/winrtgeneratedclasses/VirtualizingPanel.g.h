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

#include "Panel.g.h"

#define __VirtualizingPanel_GUID "56697bdf-b27c-4a4d-8af6-8fb7150d991c"

namespace DirectUI
{
    class VirtualizingPanel;
    class ItemContainerGenerator;
    class ItemsChangedEventArgs;
    class UIElement;

    class __declspec(novtable) VirtualizingPanelGenerated:
        public DirectUI::Panel
        , public ABI::Microsoft::UI::Xaml::Controls::IVirtualizingPanel
        , public ABI::Microsoft::UI::Xaml::Controls::IVirtualizingPanelProtected
        , public ABI::Microsoft::UI::Xaml::Controls::IVirtualizingPanelOverrides
    {
        friend class DirectUI::VirtualizingPanel;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.VirtualizingPanel");

        BEGIN_INTERFACE_MAP(VirtualizingPanelGenerated, DirectUI::Panel)
            INTERFACE_ENTRY(VirtualizingPanelGenerated, ABI::Microsoft::UI::Xaml::Controls::IVirtualizingPanel)
            INTERFACE_ENTRY(VirtualizingPanelGenerated, ABI::Microsoft::UI::Xaml::Controls::IVirtualizingPanelProtected)
            INTERFACE_ENTRY(VirtualizingPanelGenerated, ABI::Microsoft::UI::Xaml::Controls::IVirtualizingPanelOverrides)
        END_INTERFACE_MAP(VirtualizingPanelGenerated, DirectUI::Panel)

    public:
        VirtualizingPanelGenerated();
        ~VirtualizingPanelGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::VirtualizingPanel;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::VirtualizingPanel;
        }

        // Properties.
        IFACEMETHOD(get_ItemContainerGenerator)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IItemContainerGenerator** ppValue) override;

        // Events.

        // Methods.
        IFACEMETHOD(AddInternalChild)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pChild) override;
        IFACEMETHOD(BringIndexIntoView)(INT index) override;
        _Check_return_ HRESULT BringIndexIntoViewProtected(INT index);
        IFACEMETHOD(InsertInternalChild)(INT index, _In_ ABI::Microsoft::UI::Xaml::IUIElement* pChild) override;
        IFACEMETHOD(OnClearChildren)() override;
        _Check_return_ HRESULT OnClearChildrenProtected();
        IFACEMETHOD(OnItemsChanged)(_In_ IInspectable* pSender, _In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs* pArgs) override;
        _Check_return_ HRESULT OnItemsChangedProtected(_In_ IInspectable* pSender, _In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs* pArgs);
        IFACEMETHOD(RemoveInternalChildRange)(INT index, INT range) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "VirtualizingPanel_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) VirtualizingPanelFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IVirtualizingPanelFactory
    {
        BEGIN_INTERFACE_MAP(VirtualizingPanelFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
            INTERFACE_ENTRY(VirtualizingPanelFactory, ABI::Microsoft::UI::Xaml::Controls::IVirtualizingPanelFactory)
        END_INTERFACE_MAP(VirtualizingPanelFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::VirtualizingPanel;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
