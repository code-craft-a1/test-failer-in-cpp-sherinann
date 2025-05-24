#include <iostream>
#include <assert.h>
#include <sstream>
#include "gtest/gtest.h"
#include "ColorMap.h"

std::vector<std::string> GetMajorColors()
{
    return {"White", "Red", "Black", "Yellow", "Violet"};
}

std::vector<std::string> GetMinorColors()
{
    return {"Blue", "Orange", "Green", "Brown", "Slate"};
}

std::string GenerateColorPairString(int majorColorIndex, int minorColorIndex)
{
    if (majorColorIndex < 0 || majorColorIndex > 4 || minorColorIndex < 0 || minorColorIndex > 4)
    {
        return "Invalid color index";
    }
    auto majorColor = GetMajorColors()[majorColorIndex];

    // Passing major color index to fail the test
    auto minorColor = GetMinorColors()[majorColorIndex];

    std::ostringstream oss;
    oss << majorColorIndex * 5 + minorColorIndex << " | " << majorColor << " | " << minorColor;
    std::string result = oss.str();
    return result;
}

int PrintColorMap() 
{
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 5; j++) 
        {
            std::string colorPairString = GenerateColorPairString(i,j);
            std::cout<<colorPairString;
        }
    }
    return i * j;
}
