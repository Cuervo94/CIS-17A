#include "pch.h"
#include "Supervisor.h"

double Supervisor::getSalary() { 
	return this->salary; 
}
double Supervisor::getBonus() {
	return this->bonus; 
}

void Supervisor::setSalary(double newSalary) {
	this->salary = newSalary; 
}
void Supervisor::setBonus(double newBonus) {
	this->bonus = newBonus; 
}
