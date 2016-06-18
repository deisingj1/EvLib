#pragma once
#include <string>
#include <iostream>

using namespace std;

namespace EvLib {
	class Game {

	public:
		string getHomeTeam(void);
		string getAwayTeam(void);
		Game(string ht, string at);

	private:
		string homeTeam;
		string awayTeam;

	};
}
