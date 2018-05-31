#pragma once
#include <vector>
#include "Book.h"

class Rack
{
public:
	Rack();
	void ViewAllBooks();
	void AddBook(const Book &book);
	void DeleteBook(Book &book);
	~Rack();
public:
	std::vector <Book> list{};
};

