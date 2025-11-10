/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:55:20 by aromani           #+#    #+#             */
/*   Updated: 2025/11/10 16:52:43 by aromani          ###   ########.fr       */
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
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amout:" << _amount << ";closed" << std::endl;
}

Account::Account(int initial_dep)
{
    _amount = initial_dep;
    _accountIndex = _nbAccounts - 1;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _nbAccounts << ";amount:" << _amount << ";created" << std::endl;
    _accountIndex++;
    _nbAccounts++;
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
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposits:" << deposit;
    std::cout << ";amount:" << _amount + deposit;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
}

bool    Account::makeWithdrawal(int witherwals)
{
    if (witherwals > _amount)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex ;
        std::cout << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";withdrawal:" << witherwals;
    std::cout << ";amount:" << _amount - witherwals;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _amount -= witherwals;
    _totalAmount -= witherwals;
    return (true);
}

int     Account::checkAmount(void) const
{
    return (_amount);
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount ;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
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