#pragma once

#include "ComputeSingleton.h"

class GPUCompute : public ComputeSingleton {
public:
    GPUCompute();
    std::shared_ptr<GPUCompute> get_shared_ptr();
private:
    //memory or other operations
};