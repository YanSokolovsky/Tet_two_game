#include "console_functions.h"

void invisible_cursor()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}

void clear_console() {
	char fill = ' ';
	COORD topLeft = { 0,0 };
	CONSOLE_SCREEN_BUFFER_INFO s;
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(console, &s);
	DWORD written, cells = s.dwSize.X * s.dwSize.Y;
	FillConsoleOutputCharacter(console, fill, cells, topLeft, &written);
	FillConsoleOutputAttribute(console, s.wAttributes, cells, topLeft, &written);
	SetConsoleCursorPosition(console, topLeft);
}

void move_cursore_topleft()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD topLeft = { 0,0 };
	SetConsoleCursorPosition(console, topLeft);
}

void set_colors(int background, int textColor)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, background | textColor);
}

void set_console_size_by_chars(int rows, int columns)
{
	std::string strBeforParam1 = "mode con cols=";
	std::string param1 = std::to_string(columns);
	std::string strBeforParam2 = " lines=";
	std::string param2 = std::to_string(rows);
	system((strBeforParam1 + param1 + strBeforParam2 + param2).c_str());
}

int get_pixel_console_width()
{
	HWND consoleWindow = GetConsoleWindow();
	RECT rect;
	GetWindowRect(consoleWindow, &rect);
	return rect.right - rect.left;
}

int get_pixel_console_height()
{
	HWND consoleWindow = GetConsoleWindow();
	RECT rect;
	GetWindowRect(consoleWindow, &rect);
	return rect.bottom - rect.top;
}

int get_pixel_screen_width()
{
	return GetSystemMetrics(SM_CXSCREEN);
}

int get_pixel_screen_height()
{
	return GetSystemMetrics(SM_CYSCREEN);
}

void centralize_console()
{
	HWND consoleWindow = GetConsoleWindow();
	int newX = (get_pixel_screen_width() - get_pixel_console_width()) / 2;
	int newY = (get_pixel_screen_height() - get_pixel_console_height()) / 2;
	MoveWindow(consoleWindow, newX, newY, get_pixel_console_width(), get_pixel_console_height(), TRUE);
	return;
}

std::string read_from_file(std::string filename)
{
	std::string line = "";
	std::string resline = "";
	std::ifstream in(filename);
	if (in.is_open()) {
		while (std::getline(in, line)) {
			resline += line + "\n";
		}
	}
	in.close();
	return resline;
}

std::string read_from_fileW(std::string filename) {
	std::ifstream in;
	in.open(filename, std::ifstream::in);
	if (!in)
	{
		std::cout << "fdf";
	}
	std::string line,resline;
	while (std::getline(in, line)) {
		resline += line + "\n";
	}
	in.close();
	return resline;
}

void clear_IObuffer()     // recomedation: clear console after using this function
{
	std::cin.clear();
	std::cin.ignore(1000, '\n');
	return;
}

void console_write(std::string data)
{
	SetConsoleOutputCP(CP_UTF8);
	std::cout << data;
}

void fast_console_write(std::string data)
{
	SetConsoleOutputCP(CP_UTF8);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hConsole == INVALID_HANDLE_VALUE) {
		std::cerr << "ERROR! Invalid console handle." << std::endl;
		return;
	}

	// Вывод строки в консоль
	DWORD written;
	if (!WriteConsoleA(hConsole, data.c_str(), data.size(), &written, NULL)) {
		std::cerr << "Error! fast_console_write error." << std::endl;
		return;
	}
}