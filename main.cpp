#include <iostream>
#include "graph/Node.hpp"
#include "graph/Relation.hpp"

void test();

int main(){
    std::cout << "Testing started." << std::endl;
    test();
    std::cout << "Testing finished." << std::endl;
    return 0;
}

void test(){
    graph::Node* n1 = new graph::Node("000001", "Node 1", "n1", true);
    graph::Node* n2 = new graph::Node("000002", "Node 2", "n2", true);
    graph::Relation* relation = new graph::Relation("00001", n1, n2);
    std::cout << relation->getType() << std::endl;
}