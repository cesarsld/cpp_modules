#include "phonebook.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
	delete this;
}

void Contact::setup_data()
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter login: ";
	std::getline(std::cin, login);
	std::cout << "Enter address: ";
	std::getline(std::cin, address);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone);
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, birthday);
	std::cout << "Enter favourite meal: ";
	std::getline(std::cin, favourite_meal);
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, underwear_color);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);
	std::cout << "Contact added!" << std::endl;
}

void	display_entry(std::string str)
{
	int gap;

	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		gap = 10 - str.length();
		while (gap--)
			std::cout  << " ";
		std::cout << str;
	}
}

void	Contact::display_preview(int index)
{
	std::cout  << "|";
	std::cout << "         "  <<  index;
	std::cout  << "|";
	display_entry(first_name);
	std::cout  << "|";
	display_entry(last_name);
	std::cout  << "|";
	display_entry(nickname);
	std::cout  << "|" << std::endl;
	std::cout <<  "|----------|----------|----------|----------|" << std::endl;
}

void	Contact::display_data()
{
	std::cout << std::endl;
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Address: " << address << std::endl;
	std::cout << "Phone number: " << phone << std::endl;
	std::cout << "Birthday date: " << birthday << std::endl;
	std::cout << "Favourite meal: " << favourite_meal << std::endl;
	std::cout << "Underwear color: " << underwear_color << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}