#include "game_mode.h"

game_mode::game_mode() : min_value{ 1 }, max_value{ 3 }
{
	value = 1;
};

void game_mode::download_data(setup set)
{
	std::string h = "data/setup/game_mode/mode";
	int number = 1;
	std::string txt = ".txt";
	std::string name;
	std::string ani;
	for (number; number <= 3; number++)
	{
		name = h + std::to_string(number) + txt;
		ani = read_from_file(name);
		animations.push_back(ani);
	}
	value = set.game_mode;
	selector = (value - 1) % 3;
};

void game_mode::draw_animation()
{
	fast_console_write(animations[selector % 3]);
};

void game_mode::change_minus()
{
	selector--;
	if (value > min_value)
		value -= (max_value - min_value) / 3;
};

void game_mode::change_plus()
{
	selector++;
	if (value < max_value)
		value += (max_value - min_value) / 3;
};

void game_mode::upload_data(setup* set)
{
	set->game_mode = value;
};