#include "sounds.h"

sounds_param::sounds_param() : min_value{ 0 }, max_value{ 100 }
{
	value = 18;
};

void sounds_param::download_data(setup set)
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
	selector = value / ((max_value - min_value) / 8) % 8;
};

void sounds_param::draw_animation()
{
	fast_console_write(animations[selector % 8]);
};

void sounds_param::change_minus()
{
	selector--;
	value -= (max_value - min_value) / 8;
};

void sounds_param::change_plus()
{
	selector++;
	value += (max_value - min_value) / 8;
};

void sounds_param::upload_data(setup* set)
{
	set->sounds = value;
};