/**
 * @file  CommandAreaFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandAreaFactory.
 *
 */
class CommandAreaFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDAREAFACTORY
public:
    class CommandAreaFactory& operator=(class CommandAreaFactory const &) = delete;
    CommandAreaFactory(class CommandAreaFactory const &) = delete;
    CommandAreaFactory() = delete;
#endif

public:
    /**
     * @symbol ??0CommandAreaFactory@@QEAA@AEAVDimension@@@Z
     * @hash   1900993791
     */
    MCAPI CommandAreaFactory(class Dimension &);
    /**
     * @symbol ?findArea@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0H_N1@Z
     * @hash   -584692560
     */
    MCAPI std::unique_ptr<class CommandArea> findArea(class BlockPos const &, class BlockPos const &, int, bool, bool) const;
    /**
     * @symbol ?findArea@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0_N11@Z
     * @hash   -1916868320
     */
    MCAPI std::unique_ptr<class CommandArea> findArea(class BlockPos const &, class BlockPos const &, bool, bool, bool) const;
    /**
     * @symbol ?findArea@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@H_N1@Z
     * @hash   -1978797022
     */
    MCAPI std::unique_ptr<class CommandArea> findArea(class BlockPos const &, int, bool, bool) const;
    /**
     * @symbol ?findAreaWithBuffer@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0H_N1@Z
     * @hash   -179233324
     */
    MCAPI std::unique_ptr<class CommandArea> findAreaWithBuffer(class BlockPos const &, class BlockPos const &, int, bool, bool) const;
    /**
     * @symbol ?findAreaWithBuffer@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@H_N1@Z
     * @hash   -25113634
     */
    MCAPI std::unique_ptr<class CommandArea> findAreaWithBuffer(class BlockPos const &, int, bool, bool) const;
    /**
     * @symbol ?shouldAllowNonTickingPlayerAndTickingAreaChunks@CommandAreaFactory@@SA_NH@Z
     * @hash   1700364937
     */
    MCAPI static bool shouldAllowNonTickingPlayerAndTickingAreaChunks(int);

//private:
    /**
     * @symbol ?_getArea@CommandAreaFactory@@AEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBUBounds@@_N11@Z
     * @hash   33297305
     */
    MCAPI std::unique_ptr<class CommandArea> _getArea(struct Bounds const &, bool, bool, bool) const;

private:

};