#include <iostream>
#include <string>
#include "../identity/Identity.hpp"
#include "Node.hpp"
#include "EdgeType.hpp"

namespace graph {

    class Relation : public ident::Identity {
        
        private:
            Node* source;
            Node* destination;

        public:
            Relation(std::string id, Node* source, Node* destination);
            EdgeType getType() const;

    };

}