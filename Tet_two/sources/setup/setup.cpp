#include "setup.h"

std::ofstream setup::operator<<(setup)
{
	std::ofstream out;
	out.open("data/setup/setup.txt");
	if (!out)
		return out;
	out << height << std::endl
		<< width << std::endl
		<< falling_speed << std::endl
		<< game_mode << std::endl
		<< sounds << std::endl
		<< music << std::endl
		<< text_color << std::endl
		<< backgraund_color << std::endl
		<< start_video << std::endl
		<< end_video << std::endl
		<< random_events;
	out.close();
	return out;
};
std::ifstream setup::operator>>(setup)
{
	std::ifstream in;
	in.open("data/setup/setup.txt");
	if (!in)
		return in;
	in >> height
	   >> width
	   >> falling_speed
	   >> game_mode
	   >> sounds
	   >> music
	   >> text_color
	   >> backgraund_color
	   >> start_video
	   >> end_video
	   >> random_events;
	in.close();
	return in;
};