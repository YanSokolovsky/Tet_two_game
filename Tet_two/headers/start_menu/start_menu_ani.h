#pragma once

#include <string>
#include "console_functions.h"

// Struct for collecting animations files
struct start_menu_ani
{
	std::string start_menu_DEFAULTE;
	std::string start_menu_START;
	std::string start_menu_SETUP;
	std::string start_menu_SCORE;
	std::string start_menu1_RIGHT;
	std::string start_menu_INFO;
	std::string start_menu_HELP;
	std::string start_menu_EXIT;
	std::string start_menu2_RIGHT;
	std::string start_menu1_LEFT;
	std::string start_menu2_LEFT;

	void download_data();
};