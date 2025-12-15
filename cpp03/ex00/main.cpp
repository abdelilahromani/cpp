/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:44:58 by aromani           #+#    #+#             */
/*   Updated: 2025/12/15 15:54:45 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("abdo");
    ClapTrap b("badr");

    c.attack("badr");
    c.takeDamage(4);
    c.beRepaired(2);
    
}