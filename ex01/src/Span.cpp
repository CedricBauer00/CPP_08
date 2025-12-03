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

unsigned int    Span::getTotalLength() const
{
    return this->_N;
}

unsigned int    Span::getCurrentLength() const
{
    return static_cast<unsigned int>(this->span.size());   
}

const std::vector<int>& Span::getSpan() const
{
    return this->span;
}

std::ostream& operator<<( std::ostream& os, const Span& span )
{
    const std::vector<int>& v = span.getSpan();
    
    os << "[";
    
    for ( size_t i = 0; i < v.size(); ++i )
    {
        os << v[i];
        if ( i < v.size() - 1 )
            os << ", ";
    }
    os << " ]";

    return os;
}

void    Span::addNumber( int number )
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

unsigned int    Span::longestSpan() const
{
    if ( this->span.size() < 2 )
        throw( SpanInvalidException() );
    std::vector<int>::const_iterator min = std::min_element( this->span.begin(), this->span.end() );
    std::vector<int>::const_iterator max = std::max_element( this->span.begin(), this->span.end() );

    unsigned int dist;
    dist  = static_cast<unsigned int>( *max - *min );

    std::cout << ORANGE << "Longest Span found: " << dist << RESET << std::endl;

    return dist;
}

unsigned int    Span::shortestSpan() const
{
    if ( this->span.size() < 2 )
        throw( SpanInvalidException() );
    
    std::vector<int> copy;
    
    copy = this->span;
    
    std::sort( copy.begin(), copy.end() );

    unsigned minSpan = std::numeric_limits<unsigned int>::max();

    for ( size_t i = 1; i < copy.size(); ++i )
    {
        unsigned int diff = static_cast<unsigned int>( copy[i] - copy[i - 1] );
        if ( diff < minSpan )
            minSpan = diff;
    } 

    std::cout << ORANGE << "Shortest Span found: " << minSpan << RESET << std::endl;
    return minSpan;
}