#pragma once

#include <string>
#include "console_functions.h"

class button
{
	std::string select_animation;
public:
	button(std::string);
	void draw_select_animation() const;
};