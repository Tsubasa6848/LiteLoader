/**
 * @file  RandomizableBlockActorContainerBase.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomizableBlockActorContainerBase.
 *
 */
class RandomizableBlockActorContainerBase : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMIZABLEBLOCKACTORCONTAINERBASE
public:
    class RandomizableBlockActorContainerBase& operator=(class RandomizableBlockActorContainerBase const &) = delete;
    RandomizableBlockActorContainerBase(class RandomizableBlockActorContainerBase const &) = delete;
    RandomizableBlockActorContainerBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -924500150
     */
    virtual ~RandomizableBlockActorContainerBase();
    /**
     * @vftbl  1
     * @symbol ?load@RandomizableBlockActorContainerBase@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -611298509
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@RandomizableBlockActorContainerBase@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -2089398750
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  12
     * @hash   -291256027
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @hash   -285714901
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @hash   -234921246
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @hash   -233997725
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -233074204
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -232150683
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @hash   -190772906
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @hash   -189849385
     */
    virtual void __unk_vfn_36();
    /**
     * @symbol ?setLootTable@RandomizableBlockActorContainerBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -341359331
     */
    MCAPI void setLootTable(std::string const &, int);
    /**
     * @symbol ?unPackLootTable@RandomizableBlockActorContainerBase@@QEAAXAEAVLevel@@AEAVContainer@@V?$AutomaticID@VDimension@@H@@PEAVActor@@@Z
     * @hash   -120115730
     */
    MCAPI void unPackLootTable(class Level &, class Container &, class AutomaticID<class Dimension, int>, class Actor *);

};