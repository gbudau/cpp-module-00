#include "contact_class.hpp"
#include "phonebook_class.hpp"

int	main() {
	Phonebook	phonebook;
	std::string c_add = "ADD";
	std::string c_search = "SEARCH";
	std::string c_exit = "EXIT";
	std::string	input;

	std::cout << "****************************************" << std::endl;
	std::cout << "*      My Awesome PhoneBook v1.0.0     *" << std::endl;
	std::cout << "*                                      *" << std::endl;
	std::cout << "*         ADD to add a contact         *" << std::endl;
	std::cout << "*      SEARCH to search a contact      *" << std::endl;
	std::cout << "*        EXIT to exit the program      *" << std::endl;
	std::cout << "****************************************" << std::endl;
	std::cout << std::endl;
	while (true) {
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			phonebook.ExitProgram(1);
		else if (input == c_exit)
			phonebook.ExitProgram(0);
		else if (input == c_add)
			phonebook.AddContact();
		else if (input == c_search)
			phonebook.SearchContact();
	}
	return 0;
}
