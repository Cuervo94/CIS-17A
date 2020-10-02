#ifndef DAY_OF_YEAR_H
#define DAY_OF_YEAR_H

#include "MonthOfYear.h"
#include <string>

class DayOfYear {
private:
	const static int NUM_OF_MONTHS = 12;
	int day;
	MonthOfYear months[NUM_OF_MONTHS];
public:
	DayOfYear(int dayOfYear);
	DayOfYear(std::string newMonth, int dayOfMonth);
	int getDayOfYear();
	std::string print();
};


#endif