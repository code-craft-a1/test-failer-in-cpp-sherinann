#include <iostream>
#include <assert.h>
#include "gtest/gtest.h"
#include "WeatherReport.h"

namespace FeatureTests
{
    void TestRainy()
    {
        WeatherSpace::SensorStub sensor;
        std::string report = WeatherSpace::Report(sensor);
        std::cout << report << std::endl;
        EXPECT_NE(report.find("rain"), std::string::npos);
    }

    void TestHighPrecipitation()
    {
        WeatherSpace::HighPrecipitationSensorStub sensor;
        // (function returns Sunny day, it should predict rain)
        std::string report = Report(sensor);
        std::cout<<report;
        EXPECT_NE(report.find("rain") , std::string::npos);
    }
    
    TEST(WeatherReportTests, TestWeatherReport)
    {
        std::cout << "\nWeather report test\n";
        TestRainy();
        TestHighPrecipitation();
        std::cout << "All is well (maybe)\n";
    }
}