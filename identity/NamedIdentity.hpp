#pragma once
#include <iostream>
#include <string>
#include "Identity.hpp"

namespace ident {
    
    /**
     * @brief A NamedIdentity is identified by its id and additionally has a name and a short representation of that name.
     */
    class NamedIdentity : public Identity {

        private:
            std::string name;
            std::string nameShort;
        
        public:
            NamedIdentity(std::string id, std::string name, std::string nameShort);
            virtual std::string getName() const;

    };
}