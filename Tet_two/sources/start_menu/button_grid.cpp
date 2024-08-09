#include "button_grid.h"

button_grid::button_grid()
{
	this->x_coordinate = 6000000;
	this->y_coordinate = 6000000;
};
button_grid::button_grid(button_grid& grid)
{
	this->x_coordinate = grid.x_coordinate;
	this->y_coordinate = grid.y_coordinate;
	this->grid = grid.grid;
};
button_grid::button_grid(start_menu_ani animations)
{
	std::vector<button> row1;
	std::vector<button> row2;
	std::vector<button> row3;

	button start(animations.start_menu_START);
	button setup(animations.start_menu_SETUP);
	button score(animations.start_menu_SCORE);
	button right1(animations.start_menu1_RIGHT);
	button left1(animations.start_menu1_LEFT);
	button left2(animations.start_menu2_LEFT);
	button info(animations.start_menu_INFO);
	button right2(animations.start_menu2_RIGHT);
	button help(animations.start_menu_HELP);
	button exit(animations.start_menu_EXIT);

	row1.push_back(start);
	row1.push_back(right1);
	row1.push_back(left2);
	row1.push_back(info);
	row1.push_back(right2);
	row1.push_back(left1);

	row2.push_back(setup);
	row2.push_back(right1);
	row2.push_back(left2);
	row2.push_back(help);
	row2.push_back(right2);
	row2.push_back(left1);

	row3.push_back(score);
	row3.push_back(right1);
	row3.push_back(left2);
	row3.push_back(exit);
	row3.push_back(right2);
	row3.push_back(left1);

	grid.push_back(row1);
	grid.push_back(row2);
	grid.push_back(row3);
}