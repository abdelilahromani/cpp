#ifndef F_S
# define F_S

#include <iostream>
#include <fstream>

class Line
{
    private:
        std::string s1;
        std::string s2;
        std::string data_file;
        std::string out_file;
        std::string all_data;
    public:
        void fill_string();
        Line(std::string s1, std::string s2, std::string f_name, std::string outfile);
        void change_content();
};

# endif