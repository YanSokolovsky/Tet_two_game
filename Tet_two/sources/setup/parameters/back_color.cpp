#include "back_color.h"

back_color_param::back_color_param() : min_value{ 10 }, max_value{ 90 }
{
	value = 18;
};

void back_color_param::download_data(setup set)
{
	std::string h = "data/setup/backgraund_color/color";
	int number = 1;
	std::string txt = ".txt";
	std::string name;
	std::string ani;
	name = h + std::to_string(number) + txt;
	ani = read_from_file(name);
	animations.push_back(ani);
	value = set.backgraund_color;
	selector = 0;
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