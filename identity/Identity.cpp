#include "Identity.hpp"

namespace ident {

    Identity::Identity(std::string id) : id(id) {
        if(id.length() < 5){
            throw "ID must not be shorter than 5 characters.";
        }
    }
    
    std::string Identity::identify() const {
        return id;
    }
}