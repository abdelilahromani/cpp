/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:10:02 by aromani           #+#    #+#             */
/*   Updated: 2025/11/19 19:58:58 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Line.hpp"
#include <cstdlib>

Line::Line(std::string s1, std::string s2, \
    std::string data_file, std::string out_file)
{
    this->s1 = s1;
    this->s2 = s2;
    this->data_file = data_file;
    this->out_file = out_file;
}

void Line::fill_string()
{
    std::string line;
    std::ifstream file(data_file.c_str());
    if (!file.is_open())
    {
        std::cout << "bad file name" << std::endl;
        exit(1); 
    }
    while (true)
    {
        std::getline(file, line);
        line.append("\n");
        all_data.append(line);
        if (file.eof())
            break;
    }
    file.close();
}

void Line::change_content()
{
    size_t i;
    size_t j;
    size_t len;
    size_t f_index;

    i = 0;
    j = 0;
    f_index = 0;
    if (all_data.empty())
        return ;
    std::ofstream ou_f(out_file.c_str());
    std::cout << out_file << std::endl;
    if (!ou_f.is_open())
    {
        std::cout << "bad file name" << std::endl;
        exit(1);
    }
    while (all_data[i])
    {
        len = i;
        while (all_data[len] == s1[j])
        {
            if (j == 0)
                f_index = i;
            j++;
            len++;
        }
        if (j == s1.length())
        {
            all_data.erase(f_index, s1.length());
            all_data.insert(f_index, s2);
            i += s2.length();
        }
        j = 0;
        i++;
        
    }
    ou_f << all_data;
    ou_f.close();
}
