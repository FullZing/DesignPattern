#pragma once

#include "Converter.h"

class TensorflowConverter : public Converter {
public:
    TensorflowConverter(std::initializer_list<std::string> args);

    void buildGraph() override;
    std::shared_ptr<Graph> getGraph() override;

    ~TensorflowConverter();
private:
    std::shared_ptr<Graph> graph_;
};