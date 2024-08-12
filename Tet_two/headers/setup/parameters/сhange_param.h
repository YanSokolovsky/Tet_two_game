#pragma once

#include <vector>
#include <string>
#include <setup.h>

class changeable_parameter
{
	unsigned int selector;
	std::vector<std::string> animations;
public:
	void change_plus() = 0;
	void change_minus() = 0;
	void draw_animation() = 0;
};