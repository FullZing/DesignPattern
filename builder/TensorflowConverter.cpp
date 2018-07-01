#include "TensorflowConverter.h"

TensorflowConverter::TensorflowConverter(std::initializer_list<std::string> args) : Converter(args){
    graph_ = std::make_shared<Graph>();
}

void TensorflowConverter::buildGraph() {
//    std::shared_ptr<Graph::Operator> op;
//    std::string name = "op";
//    graph_->addOperator(op);
//    graph_->removeOpertor(name);
}

std::shared_ptr<Graph> TensorflowConverter::getGraph() {
    return graph_;
}