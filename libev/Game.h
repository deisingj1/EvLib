#pragma once
#include <string>

using namespace std;

namespace EvLib {
	class Game {

	public:
		static const int VISTEAM = 1;
		static const int HOMETEAM = 2;
		Game(string gid);
		string getAttrib(int attrib);

	private:
		string id;

	};
}
