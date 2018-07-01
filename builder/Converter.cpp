#include "Converter.h"

Converter::Converter(std::initializer_list<std::string> args) : args_(args){

}

void Converter::buildGraph() {
}

// empty method makes clients re-define their needed method
std::shared_ptr<Graph> Converter::getGraph() {
    return nullptr;
}