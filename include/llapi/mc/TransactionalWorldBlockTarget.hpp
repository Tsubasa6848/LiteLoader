/**
 * @file  TransactionalWorldBlockTarget.hpp
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
 * @brief MC class TransactionalWorldBlockTarget.
 *
 */
class TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSACTIONALWORLDBLOCKTARGET
public:
    class TransactionalWorldBlockTarget& operator=(class TransactionalWorldBlockTarget const &) = delete;
    TransactionalWorldBlockTarget(class TransactionalWorldBlockTarget const &) = delete;
    TransactionalWorldBlockTarget() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2030940797
     */
    virtual ~TransactionalWorldBlockTarget();
    /**
     * @vftbl  1
     * @symbol ?NewSequentialFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
     * @hash   -1982533731
     */
    virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @vftbl  2
     * @symbol ?NewRandomAccessFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
     * @hash   -178717219
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @vftbl  3
     * @symbol ?tryGetLiquidBlock@TransactionalWorldBlockTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -1210398125
     */
    virtual class Block const * tryGetLiquidBlock(class BlockPos const &) const;
    /**
     * @vftbl  4
     * @symbol ?getBlock@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     * @hash   1320374014
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @vftbl  5
     * @symbol ?getBlockNoBoundsCheck@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -2112908598
     */
    virtual class Block const & getBlockNoBoundsCheck(class BlockPos const &) const;
    /**
     * @vftbl  6
     * @symbol ?getExtraBlock@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     * @hash   399672786
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @vftbl  7
     * @symbol ?fetchBlocksInBox@TransactionalWorldBlockTarget@@UEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     * @hash   -309169846
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @vftbl  8
     * @symbol ?hasBiomeTag@TransactionalWorldBlockTarget@@UEBA_N_KAEBVBlockPos@@@Z
     * @hash   178255677
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /**
     * @vftbl  9
     * @symbol ?setBlock@TransactionalWorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
     * @hash   1036487166
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @vftbl  10
     * @symbol ?setBlockSimple@TransactionalWorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   391142275
     */
    virtual bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @vftbl  11
     * @symbol ?apply@TransactionalWorldBlockTarget@@UEBA_NXZ
     * @hash   28274753
     */
    virtual bool apply() const;
    /**
     * @vftbl  12
     * @symbol ?placeStructure@TransactionalWorldBlockTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z
     * @hash   -1622498719
     */
    virtual bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /**
     * @vftbl  13
     * @symbol ?mayPlace@TransactionalWorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1151218745
     */
    virtual bool mayPlace(class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  14
     * @symbol ?canSurvive@TransactionalWorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -941865881
     */
    virtual bool canSurvive(class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  15
     * @symbol ?getMaxHeight@TransactionalWorldBlockTarget@@UEBAFXZ
     * @hash   476635582
     */
    virtual short getMaxHeight() const;
    /**
     * @vftbl  16
     * @symbol ?getMinHeight@TransactionalWorldBlockTarget@@UEBAFXZ
     * @hash   767345548
     */
    virtual short getMinHeight() const;
    /**
     * @vftbl  17
     * @symbol ?shimPlaceForOldFeatures@TransactionalWorldBlockTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   104203436
     */
    virtual bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  18
     * @symbol ?getHeightmap@TransactionalWorldBlockTarget@@UEAAFHH@Z
     * @hash   -1120938871
     */
    virtual short getHeightmap(int, int);
    /**
     * @vftbl  19
     * @symbol ?isLegacyLevel@TransactionalWorldBlockTarget@@UEAA_NXZ
     * @hash   -1617104171
     */
    virtual bool isLegacyLevel();
    /**
     * @vftbl  20
     * @symbol ?getBiome@TransactionalWorldBlockTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
     * @hash   -717108142
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @vftbl  21
     * @symbol ?isInBounds@TransactionalWorldBlockTarget@@UEBA_NAEBVPos@@@Z
     * @hash   -1687093076
     */
    virtual bool isInBounds(class Pos const &) const;
    /**
     * @vftbl  22
     * @symbol ?getLocalWaterLevel@TransactionalWorldBlockTarget@@UEBAFAEBVBlockPos@@@Z
     * @hash   695733405
     */
    virtual short getLocalWaterLevel(class BlockPos const &) const;
    /**
     * @vftbl  23
     * @symbol ?getLevelData@TransactionalWorldBlockTarget@@UEBAAEBVLevelData@@XZ
     * @hash   114149754
     */
    virtual class LevelData const & getLevelData() const;
    /**
     * @vftbl  24
     * @symbol ?getContext@TransactionalWorldBlockTarget@@UEAAAEBUWorldGenContext@@XZ
     * @hash   1856818172
     */
    virtual struct WorldGenContext const & getContext();
    /**
     * @vftbl  25
     * @symbol ?disableBlockSimple@TransactionalWorldBlockTarget@@UEAAXXZ
     * @hash   -1568308279
     */
    virtual void disableBlockSimple();
    /**
     * @symbol ??0TransactionalWorldBlockTarget@@QEAA@AEAVIBlockWorldGenAPI@@@Z
     * @hash   1851957016
     */
    MCAPI TransactionalWorldBlockTarget(class IBlockWorldGenAPI &);

};