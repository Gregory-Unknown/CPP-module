#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :
_accountIndex(_nbAccounts++),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0)
{
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits" << _totalNbDeposits
				<< ";withdrawals" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount;

	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << p_amount
				<< ";deposit" << deposit
				<< ";amount" << _amount
				<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = 0;

	p_amount = _amount;
	if (_amount > withdrawal)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex
					<< ";p_amount:" << p_amount
					<< ";withdrawal" << withdrawal
					<< ";amount" << _amount
					<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << p_amount
				<< ";withdrawal:refused" << std::endl;
	return (false);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits" << _nbDeposits
				<< ";withdrawals" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t		raw;
	struct tm	*timeinfo;

	time(&raw);
	timeinfo = localtime(&raw);
	std::cout << "[" <<  (timeinfo->tm_year + 1900)
						<< (timeinfo->tm_mon + 1)
						<< timeinfo->tm_mday << "_"
						<< timeinfo->tm_hour
						<< timeinfo->tm_min
						<< timeinfo->tm_sec << "] ";
}
