#include <string>
#include <iostream>
#include <assert.h>
#include "WeatherReport.h"

namespace WeatherSpace
{
    std::string Report(const IWeatherSensor &sensor)
    {
        int precipitation = sensor.Precipitation();
        // precipitation < 20 is a sunny day
        std::string report = "Sunny Day";

        if (sensor.TemperatureInC() > 25)
        {
            if (precipitation >= 20 && precipitation < 60)
                report = "Partly Cloudy";
            else if (sensor.WindSpeedKMPH() > 50)
                report = "Alert, Stormy with heavy rain";
        }
        return report;
    }
}