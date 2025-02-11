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

#include "ItemsControl.g.h"

#define __MenuFlyoutPresenter_GUID "a21c5006-9b67-4df9-829a-0ed60a5ad01e"

#pragma region forwarders
namespace ctl
{
    template<typename impl_type>
    class interface_forwarder< ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter2, impl_type> final
        : public ctl::iinspectable_forwarder_base< ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter2, impl_type>
    {
        impl_type* This() { return this->This_helper<impl_type>(); }
        IFACEMETHOD(get_SystemBackdrop)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop** ppValue) override { return This()->get_SystemBackdrop(ppValue); }
        IFACEMETHOD(put_SystemBackdrop)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop* pValue) override { return This()->put_SystemBackdrop(pValue); }
    };
}
#pragma endregion

namespace DirectUI
{
    class MenuFlyoutPresenter;
    class MenuFlyoutPresenterTemplateSettings;
    class SystemBackdrop;

    class __declspec(novtable) MenuFlyoutPresenterGenerated:
        public DirectUI::ItemsControl
        , public ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter
        , public ABI::Microsoft::UI::Xaml::Controls::IMenuPresenter
        , public ctl::forwarder_holder< ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter2, MenuFlyoutPresenterGenerated >
    {
        friend class DirectUI::MenuFlyoutPresenter;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.MenuFlyoutPresenter");

        BEGIN_INTERFACE_MAP(MenuFlyoutPresenterGenerated, DirectUI::ItemsControl)
            INTERFACE_ENTRY(MenuFlyoutPresenterGenerated, ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter)
            INTERFACE_ENTRY(MenuFlyoutPresenterGenerated, ABI::Microsoft::UI::Xaml::Controls::IMenuPresenter)
            INTERFACE_ENTRY(MenuFlyoutPresenterGenerated, ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter2)
        END_INTERFACE_MAP(MenuFlyoutPresenterGenerated, DirectUI::ItemsControl)

    public:
        MenuFlyoutPresenterGenerated();
        ~MenuFlyoutPresenterGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::MenuFlyoutPresenter;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::MenuFlyoutPresenter;
        }

        // Properties.
        IFACEMETHOD(get_IsDefaultShadowEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsDefaultShadowEnabled)(BOOLEAN value) override;
        IFACEMETHOD(get_Owner)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::ISubMenuOwner** ppValue) override;
        IFACEMETHOD(put_Owner)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::ISubMenuOwner* pValue) override;
        IFACEMETHOD(get_OwningMenu)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IMenu** ppValue) override;
        IFACEMETHOD(put_OwningMenu)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IMenu* pValue) override;
        IFACEMETHOD(get_SubPresenter)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IMenuPresenter** ppValue) override;
        IFACEMETHOD(put_SubPresenter)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IMenuPresenter* pValue) override;
        _Check_return_ HRESULT STDMETHODCALLTYPE get_SystemBackdrop(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop** ppValue);
        _Check_return_ HRESULT STDMETHODCALLTYPE put_SystemBackdrop(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ISystemBackdrop* pValue);
        IFACEMETHOD(get_TemplateSettings)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings** ppValue) override;
        _Check_return_ HRESULT put_TemplateSettings(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings* pValue);

        // Events.

        // Methods.
        IFACEMETHOD(CloseSubMenu)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "MenuFlyoutPresenter_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) MenuFlyoutPresenterFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterStatics
        , public ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterStatics2
    {
        BEGIN_INTERFACE_MAP(MenuFlyoutPresenterFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(MenuFlyoutPresenterFactory, ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterFactory)
            INTERFACE_ENTRY(MenuFlyoutPresenterFactory, ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterStatics)
            INTERFACE_ENTRY(MenuFlyoutPresenterFactory, ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenterStatics2)
        END_INTERFACE_MAP(MenuFlyoutPresenterFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IMenuFlyoutPresenter** ppInstance);

        // Static properties.

        // Dependency properties.
        
        IFACEMETHOD(get_IsDefaultShadowEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_SystemBackdropProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::MenuFlyoutPresenter;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
