#pragma once

#include "change_param.h"
#include "console_functions.h"

class falling_speed_param : changeable_parameter
{
	const int min_value;
	const int max_value;
	int value;
public:
	falling_speed_param();
	void change_plus() override;
	void change_minus() override;
	void draw_animation() override;
	void download_data(setup) override;
	void upload_data(setup*) override;
};