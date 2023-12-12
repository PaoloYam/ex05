#pragma once 

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>

class Warlock 
{

        private: 
                std::string name;   
                std::string title; 
                Warlock();
                Warlock(Warlock const &rhs);
                Warlock &operator=(Warlock const &rhs);

                std::map<std::string, ASpell *> arr;

        public:
                Warlock(std::string const &name, std::string const &title);
                ~Warlock();

                std::string const &getTitle() const;
                std::string const &getName() const;

                void    introduce() const;
                void    setTitle(std::string const &title);

                void    learnSpell(ASpell *rhs);
                void    forgetSpell(std::string spell);
                void    launchSpell(std::string spell, ATarget const &target);


};