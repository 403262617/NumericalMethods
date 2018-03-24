#include "common.h"

// 1. f(x) = sqrt(x) - cos(x)
inline double eq1(double x)
{
    return std::sqrt(x) - std::cos(x);
}
// 1. f'(x) = sin(x) + 1 / (2*sqrt(x))
inline double df1(double x)
{
    return std::sin(x) + (1.0 / (2.0 * std::sqrt(x)));
}
// 2. f(x) = x^4 - 2(x^3) - 4(x^2) + 4x + 4 = 0
inline double eq2(double x)
{
    return std::pow(x, 4.0) - 2.0 * std::pow(x, 3.0) - 4.0 * std::pow(x, 2.0) + 4.0 * x + 4.0;
}
// 2. f'(x) = 4(x^3) - 6(x^2) - 8x + 4
inline double df2(double x)
{
    return 4.0 * std::pow(x, 3.0) - 6.0 * std::pow(x, 2.0) - 8.0 * x + 4.0;
}
// 3. f(x) = sin(x) - e^(-x) = 0
inline double eq3(double x)
{
    return std::sin(x) - std::exp(-x);
}
// 3. f'(x) = cos(x) + e^(-x)
inline double df3(double x)
{
    return std::cos(x) + std::exp(-x);
}
// 4. f(x) = x * sin(3x) - e^(-0.1x) * cos(2x) - 5
inline double eq4(double x)
{
    return x * std::sin(x * 3.0) - std::exp(x * -0.1) * std::cos(x * 2.0) - 5.0;
}
// 4. f'(x) = skip
inline double df4(double x)
{
    return std::sin(x * 3.0) + 3.0 * std::cos(x * 3.0) + 2.0 * std::exp(-x / 10.0) * std::sin(x * 2.0) + (std::exp(-x / 10.0) * std::cos(x * 2.0)) / 10.0;
}
// 5. f(x) = ln(6 * x^2 + 5x + 11) - x^2 + 3x - 2
inline double eq5(double x)
{
    return std::log(6.0 * (x * x) + 5.0 * x + 11.0) - std::pow(x, 2.0) + x * 3.0 - 2.0;
}
// 5. f'(x) = (skip)
inline double df5(double x)
{
    return 0.0 + (12.0 * x + 5.0) / (6.0 * x * x + 5 * x + 11.0) - 2 * x + 3.0;
}
// 1. g(x) = cos(x)^2
inline double gx1(double x)
{
    return std::pow(std::cos(x), 2.0);
}
// 2. g(x) = sqrt(x^4 - 2x^3 + 4x + 4) / 2
inline double gx2(double x)
{
    return std::sqrt(std::pow(x, 4.0) - 2.0 * std::pow(x, 3.0) + 4.0 * x + 4.0) / 2.0;
}
// 3. g(x) = - ln(sin(x))
inline double gx3(double x)
{
    return -std::log(std::sin(x));
}
// 4. g(x) = skip
inline double gx4(double x)
{
    return 0.0;
}
// 5. g(x) = sqrt(log(6x^2 + 5x + 11) + 3x - 2)
inline double gx5(double x)
{
    return std::sqrt(std::log(6.0 * x * x + 5.0 * x + 11.0) + 3.0 * x - 2.0);
}
