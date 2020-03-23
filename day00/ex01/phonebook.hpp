#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>
# include <unistd.h>
class Contact
{
	//int			index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	address;
	std::string	phone;
	std::string	birthday;
	std::string	favourite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
	public:
	Contact();
	~Contact();
	void setup_data(void);
	void display_preview(int index);
	void display_data();

};

#endif