/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:34:50 by aromani           #+#    #+#             */
/*   Updated: 2025/11/20 11:55:37 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    // member to pointer fubction solve problem if
    std::string lv[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };

    void (Harl::*members[4])() = {
        &Harl::debug,&Harl::info,&Harl::warning,&Harl::error
    };
    for (int i = 0; i < 4; i++)
    {
        if (lv[i] == level)
        {
            (this->*members[i])();
            return ;
        }
    }
    std::cout << "invalid member" << std::endl;
}
