#include <iostream>
#include <assert.h>
#include "ColorMap.h"
#include "gtest/gtest.h"

namespace FeatureTests
{    
    std::string GetColorPairString(int majorColorIndex, int minorColorIndex)
    {
        std::vector<std::string> colorPairs = 
        {
            "0 | White | Blue",
            "1 | White | Orange",
            "2 | White | Green",
            "3 | White | Brown",
            "4 | White | Slate",
            "5 | Red | Blue",
            "6 | Red | Orange",
            "7 | Red | Green",
            "8 | Red | Brown",
            "9 | Red | Slate",
            "10 | Black | Blue",
            "11 | Black | Orange",
            "12 | Black | Green",
            "13 | Black | Brown",
            "14 | Black | Slate",
            "15 | Yellow | Blue",
            "16 | Yellow | Orange",
            "17 | Yellow | Green",
            "18 | Yellow | Brown",
            "19 | Yellow | Slate",
            "20 | Violet | Blue",
            "21 | Violet | Orange",
            "22 | Violet | Green",
            "23 | Violet | Brown",
            "24 | Violet | Slate"
        };

        int colorPairIndex = majorColorIndex * 5 + minorColorIndex;
        return colorPairs[colorPairIndex];
    }

    TEST(ColorMapTests, TestPrintColorMap)
    {
        std::cout << "\nPrint color map test\n";
        for(int i = 0; i<5; i++)
        {
            for(int j = 0; j<5; j++)
            {
                std::string resultGenerated = GenerateColorPairString(i, j);
                auto expectedResult = GetColorPairString(i, j);
                EXPECT_EQ(resultGenerated, expectedResult);
            }
        }

        int result = PrintColorMap();
        EXPECT_EQ(result, 25);
        std::cout << "All is well (maybe!)\n";
    }
}