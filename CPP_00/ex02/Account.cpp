
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* Constructeur (cf Initialisation lists) */

Account::Account(int initial_deposit ) : _accountIndex(_nbAccounts),
										_amount(initial_deposit),
										_nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount = _totalAmount + initial_deposit;
	_displayTimestamp();
	std::cout << "index:" <<  _accountIndex
				<<  ";amount:" << _amount
				<< ";created" << std::endl;
/* [19920104_091532] index:0;amount:42;created */
}

/* Destructeur */

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbWithdrawals -= _nbWithdrawals;
	_totalNbDeposits -= _nbDeposits;
	_displayTimestamp();
	std::cout << "index:" <<  _accountIndex
				<<  ";amount:" << _amount
				<< ";closed" << std::endl;
/* [19920104_091532] index:7;amount:8942;closed */
}

/* Accessors */

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" <<  getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals() << std::endl;
	
/* [19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6 */
}

/* fonctions membres */

void		Account::makeDeposit(int deposit )
{
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	std::cout << ";deposit:" << deposit
			  << ";amount:" << this->_amount
			  << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool		Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount
				<< ";withdrawal:";
				if (this->_amount - withdrawal < 0)
				{
					std::cout << "refused" << std::endl;
					return (false);
				}
				this->_amount -= withdrawal;
				this->_nbWithdrawals++;
				this->_totalNbWithdrawals++;
				this->_totalAmount -= withdrawal;
				std::cout << withdrawal
				<< ";amount:" << this->_amount
				<< ";nb_withdrawals:" << this->_nbWithdrawals
				<< std::endl;
	return (true);
	// [19920104_091532] index:0;p_amount:47;withdrawal:refused
	// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
}
int			Account::checkAmount( void ) const
{
	return (this->_totalAmount);
}

void		Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
	// [19920104_091532] index:7;amount:16596;deposits:1;withdrawals:0
}

void	Account::_displayTimestamp( void )
{
	std::time_t	time = std::time(0);
	struct tm *p = localtime(&time);
	char	buf[2048];

	strftime(buf, 2048, "[19920104_091532] ", p);
	/* strftime(buf, 2048, "[%d%m%Y_%H%M%S] ", p); */

	std::cout << buf;
}




























