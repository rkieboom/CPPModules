/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 15:41:26 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/10/02 15:34:51 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int v)
{
	_amount += v;
}

Account::~Account()
{
	
}

int Account::getNbAccounts()
{
	return 0;
	// return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return 0;
	// return _totalAmount;
}

int Account::getNbDeposits()
{
	return 0;
	// return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return 0;
	// return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	std::cout << getNbAccounts() << std::endl;
	std::cout << getTotalAmount() << std::endl;
	std::cout << getNbDeposits() << std::endl;
	std::cout << getNbWithdrawals() << std::endl;
}



void Account::makeDeposit(int deposit)
{
	_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawl)
{
	if (_amount > withdrawl)
	{
		_amount -= withdrawl;
		return (true);
	}
	return (false);
}

int		Account::checkAmount() const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	// std::cout << _accountIndex << std::endl 
	// << _amount << std::endl << _nbDeposits
	// << std::endl << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << 999;
}

