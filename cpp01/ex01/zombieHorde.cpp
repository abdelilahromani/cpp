/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:49:02 by aromani           #+#    #+#             */
/*   Updated: 2025/11/17 21:09:37 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    if (N < 0)
        return (NULL);
    Zombie *zo = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zo[i].set_name(name);
    }
    return(zo);
} 