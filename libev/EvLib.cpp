#include "EvLib.h"
#include <string>
#include <iostream>

using namespace std;

namespace EvLib {

	Team::Team(string tName) {
		name = tName;
	}
	string Team::getName(void) {
		return name;
	}
}