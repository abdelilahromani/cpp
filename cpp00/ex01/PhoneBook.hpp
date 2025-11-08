#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int c_index;
        int c_lengt;
    public:
        PhoneBook();
        void AddCon();
        void Search();
        void printer();
};


#endif