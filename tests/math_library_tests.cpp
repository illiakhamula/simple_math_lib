#include <gtest/gtest.h>
#include "math_lib.h"

TEST(MathLibTest, MedianTest) {
    EXPECT_EQ(findMedian({5, 1, 3}), 3.0);
    EXPECT_EQ(findMedian({4, 1, 3, 2}), 2.5);
    EXPECT_EQ(findMedian({7.5}), 7.5);
    EXPECT_THROW(findMedian({}), std::invalid_argument);
}