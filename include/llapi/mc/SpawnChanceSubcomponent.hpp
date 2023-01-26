/**
 * @file  SpawnChanceSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnChanceSubcomponent.
 *
 */
class SpawnChanceSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNCHANCESUBCOMPONENT
public:
    class SpawnChanceSubcomponent& operator=(class SpawnChanceSubcomponent const &) = delete;
    SpawnChanceSubcomponent(class SpawnChanceSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   995130
     */
    virtual ~SpawnChanceSubcomponent();
    /**
     * @vftbl  1
     * @symbol ?readfromJSON@SpawnChanceSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   1550591276
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  2
     * @symbol ?writetoJSON@SpawnChanceSubcomponent@@UEBAXAEAVValue@Json@@@Z
     * @hash   -489908531
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl  3
     * @symbol ?doOnHitEffect@SpawnChanceSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     * @hash   -715113002
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl  4
     * @symbol ?getName@SpawnChanceSubcomponent@@UEAAPEBDXZ
     * @hash   669344833
     */
    virtual char const * getName();
    /**
     * @symbol ??0SpawnChanceSubcomponent@@QEAA@XZ
     * @hash   -572603432
     */
    MCAPI SpawnChanceSubcomponent();

};