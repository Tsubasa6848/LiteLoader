/**
 * @file  HealableDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HealableDefinition.
 *
 */
class HealableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEALABLEDEFINITION
public:
    class HealableDefinition& operator=(class HealableDefinition const &) = delete;
    HealableDefinition(class HealableDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0HealableDefinition@@QEAA@XZ
     * @hash   1877733441
     */
    MCAPI HealableDefinition();
    /**
     * @symbol ?addFeedItem@HealableDefinition@@QEAAXAEBUFeedItem@@@Z
     * @hash   -2030620950
     */
    MCAPI void addFeedItem(struct FeedItem const &);
    /**
     * @symbol ?addFeedItemByName@HealableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   202831166
     */
    MCAPI void addFeedItemByName(std::string const &);
    /**
     * @symbol ?buildSchema@HealableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHealableDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1102040534
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HealableDefinition>> &);

};