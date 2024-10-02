#include "gtest/gtest.h"
#include "math_lib.h"

// Тест для функції обчислення квадратного кореня
TEST(MathLibrary, SqrtNewton) {
    EXPECT_NEAR(sqrt_newton(4.0), 2.0, 1e-6);  // Корінь з 4 має бути 2
    EXPECT_NEAR(sqrt_newton(9.0), 3.0, 1e-6);  // Корінь з 9 має бути 3
    EXPECT_NEAR(sqrt_newton(0.0), 0.0, 1e-6);  // Корінь з 0 має бути 0
    EXPECT_NEAR(sqrt_newton(1.0), 1.0, 1e-6);  // Корінь з 1 має бути 1
    EXPECT_NEAR(sqrt_newton(2.0), 1.414213, 1e-6);  // Приблизний корінь з 2
}
