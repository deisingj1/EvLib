#include "EvLib.h"

using namespace std;

namespace EvLib {
	Game::Game(string ht, string at) {
		homeTeam = ht;
		awayTeam = at;
		cout << "Created game" << endl;
	}
	string Game::getHomeTeam(void) {
		return homeTeam;
	}
	string Game::getAwayTeam(void) {
		return awayTeam;
	} 
}