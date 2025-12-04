#include "../inc/MutantStack.hpp"

// // subject main

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::cout << "\n" << mstack.top() << std::endl;
    
    it = mstack.begin();
    ite = mstack.end();
    
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }mstack.pop();
    std::cout << "\n" << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    std::cout << "\n" << mstack.top() << std::endl;

    it = mstack.begin();
    ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

//implement cannonical form for exceptoin classes in previous exercise