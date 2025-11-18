#ifndef F_S
# define F_S

#include <iostream>
#include <fstream>

class Line
{
    private:
        std::string line;
        std::string s1;
        std::string s2;
        std::string file_name;
    public:
        //std::string get_line(int fd);
        void change_line();
        void set_at(std::string line, std::string s1, std::string s2, std::string f_name);
};

# endif