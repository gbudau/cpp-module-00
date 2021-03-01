#ifndef CLASSCONTACT_HPP_
#define CLASSCONTACT_HPP_
#include <string>
#include <iomanip>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <sstream>

class Contact {
	public:
		void		printContact() const;
		void		printContactInfo() const;
		void		fillContact();

	private:
		std::string	_first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_address;
		std::string _email_address;
		std::string _phone_number;
		std::string _birthday_date;
		std::string _favorite_meal;
		std::string _underwear_color;
		std::string _darkest_secret;
		void		_fillFirstName();
		void		_fillLastName();
		void		_fillNickname();
		void		_fillLogin();
		void		_fillPostalAddress();
		void		_fillEmailAddress();
		void		_fillPhoneNumber();
		void		_fillBirthdayDate();
		void		_fillFavoriteMeal();
		void		_fillUnderwearColor();
		void		_fillDarkestSecret();
		bool		_isDigit(const std::string &str) const;
		bool		_isValidMail(const std::string &str) const;
		void		_exitFill(int status) const;
		bool		_isAlNum(const std::string &str) const;
		bool		_isValidBirthday(const std::string &str) const;
		bool		_isOnlySpace(const std::string &str) const;
		std::string	_truncateStr(const std::string &str, size_t width) const;
};

#endif  // CLASSCONTACT_HPP_
