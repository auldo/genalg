#include "Relation.hpp"

namespace graph {

    Relation::Relation(std::string id, Node* source, Node* destination) : Identity(id), source(source), destination(destination){
        source->relate(destination);
        destination->relate(source);
    }

    EdgeType Relation::getType() const {
        if(source->isFunction() && destination->isFunction()) {
            return EdgeType::FF;
        } else if(!source->isFunction() && !destination->isFunction()){
            return EdgeType::IOIO;
        } else {
            return EdgeType::FIO;
        }
    }
}