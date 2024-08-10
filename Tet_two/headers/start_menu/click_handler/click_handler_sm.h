#pragma once

#include "action_menu.h"
#include "button_grid.h"
#include "console_functions.h"
#include "params.h"

class click_handler_sm
{
	button_grid b_grid;
public:
	click_handler_sm(button_grid g);
	void make_button_action();
	void check_button_press();
};