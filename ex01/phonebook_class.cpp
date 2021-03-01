#include "phonebook_class.hpp"

Phonebook::Phonebook() {
	this->_current_contacts = 0;
	return;
}

void	Phonebook::AddContact() {
	if (this->_current_contacts == MAX_CONTACTS) {
		std::cout << "Phonebook is full, cannot add more contacts" << std::endl;
		return;
	}
	this->_contacts[_current_contacts].fillContact();
	std::cout << "Contact was successfully added" << std::endl;
	this->_current_contacts += 1;
}

void	Phonebook::SearchContact() const {
	size_t		contact_index = 0;
	std::string	input;
	bool		valid = false;

	if (!this->_current_contacts) {
		std::cout << "Phonebook is empty, "
			"please ADD some contacts first" << std::endl;
		return;
	}
	this->_printContactsInfo();
	do {
		std::cout << "Enter the index of the contact: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			this->ExitProgram(1);
		valid = input.length() == 1 && this->_isDigit(input);
		if (valid) {
			std::stringstream ss(input);
			ss >> contact_index;
			valid = contact_index >= 0 && contact_index < this->_current_contacts;
		}
		if (!valid)
			std::cout << "Invalid input, please enter a number between " <<
				0 << " and " << _current_contacts - 1 << std::endl;
		else
				this->_contacts[contact_index].printContact();
	} while (!valid);
}

void	Phonebook::_printContactsInfo() const {
	for (size_t i = 0; i < this->_current_contacts; i++) {
		std::cout << "|";
		std::cout << std::left << std::setw(10) << i;
		std::cout << "|";
		this->_contacts[i].printContactInfo();
	}
}

void	Phonebook::ExitProgram(bool print_newline) const {
	if (print_newline)
		std::cout << std::endl;
	std::exit(EXIT_SUCCESS);
}

bool	Phonebook::_isDigit(const std::string &str) const {
	return str.find_first_not_of("0123456789") == std::string::npos;
}
