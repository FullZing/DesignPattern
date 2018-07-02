#pragma once

#include <map>
#include <memory>
#include <string>

class ComputeSingleton : public std::enable_shared_from_this<ComputeSingleton> {
public:
    static void Register(const std::string& name, std::shared_ptr<ComputeSingleton>);
    static std::shared_ptr<ComputeSingleton> Instance();
protected:
    static std::shared_ptr<ComputeSingleton> Lookup(const std::string& name);
private:
    static std::shared_ptr<ComputeSingleton> instance_;
    static std::map<std::string, std::shared_ptr<ComputeSingleton>> registry_;
};