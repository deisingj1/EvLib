#pragma once

#include "Game.h"
#include "Player.h"

using namespace std;

namespace EvLib {

	class Team {

	public:
		string getName(void);
		Team(string name);

	private:
		string name;
	};
}
