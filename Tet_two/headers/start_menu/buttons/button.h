#pragma once

#include <string>

#include "console_functions.h"
#include "action_menu.h"

class button
{
	std::string select_animation;
public:
	click_action* action;
	button(std::string);
	void draw_select_animation() const;
};