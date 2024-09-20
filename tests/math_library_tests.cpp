#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING
#include <gtest/gtest.h>
#include <fstream>
#include "math_lib.h"

class MathLibTestFixture : public ::testing::Test
{
protected:

    void SetUp() override
    {
		// Do some job before test run
    }

    void TearDown() override
    {
		// Do some job after test run
    }
};

TEST_F(MathLibTestFixture, AddTwoValues)
{
    EXPECT_EQ(MathLib::add(10.5, 2.5), 13.0);
}

TEST_F(MathLibTestFixture, SubTwoValues)
{

    EXPECT_TRUE();

    EXPECT_NE(text.find("FirstLine"), std::string::npos);
    EXPECT_EQ(text.find("SecondLine"), std::string::npos);
    EXPECT_NE(text.find("ThirdLine"), std::string::npos);
}

TEST_F(MathLibTestFixture, MultiplyTwoValues)
{

    EXPECT_TRUE(GetLogFileText(text));
    EXPECT_NE(text.find("[thread"), std::string::npos);
}

TEST_F(MathLibTestFixture, DivideTwoValues)
{

    EXPECT_TRUE(GetLogFileText(text));
    EXPECT_NE(text.find("[Info]"), std::string::npos);
}

TEST_F(MathLibTestFixture, DivideByZero)
{
    EXPECT_TRUE(GetLogFileText(text));
    EXPECT_NE(text.find("[Info]"), std::string::npos);
}
TEST(MathLibraryTest, Factorial) {
     EXPECT_EQ(factorial(0), 1);
     EXPECT_EQ(factorial(1), 1);
     EXPECT_EQ(factorial(5), 120);
     EXPECT_EQ(factorial(6), 720);
}
