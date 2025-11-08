#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook;
    std::string prom;
    std::string index_str;

    while (true)
    {
        std::cout << "brombt  ADD || SEARCH || EXIT  : " ;
        std::getline(std::cin, prom);
        if (std::cin.eof())
            return (0);
        if (prom == "ADD")
            PhoneBook.AddCon();
        if (prom == "SEARCH")
            PhoneBook.Search();
        if (prom == "EXIT")
            std::exit(0);
        
    }
    return 0;
}