#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phonenumber;
        std::string darckest_secret;
    public:
        void set_fname(std::string first_name);
        void set_lname(std::string last_name);
        void set_nname(std::string nick_name);
        void set_phnum(std::string phonenumber);
        void set_dsec(std::string darckest_secret);
        std::string get_fname();
        std::string get_lname();
        std::string get_nname();
        std::string get_phnum();
        std::string get_dsec();
};

# endif