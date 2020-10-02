#include "pch.h"
#include "DayOfYear.h"
#include "MonthOfYear.h"
#include <iostream>
#include <sstream>


DayOfYear::DayOfYear(std::string newMonth, int dayOfMonth) {
	MonthOfYear jan("January", 31);
	MonthOfYear feb("February", 28);
	MonthOfYear mar("March", 31);
	MonthOfYear apr("April", 30);
	MonthOfYear may("May", 31);
	MonthOfYear june("June", 30);
	MonthOfYear july("July", 31);
	MonthOfYear aug("August", 31);
	MonthOfYear sep("September", 30);
	MonthOfYear oct("October", 31);
	MonthOfYear nov("November", 30);
	MonthOfYear dec("December", 31);
	this->months[0] = jan;
	this->months[1] = feb;
	this->months[2] = mar;
	this->months[3] = apr;
	this->months[4] = may;
	this->months[5] = june;
	this->months[6] = july;
	this->months[7] = aug;
	this->months[8] = sep;
	this->months[9] = oct;
	this->months[10] = nov;
	this->months[11] = dec;

	bool found = false;
	this->day = 0;
	for (int i = 0; i < NUM_OF_MONTHS; i++) {
		if (newMonth == this->months[i].getMonthName()) {
			std::cout << "Day entered does not exist" << std::endl;
			this->day += dayOfMonth;
			found = true;
		}
		else if (!found) {
			this->day += this->months->getNumOfDays();
		}
	}
	if (!found) {
		std::cout << "Day entered does not exist" << std::endl;
	}
}

int DayOfYear::getDayOfYear() {
	return this->day;
}

DayOfYear::DayOfYear(int dayOfYear) {
	this->day = dayOfYear;
	MonthOfYear jan("January", 31);
	MonthOfYear feb("February", 28);
	MonthOfYear mar("March", 31);
	MonthOfYear apr("April", 30);
	MonthOfYear may("May", 31);
	MonthOfYear june("June", 30);
	MonthOfYear july("July", 31);
	MonthOfYear aug("August", 31);
	MonthOfYear sep("September", 30);
	MonthOfYear oct("October", 31);
	MonthOfYear nov("November", 30);
	MonthOfYear dec("December", 31);
	this->months[0] = jan;
	this->months[1] = feb;
	this->months[2] = mar;
	this->months[3] = apr;
	this->months[4] = may;
	this->months[5] = june;
	this->months[6] = july;
	this->months[7] = aug;
	this->months[8] = sep;
	this->months[9] = oct;
	this->months[10] = nov;
	this->months[11] = dec;
}
std::string DayOfYear::print() {
	int numOfDaysLeft = this->day;
	int monthCounter = 0;

	while (numOfDaysLeft > 0) {
		int daysInMonth = this->months[monthCounter].getNumOfDays();

		if (numOfDaysLeft - daysInMonth < 0) {
			std::stringstream output;
			output << this->months[monthCounter].getMonthName() << " " << numOfDaysLeft;

			return output.str();
		}
		numOfDaysLeft = numOfDaysLeft - daysInMonth;
		monthCounter++;
	}
}