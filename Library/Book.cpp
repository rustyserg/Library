#include "stdafx.h"
#include "Book.h"


Book::Book()
{
}

void Book::ViewBook()
{
	if (list.size() > 0) {
		for (int i = 0; i < list.size(); i++)
		{
			std::cout << i+1 << ". " << list[i].book_title << std::endl;
			std::cout << "   " << list[i].author_name << std::endl;
			std::cout << "   " << list[i].year << std::endl;
		}
	}
	else {
		std::cout << "There is no books in the library" << std::endl;
	}	
}

void Book::AddBook()
{
	std::cout << "Enter the title of the book" << std::endl;
	std::cin >> book_title;
	std::cout << "Enter the author name of the book" << std::endl;
	std::cin >> author_name;
	std::cout << "Enter the year of the book" << std::endl;
	std::cin >> year;

	Book book;
	book.book_title = book_title;
	book.author_name = author_name;
	book.year = year;
	list.push_back(book);
	std::cout << "The book added" << std::endl;
}

void Book::DeleteBook()
{
}


Book::~Book()
{
}
