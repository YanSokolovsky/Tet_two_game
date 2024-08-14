#include "back_color.h"

back_color_param::back_color_param() : min_value{ 0 }, max_value{ 100 }
{
	value = 25;
	selector = 0;
};

void back_color_param::download_data(setup set)
{
	std::string h = "data/setup/backgraund_color/color";
	std::string txt = ".txt";
	std::string name;
	std::string ani;
	name = h + txt;
	ani = read_from_file(name);
	animations.push_back(ani);
	value = set.backgraund_color;
};

void back_color_param::draw_animation()
{
	fast_console_write(animations[selector % 1]);
};

void back_color_param::change_minus()
{
	value--;
};

void back_color_param::change_plus()
{
	value++;
};

void back_color_param::upload_data(setup* set)
{
	set->backgraund_color = value;
};