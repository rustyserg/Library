#include "stdafx.h"
#include "Menu.h"
#include <iostream>
#include <cstdlib>

Menu::Menu()
{
}

void Menu::Introduction()
{
	std::cout << "Library" << std::endl;
	std::cout << "Press 1 to view the books" << std::endl;
	std::cout << "Press 2 to add the book" << std::endl;
	std::cout << "Press 3 to delete the book" << std::endl;
	std::cout << "Press 4 to exit" << std::endl;
}

bool Menu::Exit()
{
	char yes_no;
	std::cout << "Do you really want exit? Y or N" << std::endl;
	std::cin >> yes_no;

	switch (yes_no)
	{
	case 'y': case 'Y':
		exit(0);
	case 'n' : case 'N':
		return false;
	}
}


Menu::~Menu()
{
}
