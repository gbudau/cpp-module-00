#ifndef CLASSPHONEBOOK_HPP_
#define CLASSPHONEBOOK_HPP_
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <sstream>
#include "ClassContact.hpp"
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

#endif  // CLASSPHONEBOOK_HPP_
