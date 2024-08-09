#pragma once

#include <string>
#include <windows.h>
#include <fstream>
#include <iostream>
#include <boost/locale.hpp>
#include <locale>
#include <codecvt>
#include <stdexcept>

// Carriage functions.
void invisible_cursor();
void move_cursore_topleft();

// Function to completely clear the buffer.
void clear_console();

// Àunction for changing background and text color.
// Parameters: background, text.
void set_colors(int, int);

// Functions for console dimensions.
void set_console_size_by_chars(int, int);
int get_pixel_console_width();
int get_pixel_console_height();
int get_pixel_screen_width();
int get_pixel_screen_height();

// Function to center the console.
// Recommendation:
// it is better to use it after "set_console_size_by_chars" function.
void centralize_console();

// Function for clearing input-output buffer.
// Recomendation_1: 
// DO NOT USE IT without full anderstanding of behavior.
// Recomedation_2: clear console after using this function if 
void clear_IObuffer();

// Console output functions.
void console_write(std::string);       // Slow function for UTF-8
void console_writeW(std::wstring);     // Slow Function for UTF-16
void fast_console_write(std::string);  // Fust fanction for UTF-8

// File reading functions.
std::string read_from_file(std::string); // Reader for UTF-8 files