#ifndef PHONEBOOK_CLASS_HPP_
#define PHONEBOOK_CLASS_HPP_
#include <string>
#include <iomanip>
#include <iostream>
#include "contact_class.hpp"
#define MAX_CONTACTS 8

class Phonebook {
	public:
		Phonebook(void);

		void	AddContact();
		void	SearchContact() const;
		void	ExitProgram(bool print_newline) const;
	private:
		size_t	_current_contacts;
		Contact	_contacts[MAX_CONTACTS];
		bool	_isDigit(const std::string &str) const;
		void	_printContactsInfo() const;
};

#endif  // PHONEBOOK_CLASS_HPP_
