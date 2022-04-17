#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "../identity/NamedIdentity.hpp"

namespace graph {

    class Node : public ident::NamedIdentity {
    
        private:
            bool function;
            std::vector<Node*> adjacent;
        
        public:
            Node(std::string id, std::string name, std::string nameShort, bool function);
            bool isFunction() const;
            void relate(Node* r);
    };

}