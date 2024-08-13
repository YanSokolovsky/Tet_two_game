#include "text_color.h"

text_color_param::text_color_param() : min_value{ 10 }, max_value{ 90 }
{
	value = 18;
	selector = 0;
};

void text_color_param::download_data(setup set)
{
	std::string h = "data/setup/text_color/color";
	std::string txt = ".txt";
	std::string name;
	std::string ani;
	name = h + txt;
	ani = read_from_file(name);
	animations.push_back(ani);
	value = set.height;
};

void text_color_param::draw_animation()
{
	fast_console_write(animations[selector % 1]);
};

void text_color_param::change_minus()
{
	value--;
};

void text_color_param::change_plus()
{
	value++;
};

void text_color_param::upload_data(setup* set)
{
	set->text_color = value;
};