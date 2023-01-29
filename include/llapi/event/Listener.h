#pragma once

#include <functional>

#include "llapi/LLAPI.h"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event {

template <typename EventType>
class EventManager;

/**
 * @brief Event priority enum.
 * @details The lower the priority, the earlier the event is executed.
 * @note Don't try forcing to be executed first.
 * @see EventManager::addListener
 */
enum Priority : uint8_t {
    Lowest = 0,
    Low = 1,
    Normal = 2,
    High = 3,
    Highest = 4,
    Monitor = 5
};

/**
 * @brief Event listener.
 * @tparam EventType Event type.
 */
template <typename EventType>
class Listener {
    LL_RO_MEMBER(int, id, getId)
    LL_RW_MEMBER(Priority, priority, getPriority, setPriority)
    LL_RO_MEMBER(HMODULE, plugin, getPlugin)
    LL_RO_MEMBER(std::function<void(EventType&)>, callback, getCallback)
    LL_RW_MEMBER(int64_t, timing, getTiming, setTiming)

    friend class EventManager<EventType>;

public:
    LIAPI Listener(std::function<void(EventType&)> callback, Priority priority, HMODULE plugin = GetCurrentModule());

    /**
     * @brief Call the event.
     * @param event Event instance to call.
     */
    LIAPI void call(EventType& event);

    /**
     * @brief Unsubscribe the event.
     */
    LIAPI void unsubscribe();

    LIAPI bool operator==(const Listener& other) const;

    LIAPI bool operator<(const Listener& other) const;
};


} // namespace ll::event