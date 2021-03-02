#include "Account.class.hpp"

int	Account::getNbAccounts() {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount() {
	return Account::_totalAmount;
}

int	Account::getNbDeposits() {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals() {
	return Account::_totalNbWithdrawals;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit) {
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
		";amount:" << initial_deposit <<
		";created" << std::endl;
}

Account::~Account() {
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
		";amount:" << this->_amount <<
		";closed" << std::endl;
}

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
		";p_amount:" << this->_amount <<
		";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	std::cout << ";amount:" << this->_amount <<
		";nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
		";p_amount:" << this->_amount <<
		";withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	std::cout << withdrawal <<
		";amount:" << this->_amount <<
		";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount() const {
	return this->_amount;
}

void	Account::displayAccountsInfos() {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts <<
		";total:" << Account::_totalAmount <<
		";deposits:" << Account::_totalNbDeposits <<
		";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus() const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
		";amount:" << this->_amount <<
		";deposits:" << this->_nbDeposits <<
		";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp() {
	char	prev;

	std::time_t	tn = std::time(0);
	std::tm		*now = std::localtime(&tn);
	std::cout << '[' << (now->tm_year + 1900);
	prev = std::cout.fill('0');
	std::cout << std::setw(2) << (now->tm_mon + 1) <<
		std::setw(2) << now->tm_mday << '_';
	std::cout << std::setw(2) << now->tm_hour <<
		std::setw(2) << now->tm_min <<
		std::setw(2) << now->tm_sec << "] ";
	std::cout.fill(prev);
}
