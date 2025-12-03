#pragma once

#include <exception>
#include <iostream>
#include <string>

#define RED = "\033[31m";
#define RESET = "\033[0m";
#define ORANGE = "\033[38;2;255;120;0m"; // \x1b[38;2;255;120;0m aber keine ahnung ob \x1b??

template<typename T>

class Span
{
    private:
        T* span;
        const unsigned int _N;
    public:
        Span();
        Span( const unsigned int N );
        Span ( const Span& copy );
        Span& operator=( const Span& copy );
        ~Span();
        
        Span& addNumber(); // still exception class to implement
        Span& shortestSpan(); // shortest distance between numbers stored
        Span& longestSpan(); // longest distance between numbers stored
        Span& addMultipleNumbers( int howMany ); // calls addNumber howMany times often
        // falls !N oder N == 1 throw() exception
        // 2 exceptions fuer N elemnts already stored exception - AlreadyFullException()
        // fuer N == 0 oder N == 1 - SpanInvalidException()
        // tests of at least 10.000 - will test upon 1.000.000
        class AlreadyFullException : public std::exception
        {
            public:
                virtual const char* what() const throw() { return "REDSpan is already full!RESET"; };
        };

        class SpanInvalidException : public std::exception
        {
            public:
                virtual const char* what() const throw() { return "REDSpan is not valid!RESET"; };
        };
};

// fill your span with range of iterators??
// study containers - some member functions take a range of iterators to add a sequence of elements to the container