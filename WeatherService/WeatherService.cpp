#include "Weather.h"
<<<<<<< HEAD
#include "JsonService.h"
=======
#include "XmlService.h"
>>>>>>> feature-xml

using namespace std;

int main() 
{
    /*setlocale(0, "RUS");
    Weather weather( "Киров", 49.6601, 58.5966, 5.69, "дождь", 4.27, 100 );
    weather.printWeatherDescription();
    return 0;*/

<<<<<<< HEAD
    JsonService js;
    Weather w = js.getWeather("weather.json");
=======
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");
>>>>>>> feature-xml

}