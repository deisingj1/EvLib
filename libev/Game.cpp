
#include "Game.h"
#include <string>
#include <iostream>

using namespace std;

namespace EvLib {
	Game::Game(string gid) {
		id = gid;
	}
	string Game::getAttrib(int attrib) {
		string value;
		switch (attrib) {
		case VISTEAM:
			cout << "Visiting team" << endl;
			break;
		case HOMETEAM:
			cout << "Home team" << endl;
			break;
		default:
			break;
		}
		return value;
	}
}