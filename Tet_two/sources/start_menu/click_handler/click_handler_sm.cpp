#include "click_handler_sm.h"

click_handler_sm::click_handler_sm(button_grid g)
{
	this->b_grid = g;
};

void click_handler_sm::make_button_action()
{
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		--b_grid.x_coordinate;
		b_grid.grid[b_grid.x_coordinate % 3][b_grid.y_coordinate % 2].draw_select_animation();
		move_cursore_topleft();
		for (int i = 0; i < 30 && GetAsyncKeyState(VK_UP) & 0x8000; i++)
		{
			Sleep(5);
		}
		while (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			--b_grid.x_coordinate;
			b_grid.grid[b_grid.x_coordinate % 3][b_grid.y_coordinate % 2].draw_select_animation();
			move_cursore_topleft();
			Sleep(90);
		}
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		++b_grid.x_coordinate;
		b_grid.grid[b_grid.x_coordinate % 3][b_grid.y_coordinate % 2].draw_select_animation();
		move_cursore_topleft();
		for (int i = 0; i < 30 && GetAsyncKeyState(VK_DOWN) & 0x8000; i++)
		{
			Sleep(5);
		}
		while (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			++b_grid.x_coordinate;
			b_grid.grid[b_grid.x_coordinate % 3][b_grid.y_coordinate % 2].draw_select_animation();
			move_cursore_topleft();
			Sleep(90);
		}
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		++b_grid.y_coordinate;
		b_grid.grid[b_grid.x_coordinate % 3][b_grid.y_coordinate % 2].draw_select_animation();
		move_cursore_topleft();
		for (int i = 0; i < 30 && GetAsyncKeyState(VK_RIGHT) & 0x8000; i++)
		{
			Sleep(5);
		}
		while (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			++b_grid.y_coordinate;
			b_grid.grid[b_grid.x_coordinate % 3][b_grid.y_coordinate % 2].draw_select_animation();
			move_cursore_topleft();
			Sleep(90);
		}
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		--b_grid.y_coordinate;
		b_grid.grid[b_grid.x_coordinate % 3][b_grid.y_coordinate % 2].draw_select_animation();
		move_cursore_topleft();
		for (int i = 0; i < 30 && GetAsyncKeyState(VK_LEFT) & 0x8000; i++)
		{
			Sleep(5);
		}
		while (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			--b_grid.y_coordinate;
			b_grid.grid[b_grid.x_coordinate % 3][b_grid.y_coordinate % 2].draw_select_animation();
			move_cursore_topleft();
			Sleep(90);
		}
	}
};

void click_handler_sm::check_button_press()
{
	fast_console_write(read_from_file("data/start_menu(template).txt"));
	while (true)
	{
		make_button_action();
	}
};