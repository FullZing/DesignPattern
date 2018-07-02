#include <cstdlib>
#include <iostream>
#include "CPUCompute.h"

int main() {

//    std::setenv();
    std::shared_ptr<CPUCompute> cpu_compute(new CPUCompute());
    ComputeSingleton::Register("CPU" ,cpu_compute->get_shared_ptr());

    std::shared_ptr<CPUCompute> gpu_compute(new CPUCompute());
    ComputeSingleton::Register("GPU" ,cpu_compute->get_shared_ptr());

    auto compute_library = ComputeSingleton::Instance();

    return 0;
}