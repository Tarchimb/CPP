/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:10:48 by tarchimb          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/03/08 22:09:57 by tarchimb         ###   ########.fr       */
=======
/*   Updated: 2022/03/09 09:43:30 by tarchimb         ###   ########.fr       */
>>>>>>> fa3bee9aad3e22b91e816852b0bd13e7712581d3
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
<<<<<<< HEAD
	this->_totalAmount += deposit;
	this->_amount += deposit;
	this->_totalNbDeposits += 1;
	this->_nbDeposits += 1;
=======
	_totalNbDeposits += 1;
	this->_nbDeposits = 1;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount << ";deposit:" << deposit << ";amount:"
		<< (deposit + this->_amount) << ";nb_deposits:"  << this->_nbDeposits
		<< std::endl;
	this->_amount += deposit;
	this->_totalAmount += deposit;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" 
		<< this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:"
		<< _nbWithdrawals << std::endl;
>>>>>>> fa3bee9aad3e22b91e816852b0bd13e7712581d3
}

bool	Account::makeWithdrawal(int withdrawal)
{
<<<<<<< HEAD
	if ((this->_totalAmount - withdrawal) < 0)
=======
	_displayTimestamp();
	if ((this->_amount - withdrawal) >= 0)
>>>>>>> fa3bee9aad3e22b91e816852b0bd13e7712581d3
	{
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals += 1;
		this->_nbWithdrawals = 1;
		std::cout << " index:" << this->_accountIndex << ";p_amount:" 
			<< this->_amount << ";withdrawal:" << withdrawal << ";amount:"
			<< (this->_amount - withdrawal) << ";nb_withdrawals:"
			<< this->_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
		return (true);
	}
	std::cout << " index:" << this->_accountIndex << ";p_amount:" 
			<< this->_amount << ";withdrawal:" << "refused" << std::endl;
	return (false);
}

int	Account::getNbAccounts( void )
{
	_nbAccounts += 1;
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
	_displayTimestamp();
<<<<<<< HEAD
	std::cout << "accounts:" << _nbAccounts << ";total:" << amount
		<< ";deposits:" << _totalNbDeposits << ";withdrawal:"
		<< _totalNbWithdrawals << std::endl;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
=======
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits << ";withdrawals:" 
		<< _totalNbWithdrawals << std::endl;
>>>>>>> fa3bee9aad3e22b91e816852b0bd13e7712581d3
}


Account::Account(int initial_deposit)
{
	(void)initial_deposit;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	_accountIndex = getNbAccounts() - 1;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account(void)
{
<<<<<<< HEAD
	_accountIndex = getNbAccounts() - 1;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:"  << ";closed" << std::endl;
=======
	// _displayTimestamp();
	// _accountIndex = getNbAccounts() - 9;
	// std::cout << " index:" << this->_accountIndex
		// << ";amount:" << _totalAmount << ";closed" << std::endl;
>>>>>>> fa3bee9aad3e22b91e816852b0bd13e7712581d3
}
