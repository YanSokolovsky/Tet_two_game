// Tettwo.cpp : Defines the entry point for the application.

#include "Tet_two.h"

int main()
{
	start_menu_ani ani;
	ani.download_data();

	boost::thread t(menu, ani);
	t.join();

	return 0;
}