#pragma once

#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

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
        void addNumber( int number ); // still exception class to implement
        unsigned int shortestSpan() const; // shortest distance between numbers stored
        unsigned int longestSpan() const; // longest distance between numbers stored
        
        template<typename It>
        void addMultipleNumbers( It begin, It end ) // B = begin des neuen containers, E = end
        {
            unsigned int dist;

            dist = std::distance( begin, end ); // vorher zahlen wieviel, damit einnal speicher allokiert werden kann, nicht fuer jede loop einmal
            
            if ( this->span.size() + dist > this->_N ) // ob addierte menge _N ueberschreitet
                throw AlreadyFullException();

            this->span.insert( this->span.end(), begin, end );

            std::cout << GREEN << "Added range of " << dist << " numbers!" << RESET << std::endl;
        }
        // falls !N oder N == 1 throw() exception
        // 2 exceptions fuer N elemnts already stored exception - AlreadyFullException()
        // fuer N == 0 oder N == 1 - SpanInvalidException()
        // tests of at least 10.000 - will test upon 1.000.000
        class AlreadyFullException : public std::exception
        {
            public:
                virtual const char* what() const throw() { return ELEC_RED "Span is already full!" RESET; };
        };

        class SpanInvalidException : public std::exception
        {
            public:
                virtual const char* what() const throw() { return ELEC_RED "Span is not valid!" RESET; };
        };
};

std::ostream& operator<<( std::ostream& os, const Span& span );

// fill your span with range of iterators??
// study containers - some member functions take a range of iterators to add a sequence of elements to the container
// End iterator zeigt auf position HINTER dem letzten Element