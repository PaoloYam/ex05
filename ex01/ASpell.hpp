#pragma once

#include <iostream>

class ATarget;

class ASpell
{
    private:
        std::string name;
        std::string effects;
    
    public:
        ASpell();
        ASpell(std::string const &name, std::string const &effects);
        ASpell(ASpell const &rhs);
        ASpell &operator=(ASpell const &rhs);
        virtual ~ASpell();

        std::string const &getName() const;
        std::string const &getEffects() const;

        virtual ASpell *clone() const = 0;
        void    launch(ATarget const &rhs) const;
};

#include "ATarget.hpp"