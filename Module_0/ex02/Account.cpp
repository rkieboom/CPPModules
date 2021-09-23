/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.CPP                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 15:41:26 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/09/23 17:18:37 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
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
	std::cout << _accountIndex << std::endl 
	<< _amount << std::endl << _nbDeposits
	<< std::endl << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << 1;
}

