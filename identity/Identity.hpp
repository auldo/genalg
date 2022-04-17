#pragma once
#include <iostream>
#include <string>

namespace ident {

    /**
     * @brief An identity is identified by its id.
     */
    class Identity {

        private:
            std::string id;
            
        public:
            std::string identify() const;
            Identity(std::string id);
    };
}