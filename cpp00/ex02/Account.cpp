/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:55:20 by aromani           #+#    #+#             */
/*   Updated: 2025/11/10 13:41:49 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::~Account()
{
    std::cout << "index:" << _accountIndex << ";amout:" << _amount << ";closed" << std::endl;
}

Account::Account(int initial_dep)
{
    _amount = initial_dep;
    _accountIndex = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
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
    _displayTimestamp();
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
    //affichage amount && pamount && check if wihraw > amount
    return (true);
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
    std::time_t time = std::time(NULL);
    std::tm *time_now = std::localtime(&time);
    
    std::cout << "[" << time_now->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << time_now->tm_mon + 1;
    std::cout << std::setfill('0') << std::setw(2) << time_now->tm_mday << "_";
    std::cout << std::setfill('0') << std::setw(2) << time_now->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << time_now->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << time_now->tm_sec << "] ";
}   