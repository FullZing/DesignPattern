#pragma once

#include "ComputeSingleton.h"

class CPUCompute : public ComputeSingleton {
public:
    CPUCompute();
    std::shared_ptr<CPUCompute> get_shared_ptr();
private:
    //memory or other operations
};