#include "stdafx.h"
#include "Rack.h"
#include <iostream>
#include <algorithm>

Rack::Rack()
{
}

void Rack::ViewAllBooks()
{
	if (list.size() > 0) {
		unsigned int i = 1;
		for (auto book : list)
		{

			std::cout << i << std::endl;
			std::cout << book.book_id << std::endl;
			std::cout << book.book_title << std::endl;
			std::cout << book.author_name << std::endl;
			std::cout << book.year << std::endl;
			i++;
		}
	}
	else {
		std::cout << "There is no books in the library" << std::endl;
	}
}

void Rack::AddBook(const Book &book)
{
	list.push_back(book);
	std::cout << "The book added" << std::endl;
}

void Rack::DeleteBook(Book &book)
{
	unsigned int book_id = 0;
	std::cout << "Enter id of the book wich you want to delete" << std::endl;
	std::cin >> book_id;

	book.book_id = book_id;

	if (list.size() > 0)
	{
		for (auto i = std::begin(list); i != std::end(list); )
		{
			if (i->book_id == book_id)
			{
				i = list.erase(i);
				std::cout << "The book was deleted" << std::endl;
			}
			else
			{
				std::cout << "There is no book with specified id" << std::endl;
				i++;
			}
		}
	}
	else
	{
		std::cout << "There is no books in the library" << std::endl;
	}
}


Rack::~Rack()
{
}
