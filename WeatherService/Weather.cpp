#include "Weather.h"

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds)
{
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}

void Weather::printWeatherDescription() const
{
	std::cout << "Город: " << city << std::endl
		<< "Координаты: " << lat << ", " << lon << std::endl
		<< "Температура: " << temperature << "°C" << std::endl
		<< "Погода: " << weather << std::endl
		<< "Скорость ветра: " << windSpeed << " м/с" << std::endl
		<< "Облачность: " << clouds << "%" << std::endl;
}
