#pragma once

#include <initializer_list>
#include <memory>
#include "Graph.h"

class Converter {
public:
    Converter(std::initializer_list<std::string> args);

    virtual void buildGraph();
    virtual std::shared_ptr<Graph> getGraph();

    ~Converter() = default;
protected:
    std::initializer_list<std::string> args_;
};