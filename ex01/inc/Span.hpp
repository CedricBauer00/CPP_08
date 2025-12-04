#pragma once

#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>
#include <list>
#include <deque>

#define RED  "\033[31m"
#define ELEC_RED "\033[38;2;255;20;20m"
#define BLUE    "\033[34m"
#define GREEN  "\033[32m"
#define RESET  "\033[0m"
#define ORANGE  "\033[38;2;255;120;0m" // \x1b[38;2;255;120;0m aber keine ahnung ob \x1b??

class Span
{
    private:
        unsigned int _N;    
        std::vector<int> span;

    public:
        Span();
        Span( const unsigned int N );
        Span ( const Span& copy );
        Span& operator=( const Span& copy );
        ~Span();
        
        unsigned int getTotalLength() const;
        unsigned int getCurrentLength() const;
        const std::vector<int>& getSpan() const;
        void addNumber( int number );
        unsigned int shortestSpan() const; // shortest distance between numbers stored
        unsigned int longestSpan() const; // longest distance between numbers stored
        
        template<typename It>
        void addMultipleNumbers( It begin, It end )
        {
            unsigned int dist;

            dist = std::distance( begin, end );
            
            if ( this->span.size() + dist > this->_N )
                throw AlreadyFullException();

            this->span.insert( this->span.end(), begin, end );

            std::cout << GREEN << "Added range of " << dist << " numbers!" << RESET << std::endl;
        }
        
        class AlreadyFullException : public std::exception
        {
            public:
                AlreadyFullException() {};
                AlreadyFullException( const AlreadyFullException &copy ) : std::exception( copy ) {};
                AlreadyFullException& operator=( const AlreadyFullException &copy )
                {
                    if ( this != &copy )
                        std::exception::operator=( copy );
                    return *this;
                }
                virtual ~AlreadyFullException() throw() {};
                virtual const char* what() const throw() { return ELEC_RED "Span is already full!" RESET; };
        };

        class SpanInvalidException : public std::exception
        {
            public:
                SpanInvalidException() {};
                SpanInvalidException( const SpanInvalidException& copy ) : std::exception( copy ) {};
                SpanInvalidException& operator=( const SpanInvalidException& copy )
                {
                    if ( this != &copy )
                        std::exception::operator=( copy );
                    return *this;
                }
                virtual ~SpanInvalidException() throw() {};
                virtual const char* what() const throw() { return ELEC_RED "Span is not valid!" RESET; };
        };
};

std::ostream& operator<<( std::ostream& os, const Span& span );