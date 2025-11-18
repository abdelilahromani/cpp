/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:10:02 by aromani           #+#    #+#             */
/*   Updated: 2025/11/18 20:27:35 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Line.hpp"

void Line::set_at(std::string Line, std::string s1, std::string s2, std::string f_name)
{
    this->line = Line;
    this->s1 = s1;
    this->s2 = s2;
    this->file_name = f_name;
}

void Line::change_line()
{
    size_t find = line.find(s1);
    if (find != std::string::npos)
    {
        line.erase(find, s1.length());
        line.insert(find, s2);
    }
    std::fstream in_file(file_name, std::ios::in | std::ios::out);
    if (!in_file.is_open())
    {
        std::cout << "invalid fd" << std::endl;
    }
}

