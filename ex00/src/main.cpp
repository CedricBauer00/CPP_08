#include "../inc/easyfind.hpp"

int main()
{
    try
    {
        std::cout << "==========Vector test==========" << std::endl; 
        std::vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        std::cout << GREEN << "Search 20: " << BLUE << "at index " << easyfind(v, 20) << RESET << std::endl;
    }
    catch ( NotFoundException &e )
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "\n==========List test==========" << std::endl;
        std::list<int> l;
        l.push_back(2);
        l.push_back(29);
        l.push_back(13);

        std::cout << GREEN << "Search 13: " << BLUE << "at index " << easyfind(l, 13) << RESET << std::endl;
    }
    catch ( NotFoundException &e )
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "\n==========Set test==========" << std::endl;
        std::set<int> s;        std::cout << "Search 22: " << easyfind(s, 22) << std::endl;

        s.insert(22);
        s.insert(13);
        s.insert(9);

        std::cout << GREEN << "Search 22: " << BLUE << "at index " << easyfind(s, 22) << RESET << std::endl;
    }
    catch ( NotFoundException &e )
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "\n==========Deque test==========" << std::endl;
        std::deque<int> d;
        std::cout << "(Sizeof deque : " << d.size() << ")\n(second index value : " << d[1] << ")\n" << std::endl;
        d.push_back(20);
        d.push_back(6);
        std::cout << GREEN << "Search 6: " << BLUE << "at index " << easyfind(d, 6) << RESET << std::endl;
    }
    catch( NotFoundException &e )
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "\n==========Invalid test==========" << std::endl;
        std::set<int> s;
        std::cout << "Search 22: " << easyfind(s, 22) << std::endl;
    }
    catch( NotFoundException &e)
    {
        std::cout << e.what() << std::endl;
    }
    // try
    // {
    //     std::string str = "Hello WOrld";
    //     std::cout << GREEN << "Search 'H': " << BLUE << "at index " << easyfind(str, 'H') << RESET << std::endl;
    // }
    // catch( NotFoundException &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    return 0;
}

// Substitution Failure Is Not An Error
// deque datatype
