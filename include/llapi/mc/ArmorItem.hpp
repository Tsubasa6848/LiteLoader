/**
 * @file  ArmorItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArmorItem.
 *
 */
class ArmorItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
class ArmorMaterial {
public:
    ArmorMaterial() = delete;
    ArmorMaterial(ArmorMaterial const&) = delete;
    ArmorMaterial(ArmorMaterial const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORITEM
public:
    class ArmorItem& operator=(class ArmorItem const &) = delete;
    ArmorItem(class ArmorItem const &) = delete;
    ArmorItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1668592064
     */
    virtual ~ArmorItem();
    /**
     * @vftbl  7
     * @hash   -1253298233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol ?isArmor@ArmorItem@@UEBA_NXZ
     * @hash   311126059
     */
    virtual bool isArmor() const;
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  18
     * @symbol ?isDyeable@ArmorItem@@UEBA_NXZ
     * @hash   -642418890
     */
    virtual bool isDyeable() const;
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -118063646
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  60
     * @symbol ?appendFormattedHovertext@ArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -849827859
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  61
     * @symbol ?isValidRepairItem@ArmorItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     * @hash   1148507290
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  62
     * @symbol ?getEnchantSlot@ArmorItem@@UEBAHXZ
     * @hash   -834141974
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  63
     * @symbol ?getEnchantValue@ArmorItem@@UEBAHXZ
     * @hash   -884227273
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl  64
     * @symbol ?getArmorValue@ArmorItem@@UEBAHXZ
     * @hash   -650173151
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  65
     * @symbol ?getToughnessValue@ArmorItem@@UEBAHXZ
     * @hash   1492424590
     */
    virtual int getToughnessValue() const;
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  68
     * @symbol ?getDamageChance@ArmorItem@@UEBAHH@Z
     * @hash   380339963
     */
    virtual int getDamageChance(int) const;
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -62652386
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -61728865
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol ?getColor@ArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     * @hash   -1380851433
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vftbl  74
     * @symbol ?hasCustomColor@ArmorItem@@UEBA_NPEBVCompoundTag@@@Z
     * @hash   -1431216442
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  76
     * @symbol ?clearColor@ArmorItem@@UEBAXAEAVItemStackBase@@@Z
     * @hash   -1312643670
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @vftbl  78
     * @symbol ?setColor@ArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
     * @hash   -817439788
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /**
     * @vftbl  79
     * @hash   -275840522
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -255523060
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  82
     * @symbol ?buildIdAux@ArmorItem@@UEBAHFPEBVCompoundTag@@@Z
     * @hash   1544117320
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @vftbl  84
     * @symbol ?use@ArmorItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   1158107116
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  85
     * @symbol ?dispense@ArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   2055241598
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  89
     * @symbol ?hurtActor@ArmorItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   -775027856
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  93
     * @symbol ?mineBlock@ArmorItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     * @hash   1522014393
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl  113
     * @symbol ?getEquipLocation@ArmorItem@@UEBA?AW4ActorLocation@@XZ
     * @hash   1272417401
     */
    virtual enum class ActorLocation getEquipLocation() const;
    /**
     * @vftbl  114
     * @symbol ?getEquipSound@ArmorItem@@UEBA?AW4LevelSoundEvent@@XZ
     * @hash   -1243555686
     */
    virtual enum class LevelSoundEvent getEquipSound() const;
    /**
     * @vftbl  118
     * @symbol ?getIconInfo@ArmorItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
     * @hash   -630148199
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  133
     * @symbol ?getArmorKnockbackResistance@ArmorItem@@UEBAMXZ
     * @hash   1832502631
     */
    virtual float getArmorKnockbackResistance() const;
    /**
     * @symbol ??0ArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVArmorMaterial@0@HW4ArmorSlot@@@Z
     * @hash   -1485186689
     */
    MCAPI ArmorItem(std::string const &, int, class ArmorItem::ArmorMaterial const &, int, enum class ArmorSlot);
    /**
     * @symbol ?CHAIN@ArmorItem@@2VArmorMaterial@1@B
     * @hash   -672109558
     */
    MCAPI static class ArmorItem::ArmorMaterial const CHAIN;
    /**
     * @symbol ?DIAMOND@ArmorItem@@2VArmorMaterial@1@B
     * @hash   2145689552
     */
    MCAPI static class ArmorItem::ArmorMaterial const DIAMOND;
    /**
     * @symbol ?ELYTRA@ArmorItem@@2VArmorMaterial@1@B
     * @hash   1415169160
     */
    MCAPI static class ArmorItem::ArmorMaterial const ELYTRA;
    /**
     * @symbol ?GOLD@ArmorItem@@2VArmorMaterial@1@B
     * @hash   1105812966
     */
    MCAPI static class ArmorItem::ArmorMaterial const GOLD;
    /**
     * @symbol ?IRON@ArmorItem@@2VArmorMaterial@1@B
     * @hash   1960753814
     */
    MCAPI static class ArmorItem::ArmorMaterial const IRON;
    /**
     * @symbol ?LEATHER@ArmorItem@@2VArmorMaterial@1@B
     * @hash   -2006856070
     */
    MCAPI static class ArmorItem::ArmorMaterial const LEATHER;
    /**
     * @symbol ?NETHERITE@ArmorItem@@2VArmorMaterial@1@B
     * @hash   -1181377332
     */
    MCAPI static class ArmorItem::ArmorMaterial const NETHERITE;
    /**
     * @symbol ?TURTLE@ArmorItem@@2VArmorMaterial@1@B
     * @hash   -1182384578
     */
    MCAPI static class ArmorItem::ArmorMaterial const TURTLE;
    /**
     * @symbol ?dispenseArmor@ArmorItem@@SA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@EW4ArmorSlot@@@Z
     * @hash   166144321
     */
    MCAPI static bool dispenseArmor(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char, enum class ArmorSlot);
    /**
     * @symbol ?getSlotForItem@ArmorItem@@SA?AW4ArmorSlot@@AEBVItemStackBase@@@Z
     * @hash   -1624375841
     */
    MCAPI static enum class ArmorSlot getSlotForItem(class ItemStackBase const &);
    /**
     * @symbol ?isDamageable@ArmorItem@@SA_NAEBVItemDescriptor@@@Z
     * @hash   -67651139
     */
    MCAPI static bool isDamageable(class ItemDescriptor const &);
    /**
     * @symbol ?mHealthPerSlot@ArmorItem@@2QBHB
     * @hash   328533872
     */
    MCAPI static int const mHealthPerSlot[];

//private:
    /**
     * @symbol ?getTierItem@ArmorItem@@AEBA?AVItemInstance@@XZ
     * @hash   1269894053
     */
    MCAPI class ItemInstance getTierItem() const;

private:

};