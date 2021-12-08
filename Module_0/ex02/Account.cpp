/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 15:41:26 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/12/08 19:26:20 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	static int i;

	_displayTimestamp();
	std::cout << "index:" << i << ";amount:" << initial_deposit << ";created" << std::endl;
	_amount = initial_deposit;
	_accountIndex = i;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	i++;
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
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
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:"
	<< getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}



void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:"
	<< checkAmount() << ";deposit:" << deposit << ";amount:" << checkAmount() + deposit << ";nb_deposits:" 
	<< _nbDeposits + 1 << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawl)
{
	_displayTimestamp();
	if (checkAmount() > withdrawl)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:"
		<< checkAmount() << ";withdrawal:" << withdrawl << ";amount:" << checkAmount() - withdrawl << ";nb_withdrawals:" 
		<< _nbWithdrawals + 1 << std::endl;
		_amount -= withdrawl;
		_totalAmount -= withdrawl;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		return (true);
	}
	std::cout << "index:" << _accountIndex << ";p_amount:"
		<< checkAmount() << ";withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount() const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
	<< _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	now = time(0);
	struct tm	tstruct;
	char	buf[80];

	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
	std::cout << "[" << buf << "] "; 
}

