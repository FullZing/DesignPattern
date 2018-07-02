#include <cstdlib>
#include "ComputeSingleton.h"

std::shared_ptr<ComputeSingleton> ComputeSingleton::instance_;

std::map<std::string, std::shared_ptr<ComputeSingleton>> ComputeSingleton::registry_;

void ComputeSingleton::Register(const std::string &name, std::shared_ptr<ComputeSingleton> compute) {
    if (registry_.find(name) == registry_.end()) {
        registry_.emplace(std::make_pair(name, compute));
    }
}

std::shared_ptr<ComputeSingleton> ComputeSingleton::Instance() {
    if (instance_ == nullptr) {
//        std::string compute_library_name = std::getenv("ComputeLibrary");
        std::string compute_library_name = "CPU";
        instance_ =  Lookup(compute_library_name);
    }
    return instance_;
}

std::shared_ptr<ComputeSingleton> ComputeSingleton::Lookup(const std::string &name) {
    auto search = registry_.find(name);
    if (search != registry_.end()) {
        return search->second;
    }
}