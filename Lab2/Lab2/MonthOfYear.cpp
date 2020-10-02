#include "pch.h"
#include "MonthOfYear.h"
#include <string>

MonthOfYear::MonthOfYear() {

}

MonthOfYear::MonthOfYear(std::string newName, int newDay) {
	this->monthName = newName;
	this->monthDays = newDay;
}

int MonthOfYear::getNumOfDays() {
	return this->monthDays;
}

std::string MonthOfYear::getMonthName() {
	return this->monthName;
}