/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:10:48 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/08 16:39:33 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
	std::cout << "[" << buf << "]";
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	this->_totalAmount += deposit;
	this->_totalNbDeposits += 1;
	this->_amount += deposit;
	this->_nbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_totalAmount - withdrawal > 0)
	{
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals += 1;
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		return (true);
	}
	return (false);
}

int	Account::getNbAccounts( void )
{
	_nbAccounts += 1;
	// _accountIndex = _nbAccounts;
	return (_nbAccounts);	
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}


int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayAccountsInfos(void)
{
	int	amount;

	amount = getTotalAmount();
	_displayTimestamp();
	std::cout << "index:" << ";amount:" << amount << ";deposits:"
		<< std::endl;
}

void	Account::displayStatus(void) const
{
	std::cout << this->_accountIndex << ";" << this->_amount << ";" 
		<< this->_nbDeposits << ";" << &this->getNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = getNbAccounts() - 1;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << initial_deposit << ";created" << std::endl;
	this->_totalAmount += initial_deposit;
}

Account::~Account(void)
{

}
