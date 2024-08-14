#include "falling_speed.h"

falling_speed_param::falling_speed_param() : min_value{ 1 }, max_value{ 8 }
{
	value = 5;
};

void falling_speed_param::download_data(setup set)
{
	std::string h = "data/setup/falling_speed/speed";
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
	value = set.falling_speed;
	selector = value - 1;
};

void falling_speed_param::draw_animation()
{
	fast_console_write(animations[selector % 8]);
};

void falling_speed_param::change_minus()
{
	selector--;
	if (value > min_value)
		value--;
};

void falling_speed_param::change_plus()
{
	selector++;
	if (value < max_value)
		value++;
};

void falling_speed_param::upload_data(setup* set)
{
	set->falling_speed = value;
};