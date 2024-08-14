#pragma once

#include "change_param.h"
#include "console_functions.h"

class game_mode : changeable_parameter
{
	const int min_value;
	const int max_value;
	int value;
public:
	game_mode();
	void change_plus() override;
	void change_minus() override;
	void draw_animation() override;
	void download_data(setup) override;
	void upload_data(setup*) override;
};