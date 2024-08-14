#pragma once
#include <fstream>
struct setup
{
	unsigned int height;
	unsigned int width;
	int falling_speed;
	int game_mode;
	unsigned int sounds;
	unsigned int music;
	unsigned int text_color;
	unsigned int backgraund_color;
	bool start_video;
	bool end_video;
	int random_events;
	std::ofstream operator<<(setup);
	std::ifstream operator>>(setup);
};