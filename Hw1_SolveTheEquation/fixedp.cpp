#include <iostream>
#include "common.h"
// Method of Fixed Point
void fixedp(int eq, double x)
{
    double x_ori = x;
    double x_old;
    int do_rounds = 0;
    switch (eq)
    {
    case 1:
        if (eq1(x) == 0.0)
        {
            std::cout << "The solution is " << x << std::endl;
            return;
        }
        do
        {
            x_old = x;
            x = gx1(x);
            ++do_rounds;
        } while (std::fabs(x_old - x) >= EPS && do_rounds < ROUND_MAX);
        std::cout << "Sol: " << x << " in [" << x_ori << "], f(x) = " << eq1(x) << " and did " << do_rounds << " rounds. (Fixed-Point)" << std::endl;
        break;
    case 2:
        if (eq2(x) == 0.0)
        {
            std::cout << "The solution is " << x << std::endl;
            return;
        }
        do
        {
            x_old = x;
            x = gx2(x);
            ++do_rounds;
        } while (std::fabs(x_old - x) >= EPS && do_rounds < ROUND_MAX);
        std::cout << "Sol: " << x << " in [" << x_ori << "], f(x) = " << eq2(x) << " and did " << do_rounds << " rounds. (Fixed-Point)" << std::endl;
        break;
    case 3:
        if (eq3(x) == 0.0)
        {
            std::cout << "The solution is " << x << std::endl;
            return;
        }
        do
        {
            x_old = x;
            x = gx3(x);
            ++do_rounds;
        } while (std::fabs(x_old - x) >= EPS && do_rounds < ROUND_MAX);
        std::cout << "Sol: " << x << " in [" << x_ori << "], f(x) = " << eq3(x) << " and did " << do_rounds << " rounds. (Fixed-Point)" << std::endl;
        break;
    case 4:
        if (eq4(x) == 0.0)
        {
            std::cout << "The solution is " << x << std::endl;
            return;
        }
        do
        {
            x_old = x;
            x = gx4(x);
            ++do_rounds;
        } while (std::fabs(x_old - x) >= EPS && do_rounds < ROUND_MAX);
        std::cout << "Sol: " << x << " in [" << x_ori << "], f(x) = " << eq4(x) << " and did " << do_rounds << " rounds. (Fixed-Point)" << std::endl;
        break;
    case 5:
        if (eq5(x) == 0.0)
        {
            std::cout << "The solution is " << x << std::endl;
            return;
        }
        do
        {
            x_old = x;
            x = gx5(x);
            ++do_rounds;
        } while (std::fabs(x_old - x) >= EPS && do_rounds < ROUND_MAX);
        std::cout << "Sol: " << x << " in [" << x_ori << "], f(x) = " << eq5(x) << " and did " << do_rounds << " rounds. (Fixed-Point)" << std::endl;
        break;
    default:
        break;
    }
}
