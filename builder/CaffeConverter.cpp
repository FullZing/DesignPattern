#include "CaffeConverter.h"

CaffeConverter::CaffeConverter(std::initializer_list<std::string> args) : Converter(args){
    graph_ = std::make_shared<Graph>();
}

void CaffeConverter::buildGraph() {
//    std::shared_ptr<Graph::Operator> op;
//    std::string name = "op";
//    graph_->addOperator(op);
//    graph_->removeOpertor(name);
}

std::shared_ptr<Graph> CaffeConverter::getGraph() {
    return graph_;
}