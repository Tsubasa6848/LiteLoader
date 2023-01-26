/**
 * @file  ProjectileFactory.hpp
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
 * @brief MC class ProjectileFactory.
 *
 */
class ProjectileFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEFACTORY
public:
    class ProjectileFactory& operator=(class ProjectileFactory const &) = delete;
    ProjectileFactory(class ProjectileFactory const &) = delete;
    ProjectileFactory() = delete;
#endif

public:
    /**
     * @symbol ??0ProjectileFactory@@QEAA@AEAVLevel@@@Z
     * @hash   1260074036
     */
    MCAPI ProjectileFactory(class Level &);
    /**
     * @symbol ?shootProjectileFromDefinition@ProjectileFactory@@QEAAPEAVActor@@AEBUActorDefinitionIdentifier@@PEAVMob@@VVec3@@@Z
     * @hash   1399434701
     */
    MCAPI class Actor * shootProjectileFromDefinition(struct ActorDefinitionIdentifier const &, class Mob *, class Vec3);
    /**
     * @symbol ?createSubcomponent@ProjectileFactory@@SA?AV?$unique_ptr@VOnHitSubcomponent@@U?$default_delete@VOnHitSubcomponent@@@std@@@std@@AEAVValue@Json@@AEBVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   -683667341
     */
    MCAPI static std::unique_ptr<class OnHitSubcomponent> createSubcomponent(class Json::Value &, class SemVersion const &, std::string const &);
    /**
     * @symbol ?initFactory@ProjectileFactory@@SAXXZ
     * @hash   -225937657
     */
    MCAPI static void initFactory();
    /**
     * @symbol ?shutdown@ProjectileFactory@@SAXXZ
     * @hash   1263782813
     */
    MCAPI static void shutdown();

//private:

private:
    /**
     * @symbol ?mSubcomponentMap@ProjectileFactory@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VOnHitSubcomponent@@U?$default_delete@VOnHitSubcomponent@@@std@@@std@@XZ@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VOnHitSubcomponent@@U?$default_delete@VOnHitSubcomponent@@@std@@@std@@XZ@2@@std@@@2@@std@@A
     * @hash   -580195123
     */
    MCAPI static class std::unordered_map<std::string, class std::function<std::unique_ptr<class OnHitSubcomponent> (void)>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::function<std::unique_ptr<class OnHitSubcomponent> (void)>>>> mSubcomponentMap;

};