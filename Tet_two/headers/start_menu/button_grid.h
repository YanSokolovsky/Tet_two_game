#pragma once

#include <vector>

#include "button.h"
#include "start_menu_ani.h"

struct button_grid
{
	unsigned int x_coordinate;
	unsigned int y_coordinate;

	std::vector<std::vector<button>> grid;
	button_grid();
	button_grid(button_grid&);
	button_grid(start_menu_ani);
};