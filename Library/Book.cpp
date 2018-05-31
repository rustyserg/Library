#include "stdafx.h"
#include "Book.h"
#include <iostream>

Book::Book()
{
}

void Book::NewBook()
{
	std::cout << "Enter id of the book" << std::endl;
	std::cin >> book_id;
	std::cout << "Enter the title of the book" << std::endl;
	std::cin >> book_title;
	std::cout << "Enter the author name of the book" << std::endl;
	std::cin >> author_name;
	std::cout << "Enter the year of the book" << std::endl;
	std::cin >> year;
}

Book::~Book()
{
}
