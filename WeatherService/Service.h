#pragma once
#include "Weather.h"

class Service
{
private:

public:
	virtual Weather getWeather(std::string s) = 0;
	~Service();
};
