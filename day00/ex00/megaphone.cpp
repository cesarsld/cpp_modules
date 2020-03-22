#include <iostream>
#include <cctype>
int main(int ac, char **av)
{
	av++;
	if (ac == 1)
		std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		while (*av)
			std::cout << *av++;
	std::cout << "\n";
	return (0);
}