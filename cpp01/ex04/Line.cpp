/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:10:02 by aromani           #+#    #+#             */
/*   Updated: 2025/11/22 19:00:45 by aromani          ###   ########.fr       */
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
        if (!file.eof())
            line.append("\n");
        all_data.append(line);
        if (file.eof())
            break;
    }
    file.close();
}

void Line::change_content()
{
    size_t len;
    size_t f_index;

    f_index = 0;
    if (all_data.empty())
        return ;
    std::ofstream ou_f(out_file.c_str());
    if (!ou_f.is_open())
    {
        std::cout << "bad file name" << std::endl;
        exit(1);
    }
    if (s1.empty())
    {
        ou_f << all_data;
        ou_f.close();
        return ;
    }
    f_index = all_data.find(s1);
    while (f_index != std::string::npos)
    {
        all_data.erase(f_index, s1.length());
        all_data.insert(f_index, s2);
        len = f_index + s2.length();
        f_index = all_data.find(s1, len);
    }
    ou_f << all_data;
    ou_f.close();
}
