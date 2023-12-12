#include "ASpell.hpp"

ASpell::ASpell()
{

}

ASpell::ASpell(std::string const &name, std::string const &effects)
{
    this->name = name;
    this->effects = effects;
    
}

ASpell::ASpell(ASpell const & rhs)
{
    *this = rhs;
}

ASpell &ASpell::operator=(ASpell const & rhs)
{
    this->name = rhs.name;
    this->effects = rhs.effects;
    return (*this);
}

ASpell::~ASpell()
{

}

std::string const &ASpell::getName() const 
{
    return (this->name);
}

std::string const &ASpell::getEffects() const
{
    return (this->effects);
}

void    ASpell::launch(ATarget const &rhs) const
{
    rhs.getHitBySpell((*this));
}