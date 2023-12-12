#pragma once 

#include <iostream>

class Warlock 
{

        private: 
                std::string name;   
                std::string title; 
                Warlock();
                Warlock(Warlock const &rhs);
                Warlock &operator=(Warlock const &rhs);

        public:
                Warlock(std::string const &name, std::string const &title);
                ~Warlock();

                std::string const &getTitle() const;
                std::string const &getName() const;

                void    introduce() const;
                void    setTitle(std::string const &title);


};