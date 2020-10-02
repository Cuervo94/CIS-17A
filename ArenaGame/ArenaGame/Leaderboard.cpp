#include "pch.h"
#include "Leaderboard.h"

std::vector<std::string> LeaderBoard::printLeaderboard(Player &player){

	names.push_back(player.getName());
	names.push_back("Champion of Arena");
	names.push_back("Soldier");
	names.push_back("Deserted Archer");
	names.push_back("Hound");
	names.push_back("Deserted Warrior");
	names.push_back("Slave");

	return names;
}
//
//void LeaderBoard::strikeThrought(int index) {
//	names.at(index) = "\e[9mstrikethrough\e[0m";
//}
