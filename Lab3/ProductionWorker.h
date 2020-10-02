#ifndef PRODUCTON_WORKER_H
#define PRODUCTION_WORKER_H

#include "Employee.h"


//	Next, write a class named ProductionWorker that is derived from the Employee class.
class ProductionWorker : public Employee {
	// The ProductionWorker class should have member variables to hold the following information :
private:
	//Shift(an integer)
	int shift;
	//	Hourly pay rate(a double)
	double pay;

	//	The workday is divided into two shifts : day and night.
	//	The shift variable will hold an integer value representing the shift that the employee works.
	//	The day shift is shift 1, and the night shift is shift 2.

public:
	//	Write one or more constructors and the appropriate accessor
	int getShift();
	double getPay();

	//and mutator functions for the class.
	void setShift(int newShift);
	void setPay(double newPay);

};

#endif

