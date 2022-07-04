/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 23:17:39 by jrasser           #+#    #+#             */
/*   Updated: 2022/07/04 02:41:08 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account (int inital_deposit) {
	static int i = 0;

	this->_accountIndex = i++;
	this->_amount = inital_deposit;
	this->_nbAccounts = i;
	this->_totalAmount += inital_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout
	<< "index:" << (char)(this->_accountIndex + '0')
	<< ";amount:"<<this->_amount
	<< ";created"
	<< std::endl;
	return;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout
	<< "index:" << (char)(this->_accountIndex + '0')
	<< ";amount:"<<this->_amount
	<< ";closed"
	<< std::endl;
	return;
}

int Account::getNbAccounts( void ) { return (_nbAccounts); }
int	Account::getTotalAmount( void ) { return (_totalAmount); }
int	Account::getNbDeposits( void ) { return (_totalNbDeposits); }
int	Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void	Account::_displayTimestamp( void ) {

	time_t		rawtime;
	struct tm 	*timeinfo;
	char 		buffer [80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime (buffer,80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "[" << buffer << "]";
}

void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();
	std::cout
	<< "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals
	<<std::endl;
}

void	Account::makeDeposit( int deposit ) {
	int p_amount = this->_amount;
	
	this->_amount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	this->_totalAmount += deposit;

	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";p_amount:" << p_amount
	<< ";deposit:" << deposit
	<< ";amount:" <<this->_amount
	<< ";nbdeposits:" << this->_nbDeposits
	<<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	int p_amount = this->_amount;

	withdrawal - this->_amount < 0 ? (
		this->_amount -= withdrawal,
		this->_nbWithdrawals += 1,
		this->_totalNbWithdrawals += 1,
		this->_totalAmount -= withdrawal)
		: this->_amount = p_amount;

	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";p_amount:" << p_amount
	<<";withdrawal:";
	if (this->_amount != p_amount)
	{
		std::cout << withdrawal
		<< ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals;
	}
	else
		std::cout << "refused";
	std::cout << std::endl;
	return (this->_amount != p_amount ? 1 : 0);
}
