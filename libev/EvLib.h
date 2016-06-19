#pragma once

#include "Game.h"

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
