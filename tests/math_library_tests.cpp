#include <gtest/gtest.h>
#include "math_lib.h"

TEST(MathLibTest, PerevirkaMediany) {
    
    std::vector<double> neparni = {5.0, 1.0, 3.0};
    EXPECT_DOUBLE_EQ(MathLib::obchyslytyMedianu(neparni), 3.0);

    std::vector<double> parni = {4.0, 1.0, 3.0, 2.0};
    EXPECT_DOUBLE_EQ(MathLib::obchyslytyMedianu(parni), 2.5);

    std::vector<double> porozhnii = {};
    EXPECT_THROW(MathLib::obchyslytyMedianu(porozhnii), std::invalid_argument);
}