/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:06:08 by aromani           #+#    #+#             */
/*   Updated: 2025/11/19 19:42:07 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Line.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "invalid args" << std::endl;
        return (0);
    }
    std::string remplace_file;
    remplace_file = av[1];
    remplace_file.insert(remplace_file.length(), ".replace");
    Line l(av[2], av[3], av[1], remplace_file);
    l.fill_string();
    l.change_content();
}