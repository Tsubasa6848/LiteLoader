/**
 * @file  VillagerCelebrationGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagerCelebrationGoal.
 *
 */
class VillagerCelebrationGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERCELEBRATIONGOAL
public:
    class VillagerCelebrationGoal& operator=(class VillagerCelebrationGoal const &) = delete;
    VillagerCelebrationGoal(class VillagerCelebrationGoal const &) = delete;
    VillagerCelebrationGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -256698939
     */
    virtual ~VillagerCelebrationGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@VillagerCelebrationGoal@@UEAA_NXZ
     * @hash   -1696901623
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@VillagerCelebrationGoal@@UEAA_NXZ
     * @hash   -2140087545
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1264449677
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@VillagerCelebrationGoal@@UEAAXXZ
     * @hash   -563132478
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@VillagerCelebrationGoal@@UEAAXXZ
     * @hash   -1023561710
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@VillagerCelebrationGoal@@UEAAXXZ
     * @hash   -179294771
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@VillagerCelebrationGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -309197545
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0VillagerCelebrationGoal@@QEAA@AEAVMob@@@Z
     * @hash   2131771606
     */
    MCAPI VillagerCelebrationGoal(class Mob &);

//private:
    /**
     * @symbol ?_launchFirework@VillagerCelebrationGoal@@AEAAXXZ
     * @hash   -1037735426
     */
    MCAPI void _launchFirework();
    /**
     * @symbol ?_setNextFireworkTick@VillagerCelebrationGoal@@AEAAXXZ
     * @hash   1559938287
     */
    MCAPI void _setNextFireworkTick();

private:

};