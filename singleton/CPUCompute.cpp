#include "CPUCompute.h"

CPUCompute::CPUCompute() {
}

std::shared_ptr<CPUCompute> CPUCompute::get_shared_ptr() {
    return std::static_pointer_cast<CPUCompute>(shared_from_this());
}
