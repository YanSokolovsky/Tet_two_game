#pragma once

#include <vector>

#include "button.h"
#include "start_menu_ani.h"

// À structure that stores a grid (two-dimensional array) of buttons
// and the coordinates (in a two-dimensional array) of the selected button.
struct button_grid
{
	unsigned int x_coordinate;
	unsigned int y_coordinate;

	std::vector<std::vector<button>> grid;
	button_grid();
	button_grid(button_grid&);
	button_grid(start_menu_ani);
};