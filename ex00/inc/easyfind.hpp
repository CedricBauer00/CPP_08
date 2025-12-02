# pragma once

#include <string>
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <list>
#include <set>

class NotFoundException : public std::exception
{
    public:
        const char *what() const throw() { return "Value not found!"; }
} ;

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

typename enable_if<is_same<typename T::value_type, int>::value, typename T::value_type>::type easyfind( const T &a, const int i )
{
    typename T::const_iterator it =  find(a.begin(), a.end(), i); //iterator wegen lists oder sets // iterator kein Index
    if ( it != a.end() )
        return i;
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