#include "ClassContact.hpp"

void		Contact::printContact() const {
	std::cout << std::left << std::setw(17) << "first Name: ";
	std::cout << this->_first_name << std::endl;
	std::cout << std::left << std::setw(17) << "last Name: ";
	std::cout << this->_last_name << std::endl;
	std::cout << std::left << std::setw(17) << "nickname: ";
	std::cout << this->_nickname << std::endl;
	std::cout << std::left << std::setw(17) << "login: ";
	std::cout << this->_login << std::endl;
	std::cout << std::left << std::setw(17) << "postal address: ";
	std::cout << this->_postal_address << std::endl;
	std::cout << std::left << std::setw(17) << "email address: ";
	std::cout << this->_email_address << std::endl;
	std::cout << std::left << std::setw(17) << "phone number: ";
	std::cout << this->_phone_number << std::endl;
	std::cout << std::left << std::setw(17) << "birthday date: ";
	std::cout << this->_birthday_date << std::endl;
	std::cout << std::left << std::setw(17) << "favorite meal: ";
	std::cout << this->_favorite_meal << std::endl;
	std::cout << std::left << std::setw(17) << "underwear color: ";
	std::cout << this->_underwear_color << std::endl;
	std::cout << std::left << std::setw(17) << "darkest secret: ";
	std::cout << this->_darkest_secret << std::endl;
}

std::string	Contact::_truncateStr(const std::string &str, size_t width) const {
	if (str.length() >= width)
		return str.substr(0, width - 1) + ".";
	return str;
}

void		Contact::printContactInfo() const {
	std::cout << std::left << std::setw(10) <<
		this->_truncateStr(this->_first_name, 10);
	std::cout << '|';
	std::cout << std::left << std::setw(10) <<
		this->_truncateStr(this->_last_name, 10);
	std::cout << '|';
	std::cout << std::left << std::setw(10) <<
		this->_truncateStr(this->_nickname, 10);
	std::cout << '|';
	std::cout << std::endl;
}

void		Contact::_fillFirstName() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the first name of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty() && str.length() > 1 && !this->_isOnlySpace(str);
	} while (!valid);
	this->_first_name = str;
}

void		Contact::_fillLastName() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the last name of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty() && str.length() > 1 && !this->_isOnlySpace(str);
	} while (!valid);
	this->_last_name = str;
}

void		Contact::_fillNickname() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the nickname of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty() && str.length() > 1 && !this->_isOnlySpace(str);
	} while (!valid);
	this->_nickname = str;
}

void		Contact::_fillLogin() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the login of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty() && str.length() > 1 &&
			!this->_isOnlySpace(str) && this->_isAlNum(str);
	} while (!valid);
	this->_login = str;
}

void		Contact::_fillPostalAddress() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the postal address of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty() && str.length() > 1 && !this->_isOnlySpace(str);
	} while (!valid);
	this->_postal_address = str;
}

void		Contact::_fillEmailAddress() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the email address of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty() && str.length() > 1 &&
			!this->_isOnlySpace(str) && this->_isValidMail(str);
	} while (!valid);
	this->_email_address = str;
}

void		Contact::_fillPhoneNumber() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the phone number of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty() && !this->_isOnlySpace(str) && this->_isDigit(str);
	} while (!valid);
	this->_phone_number = str;
}

void		Contact::_fillBirthdayDate() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the birthday date of the contact [YY/MM/DD]: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty()  && str.length() > 1 &&
			!this->_isOnlySpace(str)&& this->_isValidBirthday(str);
	} while (!valid);
	this->_birthday_date = str;
}

void		Contact::_fillFavoriteMeal() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the favorite meal of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty() && str.length() > 1 && !this->_isOnlySpace(str);
	} while (!valid);
	this->_favorite_meal = str;
}

void		Contact::_fillUnderwearColor() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the underwear color of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty() && str.length() > 1 && !this->_isOnlySpace(str);
	} while (!valid);
	this->_underwear_color = str;
}

void		Contact::_fillDarkestSecret() {
	std::string	str;
	bool		valid = false;

	do {
		std::cout << "Enter the darkest secret of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			this->_exitFill(EXIT_FAILURE);
		valid = !str.empty() && str.length() > 1 && !this->_isOnlySpace(str);
	} while (!valid);
	this->_darkest_secret = str;
}

void		Contact::fillContact() {
	this->_fillFirstName();
	this->_fillLastName();
	this->_fillNickname();
	this->_fillLogin();
	this->_fillPostalAddress();
	this->_fillEmailAddress();
	this->_fillPhoneNumber();
	this->_fillBirthdayDate();
	this->_fillFavoriteMeal();
	this->_fillUnderwearColor();
	this->_fillDarkestSecret();
}

bool		Contact::_isDigit(const std::string &str) const {
	return str.find_first_not_of("0123456789") == std::string::npos;
}

bool		Contact::_isValidMail(const std::string &str) const {
	if (str.length() < 3)
		return false;
	size_t	first_idx = str.find('@');
	if (first_idx == std::string::npos || first_idx == 0 ||
			first_idx == str.length() - 1)
		return false;
	size_t	last_idx = str.rfind('@');
	if (last_idx == std::string::npos || last_idx == 0 ||
			last_idx == str.length() - 1)
		return false;
	return first_idx == last_idx;
}

void		Contact::_exitFill(int status) const {
	std::cout << std::endl;
	std::exit(status);
}

bool		Contact::_isAlNum(const std::string &str) const {
	const std::string alnum = "0123456789"
							"abcdefghijklmnopqrstuvwxyz"
							"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	return str.find_first_not_of(alnum) == std::string::npos;
}

bool		Contact::_isValidBirthday(const std::string &str) const {
	char				ch1;
	char				ch2;
	size_t				year;
	size_t				month;
	size_t				day;
	std::stringstream 	ss(str);
	if (str.length() < 5)
		return false;
	ss >> year >> ch1 >> month >> ch2 >> day;
	return ch1 == '/' && ch2 == '/' &&
			month > 0 && month < 13 &&
			day > 0 && day < 31 &&
			ss.rdbuf()->in_avail() == 0;
}

bool		Contact::_isOnlySpace(const std::string &str) const {
	return str.find_first_not_of(" \t\n\v\f\r") == std::string::npos;
}
