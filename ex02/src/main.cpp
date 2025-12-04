#include "../inc/MutantStack.hpp"

int main()
{
    std::cout << "========= MutantStack<int> tests =========" << std::endl;

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
    ++it;//warum das
    --it;//warum das

    std::cout << BLUE << "\nOrder: \nIndex:" << RESET << std::endl;

    size_t i = mstack.size();
    while (it != ite)
    {
        std::cout << i << ". " << *it << std::endl;
        ++it;
        --i;
    }
    // std::stack<int> s(mstack);
    std::cout << BLUE << "\nBegin is: " << RESET << *mstack.begin() << std::endl;
    std::cout << BLUE << "Top is: " << RESET << mstack.top() << std::endl;


    std::cout << "========= List<int> tests =========" << std::endl;

    std::list<int> mList;

    mList.push_back(5);
    mList.push_back(17);
    std::list<int>::iterator l_it = mList.begin();
    std::list<int>::iterator l_ite = mList.end();
    
    std::cout << BLUE << "Order: " << RESET << std::endl;
    while (l_it != l_ite)
    {
        std::cout << *l_it << std::endl;
        ++l_it;
    }

    std::cout << BLUE << "\nDeleting: " << RESET << mList.back() << std::endl;
    mList.pop_back();
    
    std::cout << BLUE << "New Top: " << RESET << mList.back() << std::endl;
    
    std::cout << BLUE << "Size: " << RESET << mList.size() << std::endl;

    std::cout << BLUE << "\nAdding numbers: " << RESET << "[ 3, 5, 737, 0 ]" << std::endl;
    mList.push_back( 3 );
    mList.push_back( 5 );
    mList.push_back( 737 );
    mList.push_back( 123 );
    mList.push_back( 0 );
    mList.push_back( 4 );
    mList.push_back( 76 );
    mList.push_back( 888 );
    mList.push_back( 349 );

    std::cout << "\n" << BLUE << "Top: " << RESET << mList.back() << std::endl;

    l_it = mList.begin();
    l_ite = mList.end();
    ++l_it; //warum das
    --l_it; // warum das

    std::cout << BLUE << "\nOrder: \nIndex:" << RESET << std::endl;

    size_t j = mList.size();
    while (l_it != l_ite)
    {
        std::cout << j << ". " << *l_it << std::endl;
        ++l_it;
        --j;
    }
    // std::stack<int> s(mList);
    std::cout << BLUE << "\nBegin is: " << RESET << *mList.begin() << std::endl;
    std::cout << BLUE << "Top is: " << RESET << mList.back() << std::endl;

    return 0;
}
