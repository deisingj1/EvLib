#pragma once
#include <string>

namespace EvLib {
	class Player {
	public:
		Player(std::string p_id, std::string p_name);
		std::string getName();
		std::string getId();
	private:
		std::string name;
		std::string id;
	};
}