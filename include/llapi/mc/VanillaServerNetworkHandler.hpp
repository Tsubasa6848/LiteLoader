/**
 * @file  VanillaServerNetworkHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaServerNetworkHandler.
 *
 */
class VanillaServerNetworkHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASERVERNETWORKHANDLER
public:
    class VanillaServerNetworkHandler& operator=(class VanillaServerNetworkHandler const &) = delete;
    VanillaServerNetworkHandler(class VanillaServerNetworkHandler const &) = delete;
    VanillaServerNetworkHandler() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -244907064
     */
    virtual ~VanillaServerNetworkHandler();
    /**
     * @vftbl  1
     * @symbol ?handle@VanillaServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
     * @hash   -458822439
     */
    virtual void handle(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @symbol ??0VanillaServerNetworkHandler@@QEAA@V?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@AEAVServerInstance@@@Z
     * @hash   -1278799402
     */
    MCAPI VanillaServerNetworkHandler(class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>, class ServerInstance &);

};