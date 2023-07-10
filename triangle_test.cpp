#include "triangle.h"
#include <gtest/gtest.h>
namespace {
    TEST(TriangleTest, InvalidSlides) { 
        EXPECT_EQ(-1, TypeOfTriangle(-10, 20, 30));
        EXPECT_EQ(-1, TypeOfTriangle(-10, -20, 30));
        EXPECT_EQ(-1, TypeOfTriangle(3, 4, -8));

    }
    TEST(TriangleTest, NorFormation) { 
        EXPECT_EQ(0, TypeOfTriangle(10, 20, 30));
        EXPECT_EQ(0, TypeOfTriangle(3, 4, 8));

    }
    TEST(TriangleTest, Equivalateral) { 
        EXPECT_EQ(1, TypeOfTriangle(10, 10, 10));
        EXPECT_EQ(1, TypeOfTriangle(5, 5, 5));

    }
    TEST(TriangleTest, Scalan) { 
        EXPECT_EQ(3, TypeOfTriangle(3, 4, 5));
        EXPECT_EQ(3, TypeOfTriangle(10, 12, 15));
        EXPECT_EQ(3, TypeOfTriangle(10, 25, 18));

    }
    
}
