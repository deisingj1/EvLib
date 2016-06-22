
#include "Game.h"
#include <string>
#include <iostream>
#include <map>

namespace EvLib {
	Game::Game(std::string gid) {
		id = gid;
	}
	void Game::setInfo(std::map< Info, std::string > info) {

	}
	std::string Game::getInfo(Info info) {
		switch (info) {
		case Info::visteam:
			return visteam;
		case Info::hometeam:
			return hometeam;
		case Info::site:
			return site;
		case Info::date:
			return date;
		case Info::number:
			return number;
		case Info::starttime:
			return starttime;
		case Info::daynight:
			return daynight;
		case Info::usedh:
			return usedh;
		case Info::umphome:
			return umphome;
		case Info::ump1b:
			return ump1b;
		case Info::ump2b:
			return ump2b;
		case Info::ump3b:
			return ump3b;
		case Info::howscored:
			return howscored;
		case Info::pitches:
			return pitches;
		case Info::temp:
			return temp;
		case Info::winddir:
			return winddir;
		case Info::windspeed:
			return windspeed;
		case Info::fieldcond:
			return fieldcond;
		case Info::precip:
			return precip;
		case Info::sky:
			return sky;
		case Info::timeofgame:
			return timeofgame;
		case Info::attendance:
			return attendance;
		case Info::wp:
			return wp;
		case Info::lp:
			return lp;
		case Info::save:
			return save;

		default:
			return NULL;
		}
	}
}