#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>

#define RED  "\033[31m"
#define ELEC_RED "\033[38;2;255;20;20m"
#define BLUE    "\033[34m"
#define GREEN  "\033[32m"
#define RESET  "\033[0m"
#define ORANGE  "\033[38;2;255;120;0m" // \x1b[38;2;255;120;0m aber keine ahnung ob \x1b??

template<typename T>

class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack <T>() { std::cout << GREEN << "MutantStack constructor!" << RESET <<std::endl; }
        MutantStack( const MutantStack &copy ) : std::stack<T>( copy ) { std::cout << GREEN << "Copy MutantStack constructor!" << RESET << std::endl; }
        MutantStack& operator=( const MutantStack &copy )
        {
            std::cout << GREEN << "MutantStack assignment operator!" << RESET << std::endl;
            if ( this != &copy )
                std::stack<T>::operator=( copy ); // assgin Basecalss
            return *this; 
        }
        virtual ~MutantStack() { std::cout << RED << "MutantStack destructor!" << RESET << std::endl; }
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }

        iterator end()
        {
            return this->c.end();
        }
};