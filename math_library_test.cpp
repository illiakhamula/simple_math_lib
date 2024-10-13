#include "math_lib.h"
#include <gtest/gtest.h>

namespace MathLibTest {

    TEST(MathLibTests, AddTest) {
        EXPECT_EQ(MathLib::add(2, 3), 5);
        EXPECT_EQ(MathLib::add(-2, 3), 1);
    }

    TEST(MathLibTests, SubtractTest) {
        EXPECT_EQ(MathLib::subtract(5, 3), 2);
        EXPECT_EQ(MathLib::subtract(3, 5), -2);
    }

    TEST(MathLibTests, MultiplyTest) {
        EXPECT_EQ(MathLib::multiply(2, 3), 6);
        EXPECT_EQ(MathLib::multiply(-2, 3), -6);
    }

    TEST(MathLibTests, DivideTest) {
        EXPECT_EQ(MathLib::divide(6, 3), 2);
        EXPECT_THROW(MathLib::divide(6, 0), std::invalid_argument);
    }

    TEST(MathLibTests, IsEqualTest) {
        EXPECT_TRUE(MathLib::isEqual(0.1 + 0.2, 0.3));
        EXPECT_FALSE(MathLib::isEqual(1.0, 2.0));
    }

    TEST(MathLibTests, SqrtTest) {
        EXPECT_EQ(MathLib::sqrt(4), 2);
        EXPECT_THROW(MathLib::sqrt(-1), std::invalid_argument);
    }

    TEST(MathLibTests, IsPrimeTest) {
        EXPECT_TRUE(MathLib::isPrime(5));
        EXPECT_FALSE(MathLib::isPrime(4));
        EXPECT_FALSE(MathLib::isPrime(1));
    }

    TEST(MathLibTests, LCMTest) {
        EXPECT_EQ(MathLib::leastCommonMultiple(4, 6), 12);
        EXPECT_EQ(MathLib::leastCommonMultiple(3, 5), 15);
    }

    TEST(MathLibTests, GCDTest) {
        EXPECT_EQ(MathLib::GCD(12, 15), 3);
        EXPECT_EQ(MathLib::GCD(17, 19), 1);
    }

    TEST(MathLibTests, FibonacciTest) {
        EXPECT_EQ(MathLib::fibonacci(0), 0);
        EXPECT_EQ(MathLib::fibonacci(1), 1);
        EXPECT_EQ(MathLib::fibonacci(5), 5);
        EXPECT_EQ(MathLib::fibonacci(10), 55);
        EXPECT_THROW(MathLib::fibonacci(-1), std::invalid_argument);
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
