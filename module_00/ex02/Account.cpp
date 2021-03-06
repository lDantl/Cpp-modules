#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex	= _nbAccounts;
	_amount			= initial_deposit;
	_nbDeposits		= 0;
	_nbWithdrawals	= 0;
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<  ";amount:" << _amount << ";created" << '\n';
}

Account::Account(){};
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<  ";amount:" << _amount << ";closed" << '\n';
}

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

int	Account::checkAmount(void) const
{
	return _amount;
}

void Account::_displayTimestamp(void)
{
	time_t	timer;

	timer = time(NULL);
	struct tm* t = localtime(&timer);
	std::cout << "[" << t->tm_year + 1900
				<< std::setfill('0') << std::setw(2) << t->tm_mon + 1
				<< std::setfill('0') << std::setw(2) << t->tm_mday
				<< "_"
				<< std::setfill('0') << std::setw(2) << t->tm_hour
				<< std::setfill('0') << std::setw(2) << t->tm_min
				<< std::setfill('0') << std::setw(2) << t->tm_sec << "] ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "account:" << _nbAccounts <<  ";total:" << _totalAmount
				<< ";deposit:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals <<  '\n';	
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << '\n';
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount;

	p_amount = _amount;
	_amount = _amount + deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit
				<< ";amount:" << _amount << ";nb_deposit:" << _nbWithdrawals << '\n';
}

bool Account::makeWithdrawal(int withdrawal)
{
	int	p_amount;

	p_amount = _amount;
	_displayTimestamp();
	std::cout << "index" << _accountIndex << ";p_amount:" << p_amount;
	if (p_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << '\n';
		return (false);
	}
	_amount = _amount - withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount = _totalAmount - withdrawal;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawal:" << _nbWithdrawals << '\n';
	return (true);
}
