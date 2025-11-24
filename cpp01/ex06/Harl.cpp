/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:34:50 by aromani           #+#    #+#             */
/*   Updated: 2025/11/22 16:02:44 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    exeption = 0;
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << "\n";
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << "\n";
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
    std::cout << "\n";
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << "\n";
}

void Harl::complain(std::string level)
{
    std::string lv[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };

    void (Harl::*members[4])() = {
        &Harl::debug,&Harl::info,&Harl::warning,&Harl::error
    };
    exeption = -1;
    for (int i = 0; i < 4; i++)
    {
        if (lv[i] == level)
        {
            exeption = i;
            break ;
        }
    }

    switch (exeption)
    {
        case 0:
            (this->*members[0])();
            //fall through         
        case 1:
            (this->*members[1])();
            //fall through
        case 2:
            (this->*members[2])();
            //fall through
        case 3:
            (this->*members[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
