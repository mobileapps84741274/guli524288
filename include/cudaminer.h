//
// Created by guli on 31/01/18.
//

#ifndef ARIONUM_GPU_MINER_CUDAMINER_H
#define ARIONUM_GPU_MINER_CUDAMINER_H

#include "miner.h"
#include "updater.h"

class CudaMiner : public Miner {
public:
    void mine();

    explicit CudaMiner(Stats *s, MinerSettings *ms, Updater *u);
};

#endif //ARIONUM_GPU_MINER_CUDAMINER_H