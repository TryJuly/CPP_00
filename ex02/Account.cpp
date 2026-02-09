/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:36:26 by strieste          #+#    #+#             */
/*   Updated: 2026/02/08 12:46:48 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ): _accountIndex(_nbAccounts), _amount(initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += _amount;
	this->_nbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created";
	std::cout << std::endl;
	return ;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed";
	std::cout << std::endl;
	return ;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "account:" << &getNbAccounts << ";total:" << &getTotalAmount;
	std::cout << ";deposits:" << &getNbDeposits << ";withdrawals:" << &getNbWithdrawals;
	std::cout << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	return ;
}
bool	Account::makeWithdrawal( int withdrawal )
{
		if (withdrawal >= this->_amount)
		{
			this->_amount -= withdrawal;
			this->_totalAmount -= withdrawal;
			this->_totalNbWithdrawals++;
			return (true);
		}
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:refused";
		std::cout << std::endl;
		return (false);
}
int		Account::checkAmount( void ) const
{
	return (this->_amount);	
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	timestamp = std::time(nullptr);
	std::tm		datetime = *localtime(&timestamp);

	char	output[50];
	strftime(output, 50, "[%Y%m%d_%I%M%S]", &datetime);
	std::cout << output << " ";
	return ;
}
