#pragma once

#include <vector>
#include <string>
#include <setup.h>

class changeable_parameter
{
public:
	unsigned int selector;
	std::vector<std::string> animations;
	virtual void change_plus() = 0;
	virtual void change_minus() = 0;
	virtual void draw_animation() = 0;
	virtual void download_data(setup) = 0;
	virtual void upload_data(setup*) = 0;
};