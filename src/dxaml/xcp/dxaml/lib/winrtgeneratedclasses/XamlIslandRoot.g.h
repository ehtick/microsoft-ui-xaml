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

#define __XamlIslandRoot_GUID "b3d608be-c816-469b-b645-9679b55717c7"

namespace DirectUI
{
    class XamlIslandRoot;
    class UIElement;

    class __declspec(novtable) XamlIslandRootGenerated:
        public DirectUI::Panel
        , public ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRoot
    {
        friend class DirectUI::XamlIslandRoot;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Hosting.XamlIslandRoot");

        BEGIN_INTERFACE_MAP(XamlIslandRootGenerated, DirectUI::Panel)
            INTERFACE_ENTRY(XamlIslandRootGenerated, ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRoot)
        END_INTERFACE_MAP(XamlIslandRootGenerated, DirectUI::Panel)

    public:
        XamlIslandRootGenerated();
        ~XamlIslandRootGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::XamlIslandRoot;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::XamlIslandRoot;
        }

        // Properties.
        IFACEMETHOD(get_Content)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue) override;
        IFACEMETHOD(put_Content)(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue) override;
        IFACEMETHOD(get_FocusController)(_Outptr_result_maybenull_ IInspectable** ppValue) override;

        // Events.

        // Methods.
        IFACEMETHOD(SetScreenOffsetOverride)(ABI::Windows::Foundation::Point offsetOnScreen) override;
        IFACEMETHOD(TrySetFocus)(_Out_ BOOLEAN* pResult) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "XamlIslandRoot_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) XamlIslandRootFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRootStatics
    {
        BEGIN_INTERFACE_MAP(XamlIslandRootFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(XamlIslandRootFactory, ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRootStatics)
        END_INTERFACE_MAP(XamlIslandRootFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.
        IFACEMETHOD(GetIslandFromElement)(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_ ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRoot** ppResult) override;

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::XamlIslandRoot;
        }

        _Check_return_ HRESULT CheckActivationAllowed() override;

    private:

        // Customized static properties.

        // Customized static  methods.
         _Check_return_ HRESULT GetIslandFromElementImpl(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_ ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRoot** ppResult); 
    };
}
