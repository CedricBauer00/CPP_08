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
    ++l_it;
    --l_it;

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

//implement cannonical form for exceptoin classes in previous exercise
// 1000000 fuer span

// #include "../inc/MutantStack.hpp"
// #include <list>
// void org_test_more_info( void )
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << "\033[38;5;51m.top\033[38;5;49m called -> \033[38;5;51m" << mstack.top() << "\033[0m\n" << std::endl;
//     mstack.pop();
//     std::cout << "\033[38;5;51m.size\033[38;5;49m called -> \033[38;5;51m"  << mstack.size() << "\033[0m\n" << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     int i = 1;
//     while (it != ite) {
//         std::cout << "\033[38;5;51m" << i << ".\033[38;5;93m index called -> \033[38;5;51m" << *it << "\033[0m" << std::endl;
//     ++it;
//     ++i;
//     }
//     std::cout << std::endl;
//     std::stack<int> s(mstack);
// }
// void with_list( void ) {
//     std::list<int> mstack;
//     mstack.push_back(5);
//     mstack.push_back(17);
//     std::cout << "\033[38;5;49m" << mstack.back() << "\033[0m; ";
//     mstack.pop_back();
//     std::cout << "\033[38;5;208m" << mstack.size() << "\033[0m; ";
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     std::cout << "\033[38;5;49m" << mstack.back() << "\033[0m; ";
//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite) {
//         if (it != mstack.begin())
//             std::cout << ", ";
//         std::cout << "\033[38;5;93m" << *it << "\033[0m";
//     ++it; }
//     std::cout << ";" << std::endl;
// }
// void mutantstack(  ) {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << "\033[38;5;49m" << mstack.top() << "\033[0m; ";
//     mstack.pop();
//     std::cout << "\033[38;5;208m" << mstack.size() << "\033[0m; ";
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     std::cout << "\033[38;5;49m" << mstack.top() << "\033[0m; ";
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite) {
//         if (it > mstack.begin())
//             std::cout << ", ";
//         std::cout << "\033[38;5;93m" << *it << "\033[0m";
//     ++it; }
//     std::cout << ";" << std::endl;
// }
// int main()
// {
//     std::cout << std::endl;
//     std::cout << "\033[38;5;208mCompare MutantStack with List Test:\033[0m" << std::endl;
//     std::cout << std::endl;
//     mutantstack();
//     with_list();
//     std::cout << std::endl;
//     std::cout << "\033[38;5;208mSubject Test:\033[0m" << std::endl;
//     std::cout << std::endl;
//     org_test_more_info();
//     // org_test();
//     return 0;
// }