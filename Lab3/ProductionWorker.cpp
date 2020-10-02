#include "pch.h"
#include "ProductionWorker.h"

int ProductionWorker::getShift() { 
	return this->shift; 
}
double ProductionWorker::getPay() { 
	return this->pay; 
}

void ProductionWorker::setShift(int newShift) { 
	this->shift = newShift; 
}
void ProductionWorker::setPay(double newPay) { 
	this->pay = newPay; 
}
