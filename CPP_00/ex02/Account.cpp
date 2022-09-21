
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

	std::cout << "index:" <<  _accountIndex
				<<  ";amount:" << _amount
				<< ";created" << std::endl;
/* [19920104_091532] index:0;amount:42;created */
}

/* Destructeur */

Account::~Account(void)
{
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

	std::cout << "accounts: " <<  getNbAccounts()
				<< ";total: " << getTotalAmount()
				<< ";deposits: " << getNbDeposits()
				<< ";withdrawals: " << getNbWithdrawals() << std::endl;
	
/* [19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6 */
}

/* fonctions membres */

void		Account::makeDeposit(int initial_deposit )
{
	this->_amount += initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
}

bool		Account::makeWithdrawal( int withdrawal )
{
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	/* std::cout << "index:" << this->_accountIndex
				<< ";p_amount:" << this->_amount
				<< ";withdrawals:" 
				if (this->_amount < 0)
				{
					<< ";withdrawals:refused" << std::endl;
					return (false);
				}
				else
				{
					this->_amount -= this->_nbWithdrawals;
					this->_nbWithdrawals++;
				}
				<< ";withdrawals" << this->_nbWithdrawals;
				
				
				
				<< this->_nbWithdrawals
				<< std::endl; */
	return (true);
	// 	[19920104_091532] index:0;p_amount:47;withdrawal:refused
	// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
}
int			Account::checkAmount( void ) const
{
	return (this->_amount);
}

void		Account::displayStatus( void ) const
{
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
	// [19920104_091532] index:7;amount:16596;deposits:1;withdrawals:0
}

void	Account::_displayTimestamp( void )
{

}




























