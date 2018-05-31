#pragma once
#include "Menu.h"
#include "Book.h"
#include "Rack.h"

class Application
{
public:
	Application();
	static void Run();
	static bool Exit();
	~Application();
};

