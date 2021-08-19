#include "phonebook.hpp"

void	ft_print_menu()
{
	std::cout << "A poor excuse of a phonebook ;)" << std::endl;
	std::cout << " ____         _____   _________   ____     __    __    __\n";
	std::cout << "|     \\      /     | | ________| |    \\   |  |  |  |  |  |\n";
	std::cout << "|  |\\  \\    /  /|  | | |_______  |  |\\ \\  |  |  |  |  |  |\n";
	std::cout << "|  | \\  \\  /  / |  | |  _______| |  | \\ \\ |  |  |  |  |  |\n";
	std::cout << "|  |  \\  \\/  /  |  | | |_______  |  |  \\ \\|  |  |  |__|  |\n";
	std::cout << "|__|   \\____/   |__| |_________| |__|   \\____|  |________|\n";
	std::cout << std::endl;
	std::cout << "COMMANDS :" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD" << " | " "SEARCH" << " | " << "EXIT" << std::endl;
	std::cout << std::endl;
}

int	main()
{
	int			i;
	int			j;
	std::string input;
	PhoneBook	phoneBook[MAX_CONTACTS];

	i = 0;
	j = 0;
	while (strcmp(input.c_str(), "EXIT"))
	{
		ft_print_menu();
		getline(std::cin, input, '\n');
		if (!strcmp(input.c_str(), "ADD"))
		{
			if (i < MAX_CONTACTS)
				phoneBook[i++] = ft_add();
			else
				phoneBook[j++] = ft_add();
			if (j + 1 == MAX_CONTACTS)
				j = 0;
		}
		else if (!strcmp(input.c_str(), "SEARCH"))
		{

		}
	}
}
