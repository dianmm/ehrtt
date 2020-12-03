#include"SoccerPlayer.h"
SoccerPlayer::SoccerPlayer() {
	name = "";
	surname = "";
	goals = 0;
	goals_Assists = 0;

}
SoccerPlayer::SoccerPlayer(std::string fName, std::string fSurName, unsigned int fGoals, unsigned int fgoals_Assists) {
	name = "fName";
	surname = "fSurName";
	goals = fGoals;
	goals_Assists = fgoals_Assists;
}
	void SoccerPlayer::setName(std::string fName){ name = "fName"; }
	void SoccerPlayer::setSurName(std::string fSurName){ surname = "fSurName"; }
	void SoccerPlayer::setGoals(unsigned int fGoals){ goals = fGoals; }
	void SoccerPlayer::setAssists(unsigned int fgoals_Assists){ goals_Assists = fgoals_Assists; }


	std::string SoccerPlayer::getName() { return name; };
	std::string SoccerPlayer::getSurName() { return surname; };
	unsigned int SoccerPlayer::getGoals() { return goals; };
	unsigned int SoccerPlayer::getAssists() { return goals_Assists; };

	void SoccerPlayer::print() {
		std::cout << surname << ' ' << name << " goals: " << goals << " assists: " << goals_Assists << std::endl;
	}
	void SoccerPlayer::addGoals(unsigned int fg){
		goals += fg;
	}
	void SoccerPlayer::addAssists(unsigned int fa){
		goals_Assists += fa;
	}