#include <iostream>

#include "CaffeConverter.h"
#include "TensorflowConverter.h"

std::shared_ptr<Graph> create_graph(Converter *converter) {
    converter->buildGraph();
    return converter->getGraph();
}

int main() {
    Converter *caffe_converter = new CaffeConverter({"caffemodel", "caffeprototxt"});

    std::shared_ptr<Graph> graph_one = create_graph(caffe_converter);
    graph_one->graphTest();

    delete caffe_converter;

    Converter *tf_converter = new TensorflowConverter({"tensorflow.pb"});

    std::shared_ptr<Graph> graph_two = create_graph(tf_converter);
    graph_two->graphTest();

    delete tf_converter;
    return 0;
}