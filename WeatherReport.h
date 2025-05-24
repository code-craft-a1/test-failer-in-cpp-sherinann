#include <iostream>

namespace WeatherSpace
{
    class IWeatherSensor
    {
    public:
        virtual double TemperatureInC() const = 0;
        virtual int Precipitation() const = 0;
        virtual int Humidity() const = 0;
        virtual int WindSpeedKMPH() const = 0;
    };

    /// <summary>
    /// This is a stub for a weather sensor. For the sake of testing
    /// we create a stub that generates weather data and allows us to
    /// test the other parts of this application in isolation
    /// without needing the actual Sensor during development
    /// </summary>
    class SensorStub : public IWeatherSensor
    {
        int Humidity() const override
        {
            return 72;
        }

        int Precipitation() const override
        {
            return 70;
        }

        double TemperatureInC() const override
        {
            return 26;
        }

        int WindSpeedKMPH() const override
        {
            return 52;
        }
    };

    class HighPrecipitationSensorStub: public IWeatherSensor
    {
        int Humidity() const override
        {
            return 72;
        }

        int Precipitation() const override
        {
            return 70;
        }

        double TemperatureInC() const override
        {
            return 26;
        }


        int WindSpeedKMPH() const override
        
        {
            return 48;
        }
    };


    std::string Report(const IWeatherSensor &sensor);
}
