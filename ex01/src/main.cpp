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
    Span sp( 3 );
    try
    {
        sp.addNumber( 4 );
        sp.addNumber( 10 );
        sp.addNumber( 2 );
        sp.addNumber( 1 );
    }
    catch( Span::AlreadyFullException &e )
    {
        std::cout << ELEC_RED << e.what() << RESET <<  std::endl;
    }
    return 0;
}

// should output:
// $> ./ex01
// 2
// 14
// $>   