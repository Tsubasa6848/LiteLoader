/**
 * @file  ScriptFormPromiseTracker.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptFormPromiseTracker.
 *
 */
class ScriptFormPromiseTracker {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTFORMPROMISETRACKER
public:
    ScriptFormPromiseTracker(class ScriptFormPromiseTracker const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTFORMPROMISETRACKER
    /**
     * @symbol ?onEvent@ScriptFormPromiseTracker@@UEAA?AW4EventResult@@AEBUPlayerFormCloseEvent@@@Z
     * @hash   -1562352472
     */
    MCVAPI enum class EventResult onEvent(struct PlayerFormCloseEvent const &);
    /**
     * @symbol ?onEvent@ScriptFormPromiseTracker@@UEAA?AW4EventResult@@AEBUPlayerFormResponseEvent@@@Z
     * @hash   -392211559
     */
    MCVAPI enum class EventResult onEvent(struct PlayerFormResponseEvent const &);
#endif
    /**
     * @symbol ??0ScriptFormPromiseTracker@@QEAA@XZ
     * @hash   -1261528152
     */
    MCAPI ScriptFormPromiseTracker();
    /**
     * @symbol ?handleFormResponse@ScriptFormPromiseTracker@@QEAAXIAEBVValue@Json@@@Z
     * @hash   874643379
     */
    MCAPI void handleFormResponse(unsigned int, class Json::Value const &);
    /**
     * @symbol ?handlePlayerQuit@ScriptFormPromiseTracker@@QEAAXAEBVNetworkIdentifier@@@Z
     * @hash   -1238893886
     */
    MCAPI void handlePlayerQuit(class NetworkIdentifier const &);
    /**
     * @symbol ??4ScriptFormPromiseTracker@@QEAAAEAV0@AEBV0@@Z
     * @hash   -225197500
     */
    MCAPI class ScriptFormPromiseTracker & operator=(class ScriptFormPromiseTracker const &);
    /**
     * @symbol ?rejectAllForShutdown@ScriptFormPromiseTracker@@QEAAXXZ
     * @hash   1710064197
     */
    MCAPI void rejectAllForShutdown();

};