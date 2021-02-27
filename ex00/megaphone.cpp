#include <iostream>
#include <cctype>

static void	print_uppercase(const char *str)
{
	while (*str)
		if (islower(*str))
			std::cout << char(toupper(*str++));
		else
			std::cout << *str++;
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (*++argv)
			print_uppercase(*argv);
	std::cout << std::endl;
	return 0;
}
