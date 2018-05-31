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
	Rack rack;

	unsigned short int choise;

	while (true)
	{
		menu.Introduction();
		std::cin >> choise;

		switch (choise)
		{
			case 1:
			{
				rack.ViewAllBooks();
				break;
			}
			case 2:
			{
				book.NewBook();
				rack.AddBook(book);
				break;
			}
			case 3:
			{
				rack.DeleteBook(book);
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

bool Application::Exit()
{
	char yes_no;
	std::cout << "Do you really want exit? Y or N" << std::endl;
	std::cin >> yes_no;

	switch (yes_no)
	{
	case 'y': case 'Y':
		exit(0);
	case 'n': case 'N':
		return false;
	}
}

Application::~Application()
{
}
