#ifndef MONTH_OF_YEAR_H
#define MONTH_OF_YEAR_H
#include <string>

class MonthOfYear {
private:
	int monthDays;
	std::string monthName;

public:
	MonthOfYear();
	MonthOfYear(std::string newName, int newDay);
	int getNumOfDays();
	std::string getMonthName();
};

#endif
