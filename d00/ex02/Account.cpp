/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:39:04 by genouf            #+#    #+#             */
/*   Updated: 2022/11/10 19:55:31 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "Account.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit) {
	
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void) {
	
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

int	Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

int	Account::checkAmount(void) const {
	return this->_amount;
}

void	Account::_displayTimestamp(void) {
	
	time_t	timer = time(NULL);
	struct tm	*timeinfo = localtime(&timer);
	std::cout << "[" << timeinfo->tm_year + 1900 << timeinfo->tm_mon << timeinfo->tm_mday << "_" << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << "] ";
	return ;
}

void	Account::displayAccountsInfos(void) {
	
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

void	Account::displayStatus(void) const {
	
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit) {
	
	int	p_amount;

	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << Account::_nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {

	int	p_amount;

	p_amount = this->_amount;
	_displayTimestamp();
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount <<  ";withdrawal:refused" << std::endl;
		return (1);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (0);
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;