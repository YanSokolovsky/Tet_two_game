#pragma once

#include "change_param.h"
#include "console_functions.h"

class sounds_param : changeable_parameter
{
	const unsigned int min_value;
	const unsigned int max_value;
	unsigned int value;
public:
	sounds_param();
	void change_plus() override;
	void change_minus() override;
	void draw_animation() override;
	void download_data(setup) override;
	void upload_data(setup*) override;
};