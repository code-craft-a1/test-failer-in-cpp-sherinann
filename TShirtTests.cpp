#include <iostream>
#include <assert.h>
#include "TShirts.h"
#include "gtest/gtest.h"

namespace FeatureTests
{
    TEST(TshirtTests, TestTshirtSize)
    {
        std::cout << "\nTshirt size test\n";
        EXPECT_EQ(GetTShirtSize(37) , 'S');
        EXPECT_EQ(GetTShirtSize(38) , 'S'); // size 38 is not covered in the original code, but it should be 'S'
        EXPECT_EQ(GetTShirtSize(40) , 'M');
        EXPECT_EQ(GetTShirtSize(43) , 'L');
        EXPECT_EQ(GetTShirtSize(42) , 'M'); // size 42 is not covered in the original code, but it should be 'M'
        EXPECT_EQ(GetTShirtSize(0) , 'S'); // Assuming everything below 38 is 'S'
        std::cout << "All is well (maybe!)\n";
    }
}

