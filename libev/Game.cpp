
#include "Game.h"
#include <string>
#include <iostream>
#include <map>

namespace EvLib {
	Game::Game(std::string gid) {
		id = gid;
	}
	Game::Game(std::string gid, std::map<Info, std::string> gInfo) {
		id = gid;
		info = std::map<Info, std::string>(gInfo);
	}
	void Game::setInfo(std::map< Info, std::string > ninfo) {
		info = std::map<Info, std::string>(ninfo);
	}
	std::map<Game::Info, std::string> Game::getInfo(void) {
		return std::map<Info, std::string>(info);
	}
	std::string Game::getInfo(Info i) {
		try {
			return info.at(i);
		}
		catch (const std::out_of_range& oor) {
			std::cerr << "Out of Range error: " << oor.what() << '\n';
			return NULL;
		}
	}
}