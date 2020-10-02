#ifndef TEAM_LEADER_H
#define TEAM_LEADER_H

#include "Employee.h"

//In a particular factory, a team leader is an hourly paid production worker who leads a small team.
//In addition to hourly pay, team leaders earn a fixed monthly bonus.
//Team leaders are required to attend a minimum number of hours of training per year.


//Design a TeamLeader class that extends the ProductionWorker class you designed in part 1. 
class TeamLeader : public Employee {
private:
	//The TeamLeader class should have member variables for the monthly bonus amount,
	double monthlyBonus;
	//the required number of training hours, 
	int trainingNeeded;
	//and the number of training hours that the team leader has attended.
	int trainingAttended;

public:
	//Write one or more constructors and the appropriate accessor 
	double getMonthlyBonus();
	int getTrainingNeeded();
	int getTrainingAttended();

	//and mutator functions for the class.
	void setMonthlyBonus(double newMonthlyBonus);
	void setTrainingNeeded(int newTrainingNeeded);
	void setTrainingAttended(int newTrainingAttended);
};

#endif
