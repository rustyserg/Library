#pragma once
#include <string>
#include <vector>

class Book
{
public:
	Book();
	void NewBook();
	void ToDelete();
	~Book();
public:
	unsigned int book_id;
	std::string book_title;
	std::string author_name;
	unsigned short int year;
};

