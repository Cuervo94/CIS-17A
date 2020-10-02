#include "pch.h"
#include "Employee.h"

Employee::Employee() {

}

std::string Employee::getEmployeeName() { 
	return this->name; 
}
int Employee::getEmployeeId() { 
	return this->id; 
}
std::string Employee::getEmployeeHireDate() { 
	return this->hireDate; 
}

//and mutator functions for the class.
void Employee::setEmployeeName(std::string newName) { 
	this->name = newName; 
}
void Employee::setEmployeeId(int newId) { 
	this->id = newId;
}
void Employee::setEmployeeHireDate(std::string newHireDate) { 
	this->hireDate = newHireDate; 
}