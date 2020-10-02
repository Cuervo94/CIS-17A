#include "pch.h"
#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "Supervisor.h"
#include "TeamLeader.h"

int main()
{
	//	Finally, in your main application, create two ProductionWorkers, 
	//	one on the day shift 
	ProductionWorker pw1;
	pw1.setEmployeeName("Pedro Longo");
	pw1.setEmployeeId(10);
	pw1.setEmployeeHireDate("1/23/2020");
	pw1.setShift(1);
	pw1.setPay(15.50);

	//and one on the night shift.
	ProductionWorker pw2;
	pw2.setEmployeeName("Steve Rogers");
	pw2.setEmployeeId(12);
	pw2.setEmployeeHireDate("12/12/2019");
	pw2.setShift(2);
	pw2.setPay(17.25);

	std::cout << "First Shift Employees:\n"
		<< pw1.getEmployeeName() << " - "
		<< pw1.getEmployeeId() << " - "
		<< pw1.getEmployeeHireDate() << " - "
		<< pw1.getShift() << " - "
		<< pw1.getPay() << std::endl;

	std::cout << "Second Shift Employees:\n"
		<< pw2.getEmployeeName() << " - "
		<< pw2.getEmployeeId() << " - "
		<< pw2.getEmployeeHireDate() << " - "
		<< pw2.getShift() << " - "
		<< pw2.getPay() << std::endl;

	//Create an instance of ShiftSupervisor in your application.
	Supervisor s;
	s.setEmployeeName("Peter Parker");
	s.setEmployeeId(1);
	s.setEmployeeHireDate("2/5/2015");
	s.setSalary(45250.00);
	s.setBonus(200);

	std::cout << "Supervisor:\n"
		<< s.getEmployeeName() << " - "
		<< s.getEmployeeId() << " - "
		<< s.getEmployeeHireDate() << " - "
		<< s.getSalary() << " - "
		<< s.getBonus() << std::endl;

	//Create an instance of TeamLeader in your application.

	TeamLeader t;
	t.setEmployeeName("Homer Simpson");
	t.setEmployeeId(7);
	t.setEmployeeHireDate("1/5/2020");
	t.setMonthlyBonus(80);
	t.setTrainingNeeded(5);
	t.setTrainingAttended(4);

	std::cout << "Team Leader:\n"
		<< t.getEmployeeName() << " - "
		<< t.getEmployeeId() << " - "
		<< t.getEmployeeHireDate() << " - "
		<< t.getMonthlyBonus() << " - "
		<< t.getTrainingNeeded() << " - "
		<< t.getTrainingAttended() << std::endl;
}
