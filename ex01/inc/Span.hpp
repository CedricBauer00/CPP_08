#pragma once

#include <exception>

class Span
{
    private:
        const unsigned int _N;
    public:
        Span();
        Span( const unsinged int N );
        Span ( const Span& copy );
        Span& operator=( const Span& copy );
        ~Span();
        
        Span& addNumber(); // still exception class to implement
        Span& shortestSpan(); // shortest distance between numbers stored
        Span& longestSpan(); // longest distance between numbers stored
        // falls !N oder N == 1 throw() exception
        // 2 exceptions fuer N elemnts already stored exception - AlreadyFullException()
        // fuer N == 0 oder N == 1 - SpanInvalidException()
        // tests of at least 10.000 - will test upon 1.000.000
        class AlreadyFullException : public std::exception
        {
            public:
                const char* what();
        }

        class SpanInvalidException : public std::exception
        {
            public:
                const char* what();
        }
};

// fill your span with range of iterators??
// study containers - some member functions take a range of iterators to add a sequence of elements to the container