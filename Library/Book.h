#pragma once
#include <iostream>
#include <string>
#include <vector>

class Book
{
private:
	std::string book_title;
	std::string author_name;
	unsigned short int year;
	std::vector <Book> list {};
public:
	Book();
	void ViewBook();
	void AddBook();
	void DeleteBook();
	~Book();
};

