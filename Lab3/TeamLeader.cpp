#include "pch.h"
#include "TeamLeader.h"

double TeamLeader::getMonthlyBonus() { 
	return this->monthlyBonus; 
}
int TeamLeader::getTrainingNeeded() {
	return this->trainingNeeded; 
}
int TeamLeader::getTrainingAttended() {
	return this->trainingAttended; 
}

void TeamLeader::setMonthlyBonus(double newMonthlyBonus) {
	this->monthlyBonus = newMonthlyBonus; 
}
void TeamLeader::setTrainingNeeded(int newTrainingNeeded) {
	this->trainingNeeded = newTrainingNeeded; 
}
void TeamLeader::setTrainingAttended(int newTrainingAttended) {
	this->trainingAttended = newTrainingAttended; 
}
