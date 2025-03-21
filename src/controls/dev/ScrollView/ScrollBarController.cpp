﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "common.h"
#include "ScrollingScrollOptions.h"
#include "ScrollBarController.h"
#include "ScrollView.h"
#include "TypeLogging.h"
#include "ScrollPresenterTypeLogging.h"
#include "ScrollControllerScrollToRequestedEventArgs.h"
#include "ScrollControllerScrollByRequestedEventArgs.h"
#include "ScrollControllerAddScrollVelocityRequestedEventArgs.h"

ScrollBarController::ScrollBarController()
{
    SCROLLVIEW_TRACE_INFO(nullptr, TRACE_MSG_METH, METH_NAME, this);
}

ScrollBarController::~ScrollBarController()
{
    SCROLLVIEW_TRACE_INFO(nullptr, TRACE_MSG_METH, METH_NAME, this);

    UnhookScrollBarEvent();
    UnhookScrollBarPropertyChanged();
}

void ScrollBarController::SetScrollBar(const winrt::ScrollBar& scrollBar)
{
    SCROLLVIEW_TRACE_INFO(nullptr, TRACE_MSG_METH, METH_NAME, this);

    UnhookScrollBarEvent();

    m_scrollBar = scrollBar;

    HookScrollBarEvent();
    HookScrollBarPropertyChanged();
}

#pragma region IScrollController

winrt::IScrollControllerPanningInfo ScrollBarController::PanningInfo()
{
    return nullptr;
}

bool ScrollBarController::CanScroll()
{
    return m_canScroll;
}

bool ScrollBarController::IsScrollingWithMouse()
{
    return m_isScrollingWithMouse;
}

void ScrollBarController::SetIsScrollable(
    bool isScrollable)
{
    SCROLLVIEW_TRACE_INFO(
        nullptr,
        TRACE_MSG_METH_INT,
        METH_NAME,
        this,
        isScrollable);
    m_isScrollable = isScrollable;

    UpdateCanScroll();
}

void ScrollBarController::SetValues(
    double minOffset,
    double maxOffset,
    double offset,
    double viewportLength)
{
    SCROLLVIEW_TRACE_INFO_DBG(
        nullptr,
        L"%s[0x%p](minOffset:%lf, maxOffset:%lf, offset:%lf, offset %%:%lf, viewportLength:%lf, operationsCount:%d)\n",
        METH_NAME,
        this,
        minOffset,
        maxOffset,
        offset,
        (offset - minOffset) / (maxOffset - minOffset) * 100.0,
        viewportLength,
        m_operationsCount);

    if (maxOffset < minOffset)
    {
        throw winrt::hresult_invalid_argument(L"maxOffset cannot be smaller than minOffset.");
    }

    if (viewportLength < 0.0)
    {
        throw winrt::hresult_invalid_argument(L"viewportLength cannot be negative.");
    }

    offset = max(minOffset, offset);
    offset = min(maxOffset, offset);
    m_lastOffset = offset;

    MUX_ASSERT(m_scrollBar);

    if (minOffset < m_scrollBar.Minimum())
    {
        m_scrollBar.Minimum(minOffset);
    }

    if (maxOffset > m_scrollBar.Maximum())
    {
        m_scrollBar.Maximum(maxOffset);
    }

    if (minOffset != m_scrollBar.Minimum())
    {
        m_scrollBar.Minimum(minOffset);
    }

    if (maxOffset != m_scrollBar.Maximum())
    {
        m_scrollBar.Maximum(maxOffset);
    }

    m_scrollBar.ViewportSize(viewportLength);
    m_scrollBar.LargeChange(viewportLength);
    m_scrollBar.SmallChange(max(1.0, viewportLength / s_defaultViewportToSmallChangeRatio));

    // The ScrollBar Value is only updated when there is no operation in progress otherwise the Scroll
    // event handler, ScrollBarScroll, may initiate a new request impeding the on-going operation.
    if (m_operationsCount == 0 || m_scrollBar.Value() < minOffset || m_scrollBar.Value() > maxOffset)
    {
        m_scrollBar.Value(offset);
        m_lastScrollBarValue = offset;
    }

    // Potentially changed ScrollBar.Minimum / ScrollBar.Maximum value(s) may have an effect
    // on the read-only IScrollController.CanScroll property.
    UpdateCanScroll();
}

winrt::CompositionAnimation ScrollBarController::GetScrollAnimation(
    int correlationId,
    winrt::float2 const& startPosition,
    winrt::float2 const& endPosition,
    winrt::CompositionAnimation const& defaultAnimation)
{
    SCROLLVIEW_TRACE_INFO(nullptr, TRACE_MSG_METH_INT, METH_NAME, this, correlationId);

    // Using the consumer's default animation.
    return nullptr;
}

void ScrollBarController::NotifyRequestedScrollCompleted(
    int correlationId)
{
    SCROLLVIEW_TRACE_INFO(
        nullptr,
        TRACE_MSG_METH_INT,
        METH_NAME,
        this,
        correlationId);

    MUX_ASSERT(m_operationsCount > 0);
    m_operationsCount--;

    if (m_operationsCount == 0 && m_scrollBar && m_scrollBar.Value() != m_lastOffset)
    {
        m_scrollBar.Value(m_lastOffset);
        m_lastScrollBarValue = m_lastOffset;
    }
}

winrt::event_token ScrollBarController::ScrollToRequested(winrt::TypedEventHandler<winrt::IScrollController, winrt::ScrollControllerScrollToRequestedEventArgs> const& value)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    return m_scrollToRequested.add(value);
}

void ScrollBarController::ScrollToRequested(winrt::event_token const& token)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    m_scrollToRequested.remove(token);
}

winrt::event_token ScrollBarController::ScrollByRequested(winrt::TypedEventHandler<winrt::IScrollController, winrt::ScrollControllerScrollByRequestedEventArgs> const& value)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    return m_scrollByRequested.add(value);
}

void ScrollBarController::ScrollByRequested(winrt::event_token const& token)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    m_scrollByRequested.remove(token);
}

winrt::event_token ScrollBarController::AddScrollVelocityRequested(winrt::TypedEventHandler<winrt::IScrollController, winrt::ScrollControllerAddScrollVelocityRequestedEventArgs> const& value)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    return m_addScrollVelocityRequested.add(value);
}

void ScrollBarController::AddScrollVelocityRequested(winrt::event_token const& token)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    m_addScrollVelocityRequested.remove(token);
}

winrt::event_token ScrollBarController::CanScrollChanged(winrt::TypedEventHandler<winrt::IScrollController, winrt::IInspectable> const& value)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    return m_canScrollChanged.add(value);
}

void ScrollBarController::CanScrollChanged(winrt::event_token const& token)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    m_canScrollChanged.remove(token);
}

winrt::event_token ScrollBarController::IsScrollingWithMouseChanged(winrt::TypedEventHandler<winrt::IScrollController, winrt::IInspectable> const& value)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    return m_isScrollingWithMouseChanged.add(value);
}

void ScrollBarController::IsScrollingWithMouseChanged(winrt::event_token const& token)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    m_isScrollingWithMouseChanged.remove(token);
}

#pragma endregion

void ScrollBarController::HookScrollBarPropertyChanged()
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

#ifdef DBG
    MUX_ASSERT(m_scrollBarIndicatorModeChangedToken.value == 0);
    MUX_ASSERT(m_scrollBarVisibilityChangedToken.value == 0);
#endif //DBG
    MUX_ASSERT(m_scrollBarIsEnabledChangedToken.value == 0);

    if (m_scrollBar)
    {
#ifdef DBG
        m_scrollBarIndicatorModeChangedToken.value = m_scrollBar.RegisterPropertyChangedCallback(
            winrt::ScrollBar::IndicatorModeProperty(), { this, &ScrollBarController::OnScrollBarPropertyChanged });

        m_scrollBarVisibilityChangedToken.value = m_scrollBar.RegisterPropertyChangedCallback(
            winrt::UIElement::VisibilityProperty(), { this, &ScrollBarController::OnScrollBarPropertyChanged });
#endif //DBG

        m_scrollBarIsEnabledChangedToken.value = m_scrollBar.RegisterPropertyChangedCallback(
            winrt::Control::IsEnabledProperty(), { this, &ScrollBarController::OnScrollBarPropertyChanged });
    }
}

void ScrollBarController::UnhookScrollBarPropertyChanged()
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    if (m_scrollBar)
    {
#ifdef DBG
        if (m_scrollBarIndicatorModeChangedToken.value != 0)
        {
            m_scrollBar.UnregisterPropertyChangedCallback(winrt::ScrollBar::IndicatorModeProperty(), m_scrollBarIndicatorModeChangedToken.value);
            m_scrollBarIndicatorModeChangedToken.value = 0;
        }

        if (m_scrollBarVisibilityChangedToken.value != 0)
        {
            m_scrollBar.UnregisterPropertyChangedCallback(winrt::UIElement::VisibilityProperty(), m_scrollBarVisibilityChangedToken.value);
            m_scrollBarVisibilityChangedToken.value = 0;
        }
#endif //DBG

        if (m_scrollBarIsEnabledChangedToken.value != 0)
        {
            m_scrollBar.UnregisterPropertyChangedCallback(winrt::Control::IsEnabledProperty(), m_scrollBarIsEnabledChangedToken.value);
            m_scrollBarIsEnabledChangedToken.value = 0;
        }
    }
}

void ScrollBarController::UpdateCanScroll()
{
    const bool oldCanScroll = m_canScroll;

    m_canScroll =
        m_scrollBar &&
        m_scrollBar.Parent() &&
        m_scrollBar.IsEnabled() &&
        m_scrollBar.Maximum() > m_scrollBar.Minimum() &&
        m_isScrollable;

    if (oldCanScroll != m_canScroll)
    {
        RaiseCanScrollChanged();
    }
}

void ScrollBarController::HookScrollBarEvent()
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    MUX_ASSERT(m_scrollBarScrollToken.value == 0);

    if (m_scrollBar)
    {
        m_scrollBarScrollToken = m_scrollBar.Scroll({ this, &ScrollBarController::OnScroll });
    }
}

void ScrollBarController::UnhookScrollBarEvent()
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    if (m_scrollBar && m_scrollBarScrollToken.value != 0)
    {
        m_scrollBar.Scroll(m_scrollBarScrollToken);
        m_scrollBarScrollToken.value = 0;
    }
}

void ScrollBarController::OnScrollBarPropertyChanged(
    const winrt::DependencyObject& /*sender*/,
    const winrt::DependencyProperty& args)
{
    MUX_ASSERT(m_scrollBar);

    if (args == winrt::Control::IsEnabledProperty())
    {
        SCROLLVIEW_TRACE_VERBOSE_DBG(
            nullptr,
            TRACE_MSG_METH_STR_INT,
            METH_NAME,
            this,
            L"IsEnabled",
            m_scrollBar.IsEnabled());

        UpdateCanScroll();
    }
#ifdef DBG
    else if (args == winrt::UIElement::VisibilityProperty())
    {
        SCROLLVIEW_TRACE_VERBOSE(
            nullptr,
            TRACE_MSG_METH_STR_INT,
            METH_NAME,
            this,
            L"Visibility",
            m_scrollBar.Visibility());
    }
    else if (args == winrt::ScrollBar::IndicatorModeProperty())
    {
        SCROLLVIEW_TRACE_VERBOSE(
            nullptr,
            TRACE_MSG_METH_STR_STR,
            METH_NAME,
            this,
            L"IndicatorMode",
            TypeLogging::ScrollingIndicatorModeToString(m_scrollBar.IndicatorMode()).c_str());
    }
#endif //DBG
}

void ScrollBarController::OnScroll(
    const winrt::IInspectable& /*sender*/,
    const winrt::ScrollEventArgs& args)
{
    const auto scrollEventType = args.ScrollEventType();

    SCROLLVIEW_TRACE_VERBOSE(
        nullptr,
        TRACE_MSG_METH_STR,
        METH_NAME,
        this,
        TypeLogging::ScrollEventTypeToString(scrollEventType).c_str());

    if (!m_scrollBar)
    {
        return;
    }

    if (!m_isScrollable && scrollEventType != winrt::ScrollEventType::ThumbPosition)
    {
        // This ScrollBar is not interactive. Restore its previous Value.
        m_scrollBar.Value(m_lastScrollBarValue);
        return;
    }

    switch (scrollEventType)
    {
    case winrt::ScrollEventType::First:
    case winrt::ScrollEventType::Last:
    {
        break;
    }
    case winrt::ScrollEventType::EndScroll:
    {
        if (m_isScrollingWithMouse)
        {
            m_isScrollingWithMouse = false;
            RaiseIsScrollingWithMouseChanged();
        }
        break;
    }
    case winrt::ScrollEventType::LargeDecrement:
    case winrt::ScrollEventType::LargeIncrement:
    case winrt::ScrollEventType::SmallDecrement:
    case winrt::ScrollEventType::SmallIncrement:
    case winrt::ScrollEventType::ThumbPosition:
    case winrt::ScrollEventType::ThumbTrack:
    {
        if (scrollEventType == winrt::ScrollEventType::ThumbTrack)
        {
            if (!m_isScrollingWithMouse)
            {
                m_isScrollingWithMouse = true;
                RaiseIsScrollingWithMouseChanged();
            }
        }

        bool offsetChangeRequested = false;

        if (scrollEventType == winrt::ScrollEventType::ThumbPosition ||
            scrollEventType == winrt::ScrollEventType::ThumbTrack)
        {
            offsetChangeRequested = RaiseScrollToRequested(args.NewValue());
        }
        else
        {
            double offsetChange = 0.0;

            switch (scrollEventType)
            {
            case winrt::ScrollEventType::LargeDecrement:
                offsetChange = -min(m_lastScrollBarValue - m_scrollBar.Minimum(), m_scrollBar.LargeChange());
                break;
            case winrt::ScrollEventType::LargeIncrement:
                offsetChange = min(m_scrollBar.Maximum() - m_lastScrollBarValue, m_scrollBar.LargeChange());
                break;
            case winrt::ScrollEventType::SmallDecrement:
                offsetChange = -min(m_lastScrollBarValue - m_scrollBar.Minimum(), m_scrollBar.SmallChange());
                break;
            case winrt::ScrollEventType::SmallIncrement:
                offsetChange = min(m_scrollBar.Maximum() - m_lastScrollBarValue, m_scrollBar.SmallChange());
                break;
            }

            // When the requested Value is near the Mininum or Maximum, include a little additional velocity
            // to ensure the extreme value is reached.
            if (args.NewValue() - m_scrollBar.Minimum() < s_minMaxEpsilon)
            {
                MUX_ASSERT(offsetChange < 0.0);
                offsetChange -= s_minMaxEpsilon;
            }
            else if (m_scrollBar.Maximum() - args.NewValue() < s_minMaxEpsilon)
            {
                MUX_ASSERT(offsetChange > 0.0);
                offsetChange += s_minMaxEpsilon;
            }

            if (SharedHelpers::IsAnimationsEnabled())
            {
                offsetChangeRequested = RaiseAddScrollVelocityRequested(offsetChange);
            }
            else
            {
                offsetChangeRequested = RaiseScrollByRequested(offsetChange);
            }
        }

        if (!offsetChangeRequested)
        {
            // This request could not be requested, restore the previous Value.
            m_scrollBar.Value(m_lastScrollBarValue);
        }
        break;
    }
    }

    m_lastScrollBarValue = m_scrollBar.Value();
}

bool ScrollBarController::RaiseScrollToRequested(
    double offset)
{
    SCROLLVIEW_TRACE_VERBOSE_DBG(nullptr, TRACE_MSG_METH_STR_DBL_DBL, METH_NAME, this, L"offset, offset %:", offset, (offset - m_scrollBar.Minimum()) / (m_scrollBar.Maximum() - m_scrollBar.Minimum()) * 100.0);

    if (!m_scrollToRequested)
    {
        return false;
    }

    auto options = winrt::make_self<ScrollingScrollOptions>(
        winrt::ScrollingAnimationMode::Disabled,
        winrt::ScrollingSnapPointsMode::Ignore);

    auto scrollToRequestedEventArgs = winrt::make_self<ScrollControllerScrollToRequestedEventArgs>(
        offset,
        *options);

    m_scrollToRequested(*this, *scrollToRequestedEventArgs);

    // The CorrelationId property was set by the ScrollToRequested event handler.
    // Typically it is set to a new unique value, but it may also be set to the ID 
    // from the prior request. This occurs when a request is quickly raised before 
    // the prior one was handed off to the Composition layer. The back-to-back requests 
    // are then coalesced into a single operation handed off to the Composition layer.
    int32_t offsetChangeCorrelationId = scrollToRequestedEventArgs.as<winrt::ScrollControllerScrollToRequestedEventArgs>().CorrelationId();

    if (offsetChangeCorrelationId != -1)
    {
        // Only increment m_operationsCount when the returned CorrelationId represents a new request that was not coalesced with a pending request. 
        if (offsetChangeCorrelationId != m_lastOffsetChangeCorrelationIdForScrollTo)
        {
            m_lastOffsetChangeCorrelationIdForScrollTo = offsetChangeCorrelationId;
            m_operationsCount++;
        }

        return true;
    }

    return false;
}

bool ScrollBarController::RaiseScrollByRequested(
    double offsetChange)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH_DBL, METH_NAME, this, offsetChange);

    if (!m_scrollByRequested)
    {
        return false;
    }

    auto options = winrt::make_self<ScrollingScrollOptions>(
        winrt::ScrollingAnimationMode::Disabled,
        winrt::ScrollingSnapPointsMode::Ignore);

    auto scrollByRequestedEventArgs = winrt::make_self<ScrollControllerScrollByRequestedEventArgs>(
        offsetChange,
        *options);

    m_scrollByRequested(*this, *scrollByRequestedEventArgs);

    // The CorrelationId property was set by the ScrollByRequested event handler.
    // Typically it is set to a new unique value, but it may also be set to the ID 
    // from the prior request. This occurs when a request is quickly raised before 
    // the prior one was handed off to the Composition layer. The back-to-back requests 
    // are then coalesced into a single operation handed off to the Composition layer.
    int32_t offsetChangeCorrelationId = scrollByRequestedEventArgs.as<winrt::ScrollControllerScrollByRequestedEventArgs>().CorrelationId();

    if (offsetChangeCorrelationId != -1)
    {
        // Only increment m_operationsCount when the returned CorrelationId represents a new request that was not coalesced with a pending request. 
        if (offsetChangeCorrelationId != m_lastOffsetChangeCorrelationIdForScrollBy)
        {
            m_lastOffsetChangeCorrelationIdForScrollBy = offsetChangeCorrelationId;
            m_operationsCount++;
        }

        return true;
    }

    return false;
}

bool ScrollBarController::RaiseAddScrollVelocityRequested(
    double offsetChange)
{
    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH_DBL, METH_NAME, this, offsetChange);

    if (!m_addScrollVelocityRequested)
    {
        return false;
    }

    winrt::IInspectable inertiaDecayRateAsInsp = box_value(s_inertiaDecayRate);
    winrt::IReference<float> inertiaDecayRate = inertiaDecayRateAsInsp.as<winrt::IReference<float>>();

    auto addScrollVelocityRequestedEventArgs = winrt::make_self<ScrollControllerAddScrollVelocityRequestedEventArgs>(
        static_cast<float>(offsetChange * s_velocityNeededPerPixel),
        inertiaDecayRate);

    m_addScrollVelocityRequested(*this, *addScrollVelocityRequestedEventArgs);

    // The CorrelationId property was set by the AddScrollVelocityRequested event handler.
    // Typically it is set to a new unique value, but it may also be set to the ID 
    // from the prior request. This occurs when a request is quickly raised before 
    // the prior one was handed off to the Composition layer. The back-to-back requests 
    // are then coalesced into a single operation handed off to the Composition layer.
    int32_t offsetChangeCorrelationId = addScrollVelocityRequestedEventArgs.as<winrt::ScrollControllerAddScrollVelocityRequestedEventArgs>().CorrelationId();

    if (offsetChangeCorrelationId != -1)
    {
        // Only increment m_operationsCount when the returned CorrelationId represents a new request that was not coalesced with a pending request. 
        if (offsetChangeCorrelationId != m_lastOffsetChangeCorrelationIdForAddScrollVelocity)
        {
            m_lastOffsetChangeCorrelationIdForAddScrollVelocity = offsetChangeCorrelationId;
            m_operationsCount++;
        }

        return true;
    }

    return false;
}

void ScrollBarController::RaiseCanScrollChanged()
{
    if (!m_canScrollChanged)
    {
        return;
    }

    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    m_canScrollChanged(*this, nullptr);
}

void ScrollBarController::RaiseIsScrollingWithMouseChanged()
{
    if (!m_isScrollingWithMouseChanged)
    {
        return;
    }

    SCROLLVIEW_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);

    m_isScrollingWithMouseChanged(*this, nullptr);
}
