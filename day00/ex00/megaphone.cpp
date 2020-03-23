#include <iostream>
#include <cctype>
#include <string>

int main(int ac, char **av)
{
	av++;
	if (ac == 1)
		std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		while (*av)
		{
			std::string str(*av);
			for (size_t i = 0; i < str.length(); i++)
				std::cout << (char)std::toupper(str[i]);
			av++;
		}
	std::cout << "\n";
	return (0);
}