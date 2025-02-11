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


#define __CollectionViewSource_GUID "a7dfaf16-d646-4018-99b6-a35729153b5f"

namespace DirectUI
{
    class CollectionViewSource;
    class PropertyPath;

    class __declspec(novtable) CollectionViewSourceGenerated:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Data::ICollectionViewSource
    {
        friend class DirectUI::CollectionViewSource;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Data.CollectionViewSource");

        BEGIN_INTERFACE_MAP(CollectionViewSourceGenerated, DirectUI::DependencyObject)
            INTERFACE_ENTRY(CollectionViewSourceGenerated, ABI::Microsoft::UI::Xaml::Data::ICollectionViewSource)
        END_INTERFACE_MAP(CollectionViewSourceGenerated, DirectUI::DependencyObject)

    public:
        CollectionViewSourceGenerated();
        ~CollectionViewSourceGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::CollectionViewSource;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::CollectionViewSource;
        }

        // Properties.
        IFACEMETHOD(get_IsSourceGrouped)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsSourceGrouped)(BOOLEAN value) override;
        IFACEMETHOD(get_ItemsPath)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IPropertyPath** ppValue) override;
        IFACEMETHOD(put_ItemsPath)(_In_opt_ ABI::Microsoft::UI::Xaml::IPropertyPath* pValue) override;
        IFACEMETHOD(get_Source)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Source)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_View)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Data::ICollectionView** ppValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "CollectionViewSource_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) CollectionViewSourceFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Data::ICollectionViewSourceStatics
    {
        BEGIN_INTERFACE_MAP(CollectionViewSourceFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(CollectionViewSourceFactory, ABI::Microsoft::UI::Xaml::Data::ICollectionViewSourceStatics)
        END_INTERFACE_MAP(CollectionViewSourceFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_SourceProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ViewProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsSourceGroupedProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ItemsPathProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::CollectionViewSource;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
