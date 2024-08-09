
#include "start_menu_ani.h"

void start_menu_ani::download_data()
{
	start_menu1_DEFAULTE = read_from_file("data/start_menu(template).txt");
	start_menu1_START = read_from_file("data/start_menu(start).txt");
	start_menu1_SETUP = read_from_file("data/start_menu(setup).txt");
	start_menu1_SCORE = read_from_file("data/start_menu(score).txt");
	start_menu1_RIGHT = read_from_file("data/start_menu(right).txt");
}