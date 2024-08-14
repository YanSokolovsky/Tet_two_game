#pragma once

#include "change_param.h"
#include "console_functions.h"

class start_video_param : changeable_parameter
{
	bool value;
public:
	start_video_param();
	void change_plus() override;
	void change_minus() override;
	void draw_animation() override;
	void download_data(setup) override;
	void upload_data(setup*) override;
};