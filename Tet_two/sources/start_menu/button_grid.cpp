#include "button_grid.h"

button_grid::button_grid()
{
	this->x_coordinate = 0;
	this->y_coordinate = 0;
};
button_grid::button_grid(button_grid& grid)
{
	this->x_coordinate = grid.x_coordinate;
	this->y_coordinate = grid.y_coordinate;
	this->grid = grid.grid;
};
button_grid::button_grid(start_menu_ani animations)
{
	x_coordinate = 0;
	y_coordinate = 0;

	std::vector<button> row1;
	std::vector<button> row2;
	std::vector<button> row3;

	button but(animations.start_menu1_START);
	row1.push_back(but);
	button but1(animations.start_menu1_RIGHT);
	row1.push_back(but1);

	button but2(animations.start_menu1_SETUP);
	row2.push_back(but2);
	button but3(animations.start_menu1_RIGHT);
	row2.push_back(but3);

	button but4(animations.start_menu1_SCORE);
	row3.push_back(but4);
	button but5(animations.start_menu1_RIGHT);
	row3.push_back(but5);

	grid.push_back(row1);
	grid.push_back(row2);
	grid.push_back(row3);
}