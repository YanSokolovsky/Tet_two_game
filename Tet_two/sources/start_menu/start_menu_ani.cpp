#include "start_menu_ani.h"

void start_menu_ani::download_data()
{
	start_menu_DEFAULTE = read_from_file("data/start_menu/start_menu(template).txt");
	start_menu_START = read_from_file("data/start_menu/start_menu(start).txt");
	start_menu_SETUP = read_from_file("data/start_menu/start_menu(setup).txt");
	start_menu_SCORE = read_from_file("data/start_menu/start_menu(score).txt");
	start_menu1_RIGHT = read_from_file("data/start_menu/start_menu(right).txt");
	start_menu1_LEFT = read_from_file("data/start_menu/start_menu(left).txt");
	start_menu_INFO = read_from_file("data/start_menu/start_menu(info).txt");
	start_menu_HELP = read_from_file("data/start_menu/start_menu(help).txt");
	start_menu_EXIT = read_from_file("data/start_menu/start_menu(exit).txt");
	start_menu2_RIGHT = read_from_file("data/start_menu/start_menu(right2).txt");
	start_menu2_LEFT = read_from_file("data/start_menu/start_menu(left2).txt");
}