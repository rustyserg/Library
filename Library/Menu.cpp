#include "stdafx.h"
#include "Menu.h"
#include "Rack.h"
#include "Application.h"
#include <iostream>
#include <cstdlib>

Menu::Menu()
{
}

void Menu::Introduction()
{
	std::cout << "Library" << std::endl;
	std::cout << "Press 1 to view all books in the library" << std::endl;
	std::cout << "Press 2 to add the book" << std::endl;
	std::cout << "Press 3 to delete the book" << std::endl;
	std::cout << "Press 4 to exit" << std::endl;
}

//void Menu::ViewAllBooks()
//{
//	&Rack::ViewAllBooks;
//}
//
//void Menu::AddBook(const Book &book)
//{
//	&Rack::AddBook;
//}
//
//void Menu::DeleteBook(Book &book)
//{
//	&Rack::DeleteBook;
//}


void Menu::Exit()
{
	Application::Exit();
}


Menu::~Menu()
{
}
