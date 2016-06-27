#include "Player.h"

namespace EvLib {
	Player::Player(std::string p_id, std::string p_name) {
		id = p_id;
		name = p_name;
	}
	std::string Player::getName(void) {
		return name;
	}
	std::string Player::getId(void) {
		return id;
	}
}