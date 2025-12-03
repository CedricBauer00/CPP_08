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
        v.push_back( 8 );
        v.push_back( 2 );
        v.push_back( 42 );
        v.push_back( 66 );
        v.push_back( 3 );
        sp.addNumber( 4 );
        sp.addNumber( 10 );
        sp.addNumber( 2 );
        sp.addMultipleNumbers( v.begin(), v.end() );
        sp.longestSpan();
        sp.shortestSpan();
        // std::cout << sp << std::endl;
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
    catch( Span::SpanInvalidException &e )
    {
        std::cout << e.what() << std::endl;
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