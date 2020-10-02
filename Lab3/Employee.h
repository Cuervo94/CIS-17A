#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

//Design a class named Employee.
//The class should store the following information :
class Employee {
protected:
	//Employee name
	std::string name;
	//	Employee number
	int id;
	//	Hire date
	std::string hireDate;

public:
	//	Write one or more constructors 
	//and the appropriate accessor 
	Employee();
	~Employee();
	std::string getEmployeeName();
	int getEmployeeId();
	std::string getEmployeeHireDate();

	//and mutator functions for the class.
	void setEmployeeName(std::string newName);
	void setEmployeeId(int newId);
	void setEmployeeHireDate(std::string newHireDate);
};

#endif
