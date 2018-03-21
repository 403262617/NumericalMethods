#include <iostream>
#include "common.h"
// Newton's Method
void newton(int eq, double x)
{
    double m;
    double x_new = x;
    double x_ori = x;
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
            x = x_new;
            m = df1(x);
            x_new = x - eq1(x) / m;
            ++do_rounds;
        } while (!(std::fabs(x_new - x) < EPS));
        std::cout << "Sol: " << x_new << " from [" << x_ori << "], f(x) = " << eq1(x_new) << " and did " << do_rounds << " rounds. (Newton)" << std::endl;
        break;
    case 2:
        if (eq2(x) == 0.0)
        {
            std::cout << "The solution is " << x << std::endl;
            return;
        }
        do
        {
            x = x_new;
            m = df2(x);
            x_new = x - eq2(x) / m;
            ++do_rounds;
        } while (!(std::fabs(x_new - x) < EPS));
        std::cout << "Sol: " << x_new << " from [" << x_ori << "], f(x) = " << eq2(x_new) << " and did " << do_rounds << " rounds. (Newton)" << std::endl;
        break;
    case 3:
        if (eq3(x) == 0.0)
        {
            std::cout << "The solution is " << x << std::endl;
            return;
        }
        do
        {
            x = x_new;
            m = df3(x);
            x_new = x - eq3(x) / m;
            ++do_rounds;
        } while (!(std::fabs(x_new - x) < EPS));
        std::cout << "Sol: " << x_new << " from [" << x_ori << "], f(x) = " << eq3(x_new) << " and did " << do_rounds << " rounds. (Newton)" << std::endl;
        break;
    case 4:
        if (eq4(x) == 0.0)
        {
            std::cout << "The solution is " << x << std::endl;
            return;
        }
        do
        {
            x = x_new;
            m = df4(x);
            x_new = x - eq4(x) / m;
            ++do_rounds;
        } while (!(std::fabs(x_new - x) < EPS));
        std::cout << "Sol: " << x_new << " from [" << x_ori << "], f(x) = " << eq4(x_new) << " and did " << do_rounds << " rounds. (Newton)" << std::endl;
        break;
    case 5:
        if (eq5(x) == 0.0)
        {
            std::cout << "The solution is " << x << std::endl;
            return;
        }
        do
        {
            x = x_new;
            m = df5(x);
            x_new = x - eq5(x) / m;
            ++do_rounds;
        } while (!(std::fabs(x_new - x) < EPS));
        std::cout << "Sol: " << x_new << " from [" << x_ori << "], f(x) = " << eq5(x_new) << " and did " << do_rounds << " rounds. (Newton)" << std::endl;
        break;
    default:
        break;
    }
}