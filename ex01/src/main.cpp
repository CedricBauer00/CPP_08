#include "../inc/Span.hpp"

// subject main
// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }

int main()
{
    try
    {
        std::cout << "\n==========Everything works test==========" << std::endl;

        Span sp;
        Span sp1( 3 );
        std::vector<int> v;
        std::list<int> l;
        std::deque<int> d;
        
        l.push_back( 4 );
        l.push_back( 11 );
        l.push_back( 99 );
        
        v.push_back( 8 );
        v.push_back( 2 );
        v.push_back( 42 );
        v.push_back( 66 );
        v.push_back( 3 );
        v.push_back( -1 );
        
        d.push_back( 93 );
        d.push_back( 1199 );
        d.push_back( 956 );

        sp.addNumber( 4 );
        sp.addNumber( 10 );
        sp.addNumber( 2 );

        sp.addMultipleNumbers( l.begin(), l.end() );
        sp.addMultipleNumbers( v.begin(), v.end() );
        sp.addMultipleNumbers( d.begin(), d.end() );

        std::cout << sp << std::endl;
        sp.longestSpan();
        sp.shortestSpan();
    }
    catch( Span::AlreadyFullException &e )
    {
        std::cout << ELEC_RED << e.what() << RESET <<  std::endl;
    }
    try
    {
        std::cout << "\n==========Invalid Span test==========" << std::endl;

        Span sp( 0 );
        sp.longestSpan();
    }
    catch( std::exception &e )
    {
        std::cout << ELEC_RED << "Cought expected excpetion " << e.what() << std::endl;
    }
    try
    {
        std::cout << "\n==========Invalid Span test==========" << std::endl;

        Span sp( 0 );
        sp.addNumber( 3 );
        sp.shortestSpan();
    }
    catch( std::exception &e )
    {
        std::cout << ELEC_RED << "Cought expected excpetion " << e.what() << std::endl;
    }
    try
    {
        std::cout << "\n==========Invalid Span test==========" << std::endl;

        Span sp( 2 );
        sp.addNumber( 3 );
        sp.addNumber( 3 );

        sp.shortestSpan();
    }
    catch( std::exception &e )
    {
        std::cout << ELEC_RED << "Cought expected excpetion " << e.what() << std::endl;
    }
    return 0;
}

// should output:
// $> ./ex01
// 2
// 14
// $>   