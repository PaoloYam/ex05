#include "warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock()
{

}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(Warlock const &rhs)
{
    *this = rhs;
}

Warlock &Warlock::operator=(Warlock const &rhs)
{
    this->name = rhs.name;
    this->title = rhs.title;
    return *this;
}

std::string const & Warlock::getTitle() const
{
    return (title);
}

std::string const & Warlock::getName() const
{
    return (name);
}

void    Warlock::setTitle(std::string const &title)
{
    this->title = title;
}

void    Warlock::introduce() const 
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void    Warlock::learnSpell(ASpell *rhs)
{
    if (rhs)
       if(arr.find(rhs->getName()) == arr.end())
            arr[rhs->getName()] = rhs->clone();
}

void Warlock::forgetSpell(std::string spell)
{
	if (arr.find(getName()) != arr.end())
        arr.erase(arr.find(spell));
}

void Warlock::launchSpell(std::string spell, ATarget const &target)
{
	if (arr.find(spell) != arr.end())
        arr[spell]->launch(target);
}