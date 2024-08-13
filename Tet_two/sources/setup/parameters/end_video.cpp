#include "end_video.h"

end_video_param::end_video_param() : min_value{ 1 }, max_value{ 2 }
{
	value = 1;
};

void end_video_param::download_data(setup set)
{
	std::string h = "data/setup/end_video/video";
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
	value = set.height;
	selector = value / ((max_value - min_value) / 2) % 2;
};

void end_video_paramstart_video_param::draw_animation()
{
	fast_console_write(animations[selector % 2]);
};

void end_video_param::change_minus()
{
	selector--;
	value -= (max_value - min_value) / 2;
};

void end_video_param::change_plus()
{
	selector++;
	value += (max_value - min_value) / 2;
};

void end_video_param::upload_data(setup* set)
{
	set->end_video = value;
};