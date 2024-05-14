#include <iostream>
#include "JsonService.h"
#include "Service.h"
#include "Weather.h"


int main()
{

    try {
        setlocale(LC_ALL, "ru");
        JsonService js;
        Weather w = js.getWeather("weather.json");
        w.PrintWeatherInfo();
    }
    catch (exception& ex) {
        cout << ex.what() << endl;
    }
}