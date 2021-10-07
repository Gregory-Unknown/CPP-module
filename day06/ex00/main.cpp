#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc == 2) {
		std::string str(argv[1]);
		Conversion con(str);
		con.print();
	}
	return (0);
}
