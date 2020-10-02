#include "pch.h"
#include <iostream>

#include "DayOfYear.h"

int main()
{
	DayOfYear day(365);
	std::cout << day.print() << std::endl;

	DayOfYear dayMonth("April", 9);
	std::cout << dayMonth.getDayOfYear() << std::endl;

}
