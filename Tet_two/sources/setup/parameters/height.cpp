#include "height.h"

height_param::height_param() : min_value{ 10 }, max_value{ 40 }
{
	value = 18;
};

void height_param::download_data(setup set)
{
	std::string h = "data/setup/height/height";
	int number = 1;
	std::string txt = ".txt";
	std::string name;
	std::string ani;
	for (number; number <= 8; number++)
	{
		name = h + std::to_string(number) + txt;
		ani = read_from_file(name);
		animations.push_back(ani);
	}
	value = set.height;
	selector = (value - min_value + 1) / ((max_value - min_value) / 8) % 8;
};

void height_param::draw_animation()
{
	fast_console_write(animations[selector % 8]);
};

void height_param::change_minus()
{
	selector--;
	if(value > min_value)
		value -= (max_value - min_value) / 8;
};

void height_param::change_plus()
{
	selector++;
	if(value < max_value)
		value += (max_value - min_value) / 8;
};

void height_param::upload_data(setup* set)
{
	set->height = value;
};