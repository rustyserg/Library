#include "stdafx.h"
#include "Application.h"
#include <iostream>

Application::Application()
{
}

void Application::Run()
{
	Menu menu;
	Book book;

	unsigned short int choise;

	while (true)
	{
		menu.Introduction();
		std::cin >> choise;

		switch (choise)
		{
			case 1:
			{
				book.ViewBook();
				break;
			}
			case 2:
			{
				book.AddBook();
				break;
			}
			case 3:
			{
				book.DeleteBook();
				break;
			}
			case 4:
			{
				menu.Exit();
				break;
			}
		}
	}
}


Application::~Application()
{
}
