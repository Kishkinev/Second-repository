#include "Weather.h"

using namespace std;

int main() 
{
    setlocale(0, "RUS");
    Weather weather( "�����", 49.6601, 58.5966, 5.69, "�����", 4.27, 100 );
    weather.printWeatherDescription();
    return 0;
}