/**
 * @file  BlockDestructibleByMiningDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockDestructibleByMiningDescription.
 *
 */
struct BlockDestructibleByMiningDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTRUCTIBLEBYMININGDESCRIPTION
public:
    struct BlockDestructibleByMiningDescription& operator=(struct BlockDestructibleByMiningDescription const &) = delete;
    BlockDestructibleByMiningDescription(struct BlockDestructibleByMiningDescription const &) = delete;
    BlockDestructibleByMiningDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   758948330
     */
    virtual ~BlockDestructibleByMiningDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockDestructibleByMiningDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   743872233
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockDestructibleByMiningDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   719851675
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockDestructibleByMiningDescription@@UEBA_NXZ
     * @hash   -1946879103
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockDestructibleByMiningDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   858004995
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockDestructibleByMiningDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   1937023951
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?NameID@BlockDestructibleByMiningDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   740671759
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockDestructibleByMiningDescription@@SAXXZ
     * @hash   299070483
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockDestructibleByMiningDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   -2007068210
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};