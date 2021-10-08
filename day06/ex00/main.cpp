#include "Conversion.hpp"

int check_int(std::string &str)
{
	for(size_t i = 0; i < str.length(); ++i)
		if (str.at(i) < 48 || str.at(i) > 57) return (0);
	return (1);
}

int check_double(std::string &str)
{
	if (str == "-inf" || str == "+inf" || str == "nan") return (1);
	for(size_t i = 0; i < str.size(); ++i)
		if ((i == 0 || str.at(i) != '.') && (str.at(i) < 48 || str.at(i) > 57)) return (0);
	return (1);
}
int check_float(std::string &str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf") {
		str.erase(str.size() - 1);
		return (1);
	}
	size_t i;
	for(i = 0; i < str.size() - 1; ++i)
		if ((i == 0 || str.at(i) != '.') && (str.at(i) < 48 || str.at(i) > 57)) return (0);
	if (str.at(i) != 'f') return (0);
	str.erase(i);
	return (1);
}
int main(int argc, char **argv)
{
	try
	{
		if (argc == 2) {
			std::string str(argv[1]);
			if (!str.size()) throw ("Invalid input !");
			int tmp_int;
			double tmp_double;
			float tmp_float;
			std::stringstream ss;
			ss << str;
			Conversion con;
			if (str.length() == 1 && (str.at(0) < 48 || str.at(0) > 57)) {
				Conversion con(str.at(0));
				std::cout << con << std::endl;
			}
			else if (check_int(str) && (ss >> tmp_int)) {
				Conversion con(tmp_int);
				std::cout << con << std::endl;
			}
			else if (check_double(str) && (ss >> tmp_double)) {
				Conversion con(tmp_double);
				std::cout << con << std::endl;
			}
			else if (check_float(str)) {
				std::cout << str << std::endl;
				std::stringstream ss2;
				ss2 << str;
				if (ss2 >> tmp_float) {
					Conversion con(tmp_float);
					std::cout << con << std::endl;
				}
				else
					std::cout << tmp_float << std::endl;
			}
			else
				throw ("Invalid type !");
		}
		else
			throw ("Invalid arguments number !");
	} catch (const char *e)
	{
		std::cerr << e << std::endl;
	}
	return (0);
}
