# pragma once

#include <string>
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <deque>
#include <iterator>
#include <cstddef>

#define BLUE  "\033[38;5;75m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"
#define RED  "\033[31m"

class NotFoundException : public std::exception
{
    public:
        NotFoundException() throw() { std::cout << "Default" << std::endl; }
        NotFoundException( const NotFoundException& copy ) throw(): std::exception( copy ) { std::cout << "Copy" << std::endl; }
        NotFoundException& operator=( const NotFoundException& copy ) throw() { (void)copy; return *this; }
        virtual ~NotFoundException() throw() {}
        virtual const char *what() const throw() { return "Value not found!"; }
};

template <typename A, typename B>
struct is_same {
    static const bool value = false;
};

template <typename A>
struct is_same<A, A> {
    static const bool value = true;
};

template<bool B, typename T = void>
struct enable_if {};

template<typename T>
struct enable_if<true, T> { typedef T type; };

template <typename T>

typename enable_if<is_same<typename T::value_type, int>::value, size_t>::type easyFind( const T &a, const int i )
{
    typename T::const_iterator it =  std::find(a.begin(), a.end(), i); //iterator wegen lists oder sets // iterator kein Index
    if ( it != a.end() )
    {
        size_t index = static_cast<std::size_t>(std::distance(a.begin(), it));
        return index; // oder it
    }

    throw ( NotFoundException() );
}

// int i =2;
// std::cout << vec[i]
//unterschied
// std::vector<int>::iterator it = vec.begin();
// it++;
// std::cout <<*t;


// was ist ein Vektor?

// 'container  of integer' 
// beispiel:
// std::vector<int> v; // dynamische Liste von ints
// std::array<int, 10> a; //array mit 10 ints
// std::list<int> l; //verkettete liste von ints
// std::set<int> s; // Menge an ints

// Das hier ist das evaluation sheet meiner exercise:


// shortest :  json-difference -    presort - vector presortet - positionen subtrahierne - kleinste finden 

// inheritance : 

// stringstream - conversion?? - parsing 