#pragma once

#include <memory>
#include <vector>
#include <string>

class Graph {
public:
    Graph();
    class Operator {
    public:
        Operator(const std::string& name) : operator_name_(name) {
        }
    private:
        std::string operator_name_;
    };
    void graphTest();
    bool addOperator(std::shared_ptr<Operator> op);
    bool removeOpertor(const std::string &name);
private:
    std::vector<std::shared_ptr<Operator>> operators;
};