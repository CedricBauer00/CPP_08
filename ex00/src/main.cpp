#include "../inc/easyfind.hpp"
// #include <iostrea>

int main()
{
    try{
        // int array[5] = {1, 2, 3, 4 ,5};       
        std::vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        std::list<int> l;
        l.push_back(2);
        l.push_back(29);
        l.push_back(13);

        std::set<int> s;
        s.insert(22);
        s.insert(13);
        s.insert(9);
        // std::cout << "Search 3: " << easyfind(array, 3) << std::endl;
        std::cout << "Search 20: " << easyfind(v, 20) << std::endl;
        std::cout << "Search 13: " << easyfind(l, 13) << std::endl;
        std::cout << "Search 22: " << easyfind(s, 22) << std::endl;
    }
    catch( NotFoundException &e )
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::set<int> s;
        std::cout << "Search 22: " << easyfind(s, 22) << std::endl;
    }
    catch( NotFoundException &e)
        std::cout << e.what() << std::endl;
    return 0;
}