#pragma once
#include <fstream>
struct setup
{
	unsigned int height;
	unsigned int width;
	int falling_speed;
	int game_mode;
	int sounds;
	int music;
	int text_color;
	int backgraund_color;
	bool start_video;
	bool end_video;
	int random_events;
	std::ofstream operator<<(setup);
	std::ifstream operator>>(setup);
};