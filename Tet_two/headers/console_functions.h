#pragma once

#include <string>
#include <windows.h>
#include <fstream>
#include <iostream>
#include <boost/locale.hpp>
#include <locale>
#include <codecvt>
#include <stdexcept>

void invisible_cursor();
void clear_console();
void move_cursore_topleft();
void set_colors(int, int);
void set_console_size_by_chars(int, int);
int get_pixel_console_width();
int get_pixel_console_height();
int get_pixel_screen_width();
int get_pixel_screen_height();
void centralize_console();
std::string read_from_file(std::string);
void clear_IObuffer();
void console_write(std::string);
void fast_console_write(std::string);
std::string read_from_fileW(std::string);