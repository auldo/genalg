#include "NamedIdentity.hpp"

namespace ident {

    NamedIdentity::NamedIdentity(std::string id, std::string name, std::string nameShort) : ident::Identity(id), name(name), nameShort(nameShort){
        if(name.length() < nameShort.length()){
            throw "Name must not be short than short name.";
        }
    }

    std::string NamedIdentity::getName() const{
        return name + " (" + nameShort + ")";
    }
    
}