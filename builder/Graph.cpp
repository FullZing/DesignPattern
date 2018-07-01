#include <iostream>
#include "Graph.h"

Graph::Graph() {

}

void Graph::graphTest() {
    std::cout << "Graph Test" << std::endl;
}

bool Graph::addOperator(std::shared_ptr<Operator> op) {
    return true;
}

bool Graph::removeOpertor(const std::string &name) {
    return true;
}
