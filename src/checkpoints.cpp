// Copyright (c) 2009-2014 The Starwels developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

#include <stdint.h>

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    // How many times we expect transactions after the last checkpoint to
    // be slower. This number is a compromise, as it can't be accurate for
    // every system. When reindexing from a fast disk with a slow CPU, it
    // can be up to 20, while when downloading from a slow network with a
    // fast multicore CPU, it won't be much higher than 1.
    static const double SIGCHECK_VERIFICATION_FACTOR = 5.0;

    struct CCheckpointData {
        const MapCheckpoints *mapCheckpoints;
        int64_t nTimeLastCheckpoint;
        int64_t nTransactionsLastCheckpoint;
        double fTransactionsPerDay;
    };

    bool fEnabled = true;

    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
        ( 2, uint256("0x00000000858b8dd1b071fcd7d5456e89af4ca2718439171e23c5833f08fc383f")) // 5.000.050 AI

        // hash: 00000000858b8dd1b071fcd7d5456e89af4ca2718439171e23c5833f08fc383f
        // target: 00000000ffff0000000000000000000000000000000000000000000000000000
        // CBlock(hash=00000000858b8dd1b071fcd7d5456e89af4ca2718439171e23c5833f08fc383f, ver=3, hashPrevBlock=000000002553c5e130766abf9b72c526c41b3d1d680bf2989042c2e9b91f1ff5, hashMerkleRoot=ed18cbdd248f3c48f2764068d17941fefd556c79477f40a759598ca6332264ee, nTime=1490369912, nBits=1d00ffff, nNonce=4174294523, vtx=1)
        // CTransaction(hash=ed18cbdd24, ver=1, vin.size=1, vout.size=1, nLockTime=0)
        // CTxIn(COutPoint(0000000000, 4294967295), coinbase 520101062f503253482f)
        // CTxOut(nValue=5000050.00000000, scriptPubKey=026aaf455b33e31885a2477d81123e)

        ( 1002, uint256("0x000000002f0078f9431bfe30bb63c3bb980e969d6edb23d965626d6945563b2e"))
        ( 3002, uint256("0x00000000d18e53b72345a840d9fb941d583d1a88797e2655514186006c3ba571"))
        ( 5002, uint256("0x000000002a0a92b8ada17b2bcb002e513ca2e3dae40b8787ae7db6481cdeaca9"))
        ( 20100, uint256("0x0000000000012ea899078acd01332bb3fcb5d43003ebbdbd45d36f22c11f0ce5"))
        ( 27000, uint256("0x0000000000000039183ec560207ddb62a0423818b58cf8c0769181c772345b9a"))
        ( 30110, uint256("0x000000000000006cac231e6071dc71cd888df218ed1f85df9e2f2680ea9d1386"));

    static const CCheckpointData data = {
        // Data as of block 00000000000000001db7819d8906d5fef995793c38af5b43d1faf8236bd8307d (height 30200).
        &mapCheckpoints,
        1493794377, // * UNIX timestamp of last checkpoint block
        31279,   // * total number of transactions between genesis and last checkpoint
                    //   (the tx=... number in the SetBestChain debug.log lines)
        60000.0     // * estimated number of transactions per day after checkpoint
    };

    static MapCheckpoints mapCheckpointsTestnet =
        boost::assign::map_list_of
        ( 2, uint256("000000003448a6673f6c17f0ebfd5684bfbc84b45d84a647621ec54cf53402f8"))

        // hash: 000000003448a6673f6c17f0ebfd5684bfbc84b45d84a647621ec54cf53402f8
        // target: 00000000ffff0000000000000000000000000000000000000000000000000000
        // CBlock(hash=000000003448a6673f6c17f0ebfd5684bfbc84b45d84a647621ec54cf53402f8, ver=3, hashPrevBlock=00000000571bf2d2f9c4ffa8ec67d7464bdb7c11c72d781ee70ac10ac623dc82, hashMerkleRoot=fc59784cd7925af02d8f6ec051a88d8674d99e60b9be122f810b0163da2cd2a8, nTime=1490519404, nBits=1d00ffff, nNonce=3358505063, vtx=1)
        // CTransaction(hash=fc59784cd7, ver=1, vin.size=1, vout.size=1, nLockTime=0)
        // CTxIn(COutPoint(0000000000, 4294967295), coinbase 520101062f503253482f)
        // CTxOut(nValue=5000050.00000000, scriptPubKey=0336a428acf796d4cf06d6fa39ee4d)

        ( 102, uint256("00000000e8106a3eb86478a75fd5944c4c4ac80a3e9ec4ae2402498f034bd60e"));

    static const CCheckpointData dataTestnet = {
        // Data as of block 00000000ebacf59e2fdc0377907a8b14ed81c181c9687de10755463935d92c5a (height 120)
        &mapCheckpointsTestnet,
        1490521802,
        123,
        300
    };

    static MapCheckpoints mapCheckpointsRegtest =
        boost::assign::map_list_of
        ( 0, uint256("79a6a4d5e19d4e5c6783691ba9ad75c7c352f906275b93dcad27ea0c3017ec80"))
        ;
    static const CCheckpointData dataRegtest = {
        &mapCheckpointsRegtest,
        0,
        0,
        0
    };

    const CCheckpointData &Checkpoints() {
        if (Params().NetworkID() == CChainParams::TESTNET)
            return dataTestnet;
        else if (Params().NetworkID() == CChainParams::MAIN)
            return data;
        else
            return dataRegtest;
    }

    bool CheckBlock(int nHeight, const uint256& hash)
    {
        if (!fEnabled)
            return true;

        const MapCheckpoints& checkpoints = *Checkpoints().mapCheckpoints;

        MapCheckpoints::const_iterator i = checkpoints.find(nHeight);
        if (i == checkpoints.end()) return true;
        return hash == i->second;
    }

    // Guess how far we are in the verification process at the given block index
    double GuessVerificationProgress(CBlockIndex *pindex, bool fSigchecks) {
        if (pindex==NULL)
            return 0.0;

        int64_t nNow = time(NULL);

        double fSigcheckVerificationFactor = fSigchecks ? SIGCHECK_VERIFICATION_FACTOR : 1.0;
        double fWorkBefore = 0.0; // Amount of work done before pindex
        double fWorkAfter = 0.0;  // Amount of work left after pindex (estimated)
        // Work is defined as: 1.0 per transaction before the last checkpoint, and
        // fSigcheckVerificationFactor per transaction after.

        const CCheckpointData &data = Checkpoints();

        if (pindex->nChainTx <= data.nTransactionsLastCheckpoint) {
            double nCheapBefore = pindex->nChainTx;
            double nCheapAfter = data.nTransactionsLastCheckpoint - pindex->nChainTx;
            double nExpensiveAfter = (nNow - data.nTimeLastCheckpoint)/86400.0*data.fTransactionsPerDay;
            fWorkBefore = nCheapBefore;
            fWorkAfter = nCheapAfter + nExpensiveAfter*fSigcheckVerificationFactor;
        } else {
            double nCheapBefore = data.nTransactionsLastCheckpoint;
            double nExpensiveBefore = pindex->nChainTx - data.nTransactionsLastCheckpoint;
            double nExpensiveAfter = (nNow - pindex->nTime)/86400.0*data.fTransactionsPerDay;
            fWorkBefore = nCheapBefore + nExpensiveBefore*fSigcheckVerificationFactor;
            fWorkAfter = nExpensiveAfter*fSigcheckVerificationFactor;
        }

        return fWorkBefore / (fWorkBefore + fWorkAfter);
    }

    int GetTotalBlocksEstimate()
    {
        if (!fEnabled)
            return 0;

        const MapCheckpoints& checkpoints = *Checkpoints().mapCheckpoints;

        return checkpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        if (!fEnabled)
            return NULL;

        const MapCheckpoints& checkpoints = *Checkpoints().mapCheckpoints;

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, checkpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }
}
