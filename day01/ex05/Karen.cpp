#include "Karen.hpp"

Karen::Karen()
{
}
Karen::~Karen()
{
}

void Karen::debug()
{
	std::cout << "DEBUG: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info()
{
	std::cout << "INFO: I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error()
{
	std::cout << "ERROR: I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::complain(std::string level)
{
	typedef void (Karen::*CALL_MEMBER_FUNC)();
	std::string funcPool[] = { std::string("debug"), std::string("info"), std::string("warning"), std::string("error") };
	CALL_MEMBER_FUNC actionsPool[] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	for (int i = 0; i<4; ++i)
		if (level == funcPool[i]) (this->*actionsPool[i])();
}
