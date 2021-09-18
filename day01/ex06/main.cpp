#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Karen karen;
		karen.complain(argv[1]);
	}
	else if (argc > 2)
		std::cout << "Too many tasks !" << std::endl;
	else
		std::cout << "Silence is gold !" << std::endl;
	return (0);
}
