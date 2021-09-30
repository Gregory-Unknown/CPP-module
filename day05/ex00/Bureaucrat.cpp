#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &out, const Bureaucrat &crat)
{
	out << "And still " << crat.getName() << ", bureaucrat grade " << crat.getGrade();
	return (out);
}
