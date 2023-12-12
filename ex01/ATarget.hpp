#pragma once

#include <iostream>

class ASpell;

class ATarget
{
    private:
        std::string type;

    public:
        ATarget();
        ATarget(std::string const &type);
        ATarget(ATarget const &rhs);
        ATarget &operator=(ATarget const &rhs);
        virtual ~ATarget();

        std::string const &getType() const;
     
        void    getHitBySpell(ASpell const &rhs) const;
        virtual ATarget *clone() const = 0;
};

#include "ASpell.hpp"