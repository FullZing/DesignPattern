#pragma once

#include "Converter.h"

class CaffeConverter : public Converter {
public:
    CaffeConverter(std::initializer_list<std::string> args);

    void buildGraph() override;
    std::shared_ptr<Graph> getGraph() override;

    ~CaffeConverter();
private:
    std::shared_ptr<Graph> graph_;
};