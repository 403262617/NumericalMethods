#include "common.h"

// 1. f(x) = sqrt(x) - cos(x)
double eq1(double x)
{
    return std::sqrt(x) - std::cos(x);
}
// 1. f'(x) = sin(x) + 1 / (2*sqrt(x))
double df1(double x)
{
    return std::sin(x) + (1.0 / (2.0 * std::sqrt(x)));
}
// 2. f(x) = x^4 - 2(x^3) - 4(x^2) + 4x + 4 = 0
double eq2(double x)
{
    return std::pow(x, 4.0) - 2.0 * std::pow(x, 3.0) - 4.0 * std::pow(x, 2.0) + 4.0 * x + 4.0;
}
// 2. f'(x) = 4(x^3) - 6(x^2) - 8x + 4
double df2(double x)
{
    return 4.0 * std::pow(x, 3.0) - 6.0 * std::pow(x, 2.0) - 8.0 * x + 4.0;
}
// 3. f(x) = sin(x) - e^(-x) = 0
double eq3(double x)
{
    return std::sin(x) - std::exp(-x);
}
// 3. f'(x) = cos(x) + e^(-x)
double df3(double x)
{
    return std::cos(x) + std::exp(-x);
}
// 4. f(x) =
double eq4(double x)
{
    return 0.0;
}
// 4. f'(x) =
double df4(double x)
{
    return 0.0;
}
// 5. f(x) =
double eq5(double x)
{
    return 0.0;
}
// 5. f'(x) =
double df5(double x)
{
    return 0.0;
}
