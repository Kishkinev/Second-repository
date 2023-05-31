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
	std::cout << "�����: " << city << std::endl
		<< "����������: " << lat << ", " << lon << std::endl
		<< "�����������: " << temperature << "�C" << std::endl
		<< "������: " << weather << std::endl
		<< "�������� �����: " << windSpeed << " �/�" << std::endl
		<< "����������: " << clouds << "%" << std::endl;
}
