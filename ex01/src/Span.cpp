#include "../inc/Span.hpp"

Span::Span() : _N( 10000 )
{
    std::cout << GREEN << "Default Span Constructor! Default length : " << this->_N << RESET << std::endl;
}

Span::Span( const unsigned int N ) : _N( N )
{
    std::cout << GREEN <<"Parametric Span Constructor! Parametric legth : " << this->_N << RESET << std::endl;
}

Span::Span( const Span& copy ) : _N( copy._N )
{
    std::cout << GREEN << "Span Copy constructor! Copied legnth : " << copy._N << RESET << std::endl;
}

Span&   Span::operator=( const Span& copy )
{
    std::cout << GREEN << "Span assignment operator! Assigned lenght : " << copy._N << RESET << std::endl;
    if ( this != &copy )
        _N = copy._N;
    return *this;
}

Span::~Span()
{
    std::cout << RED << "Span destrucotr called!" << RESET << std::endl;
}

unsigned int  Span::getLength()
{
    return _N;
}

void    Span::addNumber( unsigned int number )
{
    this->span.push_back( number );
    std::cout << "Added Number to Span : " 
            << number
            << "; total lenght : "
            << this->_N
            << std::endl;
}

