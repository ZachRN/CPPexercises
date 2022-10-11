#include <iostream>
#include <time.h>
#include "Account.hpp"

//Maybe Not needed

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

const	std::string timeFormat(void)
{
	time_t 		current_time = time(&current_time);
	struct tm	*to_format = localtime(&current_time);
	char		buf[100];

	if (!(strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", to_format)))
		return ("");
	// return ("[19920104_091532]");
	return	(buf);
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	std::cout << timeFormat() << " index:" << this->_accountIndex <<";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account(void)
{
	this->_amount = 0;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts++;
	std::cout << timeFormat() << " index:" << this->_accountIndex <<";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	std::cout << timeFormat() << " index:" << this->_accountIndex <<";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::displayStatus(void) const
{
	std::cout << timeFormat() << " index:" << this->_accountIndex << ";amount:" <<
		this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int prev = this->_amount;
	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << timeFormat() << " index:" << this->_accountIndex << ";p_amount:" << prev << ";deposit:" << deposit
		<< ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int prev = this->_amount;
	if (this->_amount < withdrawal)
	{
		std::cout << timeFormat() << " index:" << this->_accountIndex << ";p_amount:" << prev
			<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << timeFormat() << " index:" << this->_accountIndex << ";p_amount:" << prev << ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	std::cout << timeFormat() << " accounts:" << getNbAccounts() << ";total:" << 
		getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}


