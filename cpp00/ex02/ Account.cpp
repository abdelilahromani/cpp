/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Account.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:55:20 by aromani           #+#    #+#             */
/*   Updated: 2025/11/10 12:59:47 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::~Account()
{
    std::cout << "index:" << _accountIndex << ";amout:" << _amount << ";closed" << std::endl;
}

Account::Account(int initial_dep)
{
    _amount = initial_dep;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

int	Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    std::cout << "accounts:" << _nbAccounts << ";total:" <<  _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl ;
}

void    Account::makeDeposit(int deposit)
{
    _totalNbDeposits++;
    _nbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
    //print
}

bool    Account::makeWithdrawal(int witherwals)
{
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    _amount -= witherwals;
    _totalAmount -= witherwals;
    //affichage amount && pamount
}

int     Account::checkAmount(void) const
{
    return (_amount);
}

void    Account::displayStatus(void) const
{
    //print [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
}

void Account::_displayTimestamp(void)
{
    
}