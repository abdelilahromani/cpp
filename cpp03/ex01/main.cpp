/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:44:58 by aromani           #+#    #+#             */
/*   Updated: 2025/12/15 18:16:52 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap c("abdo");
   // ScavTrap b("badr");

    c.attack("badr");
    c.takeDamage(4);
    c.beRepaired(2);
    c.guardGate();
}