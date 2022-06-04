/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:02:32 by bbaatar           #+#    #+#             */
/*   Updated: 2022/05/31 16:02:34 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    // [19920104_091532] index:0;amount:42;created
    this->_accountIndex = this->_nbAccounts++;
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
   	std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << initial_deposit << ";";
    std::cout << "created" << std::endl;
}

Account::Account()
{
    this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
    // [19920104_091532] index:7;amount:8942;closed
    Account::_displayTimestamp();
   	std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}

void    Account::_displayTimestamp(void){
    // [19920104_091532]
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900) 
         << (now->tm_mon + 1)
         <<  now->tm_mday << '_'
         <<  now->tm_hour
         <<  now->tm_min
         <<  now->tm_sec
         << "] ";
    // std::cout << "[" << now << "] ";
}

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    // [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
	Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    // [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount<< ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
	Account::_totalAmount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    // [19920104_091532] index:0;p_amount:47;withdrawal:refused
    // [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount<< ";";
    if (this->_amount < withdrawal)
    {
        std::cout << "withdrawal:" << "refused" << std::endl;
        return(false);
    }
    else
    {
        this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << this->_amount << ";";
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    }
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount > 0);
}

void	Account::displayStatus( void ) const
{
// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0

	Account::_displayTimestamp();
   	std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
