#pragma once
#include <string>
#include <map>

namespace EvLib {
	class Game {

	public:
		enum class Info {
			visteam, hometeam, site,
			date, number, starttime,
			daynight, usedh, umphome,
			ump1b, ump2b, ump3b,
			howscored, pitches, temp,
			winddir, windspeed, fieldcond,
			precip, sky, timeofgame,
			attendance, wp, lp,
			save
		};
		Game(std::string gid);
		Game(std::string gid, std::map < Info, std::string> gInfo);
		std::string getInfo(Info info);
		std::map<Info, std::string> getInfo(void);
		void setInfo(std::map< Info, std::string > info);

	private:
		std::string id;
		std::map < Info, std::string> info;
	};
}
