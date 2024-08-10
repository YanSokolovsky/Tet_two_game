#include "button.h"

button::button(std::string data_ani)
{
	select_animation = data_ani;
	action = nullptr;
};

void button::draw_select_animation() const
{
	move_cursore_topleft();
	invisible_cursor();
	fast_console_write(select_animation);
};