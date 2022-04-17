#include <vector>
#include "Node.hpp"

namespace graph {

    Node::Node(std::string id, std::string name, std::string nameShort, bool function) : NamedIdentity(id, name, nameShort), function(function) {}

    bool Node::isFunction() const {
        return function;
    }

    void Node::relate(Node* r) {
        adjacent.push_back(r);
    }
}