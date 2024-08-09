#include "menu_thread.h"

void menu(start_menu_ani ani)
{
	set_console_size_by_chars(27, 65);
	centralize_console();
	invisible_cursor();
	button_grid grid(ani);
	click_handler_sm click_handler(grid);
	click_handler.check_button_press();
};