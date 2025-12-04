#include "../inc/MutantStack.hpp"

// // subject main
#include <list>
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    std::cout << BLUE << "Order: " << RESET << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << BLUE << "\nDeleting: " << RESET << mstack.top() << std::endl;
    mstack.pop();
    
    std::cout << BLUE << "New Top: " << RESET << mstack.top() << std::endl;
    
    std::cout << BLUE << "Size: " << RESET << mstack.size() << std::endl;

    std::cout << BLUE << "\nAdding numbers: " << RESET << "[ 3, 5, 737, 0 ]" << std::endl;
    mstack.push( 3 );
    mstack.push( 5 );
    mstack.push( 737 );
    mstack.push( 123 );
    mstack.push( 0 );
    mstack.push( 4 );
    mstack.push( 76 );
    mstack.push( 888 );
    mstack.push( 349 );

    std::cout << "\n" << BLUE << "Top: " << RESET << mstack.top() << std::endl;

    it = mstack.begin();
    ite = mstack.end();
    ++it;
    --it;

    std::cout << BLUE << "\nOrder: \nIndex:" << RESET << std::endl;

    size_t i = mstack.size();
    while (it != ite)
    {
        std::cout << i << ". " << *it << std::endl;
        ++it;
        --i;
    }
    std::stack<int> s(mstack);
    std::cout << BLUE << "\nBegin is: " << RESET << *mstack.begin() << std::endl;
    std::cout << BLUE << "Top is: " << RESET << mstack.top() << std::endl;
    
    MutantStack<list> l;

    return 0;
}

//implement cannonical form for exceptoin classes in previous exercise
// 1000000 fuer span