#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

//In a particular factory a shift supervisor is a salaried employee who supervises a shift.
//In addition to a salary, the shift supervisor earns a yearly bonus when his or her shift meets production goals.

	//Design a ShiftSupervisor class that is derived from the Employee class you created in part 1. 
class Supervisor : public Employee {
private:
	//The ShiftSupervisor class should have a member variable that holds the annual salary 
	double salary;
	//and a member variable that holds the annual production bonus that a shift supervisor has earned.
	double bonus;

public:
	//Write one or more constructors and the appropriate accessor
	double getSalary();
	double getBonus();

	//and mutator functions for the class.
	void setSalary(double newSalary);
	void setBonus(double newBonus);

};

#endif
