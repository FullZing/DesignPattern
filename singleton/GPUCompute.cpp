#include "GPUCompute.h"

GPUCompute::GPUCompute() {
}

std::shared_ptr<GPUCompute> GPUCompute::get_shared_ptr() {
    return std::static_pointer_cast<GPUCompute>(shared_from_this());
}

