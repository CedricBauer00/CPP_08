#include "../inc/Span.hpp"

Span::Span() : _N( 10000 )
{
    std::cout << GREEN << "Default Span Constructor! Default length : " << ELEC_RED << this->_N << RESET << std::endl;
}

Span::Span( const unsigned int N ) : _N( N )
{
    std::cout << GREEN <<"Parametric Span Constructor! Parametric legth : " << ELEC_RED << this->_N << RESET << std::endl;
}

Span::Span( const Span& copy ) : _N( copy._N ), span( copy.span )
{
    std::cout << GREEN << "Span Copy constructor! Copied legnth : " << ELEC_RED << copy._N << RESET << std::endl;
}

Span&   Span::operator=( const Span& copy )
{
    std::cout << GREEN << "Span assignment operator! Assigned lenght : " << ELEC_RED << copy._N << RESET << std::endl;
    if ( this != &copy )
    {
        _N = copy._N;
        span = copy.span; //korpiert den vektor
    }

    return *this;
}

Span::~Span()
{
    std::cout << RED << "Span destrucotr called!" << RESET << std::endl;
}

unsigned int    Span::getTotalLength()
{
    return this->_N;
}

unsigned int    Span::getCurrentLength()
{
    return static_cast<unsigned int>(this->span.size());   
}

const std::vector<int>& Span::getSpan()
{
    return this->span;
}

void    Span::addNumber( unsigned int number )
{
    if ( this->span.size() >= this->_N )
        throw AlreadyFullException();

    this->span.push_back( number );
    std::cout << "Added Number to Span : " << ORANGE << number << RESET
            << "; Current length : " << BLUE << this->getCurrentLength() << RESET
            << "; total lenght : " << BLUE << this->_N << RESET
            << std::endl;

    return ;
}

void    Span::addMultipleNumbers( B begin, E end )
{
    // setzt ganze anderen Container (list, vector, array, ...) in span ein
    // vorher zahlen wieviel, damit einnal speicher allokiert werden kann, nicht fuer jede loop einmal
    // dann schauen ob momentaner current_szie + neue_size <= _N, dann transfer
    // if ( currentSize + dist <= _N )
        // ... .insert();
}   

// unsigned int    Span::getTotalLength()
// {
//     return this->_N;
// }

// unsigned int    Span::getCurrentLenght()
// {
//     return static_cast<unsigned int>(this->span.size());   
// }

// std::vector<int> Span::getSpan()
// {
//     return this->span;
// }

