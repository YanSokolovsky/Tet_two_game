#include "start_video.h"

start_video_param::start_video_param()
{
	value = 1;
};

void start_video_param::download_data(setup set)
{
	std::string h = "data/setup/start_video/video";
	int number = 1;
	std::string txt = ".txt";
	std::string name;
	std::string ani;
	for (number; number <= 2; number++)
	{
		name = h + std::to_string(number) + txt;
		ani = read_from_file(name);
		animations.push_back(ani);
	}
	value = set.game_mode;
	selector = 0;
};

void start_video_param::draw_animation()
{
	fast_console_write(animations[selector % 3]);
};

void start_video_param::change_minus()
{
	selector--;
	value = !value;
};

void start_video_param::change_plus()
{
	selector++;
	value = !value;
};

void start_video_param::upload_data(setup* set)
{
	set->start_video = value;
};