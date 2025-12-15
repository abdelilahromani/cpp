/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:44:58 by aromani           #+#    #+#             */
/*   Updated: 2025/12/15 21:15:09 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    //ScavTrap c("abdo");
    FragTrap e("fragtrap");
   // ScavTrap b("badr");

    //c.attack("badr");
    e.attack("laamir");
   // c.takeDamage(4);
    e.takeDamage(9);
    //c.beRepaired(2);
    e.beRepaired(10);
   // c.guardGate();
    e.highFivesGuys();
}