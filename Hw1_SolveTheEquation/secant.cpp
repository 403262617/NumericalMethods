#include <iostream>
#include "common.h"
// Secant Method
void secant(int eq, double a, double b)
{
    double l = a; // n - 1
    double r = b; // n
    double c;     // n + 1
    int do_rounds = 0;
    switch (eq)
    {
    case 1:
        if (eq1(a) * eq1(b) > 0.0)
        {
            std::cout << "No solution is in [" << a << ", " << b << "]" << std::endl;
            return;
        }
        if (eq1(a) * eq1(b) == 0.0)
        {
            std::cout << "The solution is " << a << std::endl;
            return;
        }
        do
        {
            if (do_rounds)
            {
                l = r;
                r = c;
            }
            c = r - (eq1(r) * (r - l)) / (eq1(r) - eq1(l));
            ++do_rounds;
        } while (!(std::fabs(c - r) < EPS));
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq1(c) << " and did " << do_rounds << " rounds. (Secant)" << std::endl;
        break;
    case 2:
        if (eq2(a) * eq2(b) > 0.0)
        {
            std::cout << "No solution is in [" << a << ", " << b << "]" << std::endl;
            return;
        }
        if (eq2(a) * eq2(b) == 0.0)
        {
            std::cout << "The solution is " << a << std::endl;
            return;
        }
        do
        {
            if (do_rounds)
            {
                l = r;
                r = c;
            }
            c = r - (eq2(r) * (r - l)) / (eq2(r) - eq2(l));
            ++do_rounds;
        } while (!(std::fabs(c - r) < EPS));
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq2(c) << " and did " << do_rounds << " rounds. (Secant)" << std::endl;
        break;
    case 3:
        if (eq3(a) * eq3(b) > 0.0)
        {
            std::cout << "No solution is in [" << a << ", " << b << "]" << std::endl;
            return;
        }
        if (eq3(a) * eq3(b) == 0.0)
        {
            std::cout << "The solution is " << a << std::endl;
            return;
        }
        do
        {
            if (do_rounds)
            {
                l = r;
                r = c;
            }
            c = r - (eq3(r) * (r - l)) / (eq3(r) - eq3(l));
            ++do_rounds;
        } while (!(std::fabs(c - r) < EPS));
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq3(c) << " and did " << do_rounds << " rounds. (Secant)" << std::endl;
        break;
    case 4:
        if (eq4(a) * eq4(b) > 0.0)
        {
            std::cout << "No solution is in [" << a << ", " << b << "]" << std::endl;
            return;
        }
        if (eq4(a) * eq4(b) == 0.0)
        {
            std::cout << "The solution is " << a << std::endl;
            return;
        }
        do
        {
            if (do_rounds)
            {
                l = r;
                r = c;
            }
            c = r - (eq4(r) * (r - l)) / (eq4(r) - eq4(l));
            ++do_rounds;
        } while (!(std::fabs(c - r) < EPS));
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq4(c) << " and did " << do_rounds << " rounds. (Secant)" << std::endl;
        break;
    case 5:
        if (eq5(a) * eq5(b) > 0.0)
        {
            std::cout << "No solution is in [" << a << ", " << b << "]" << std::endl;
            return;
        }
        if (eq5(a) * eq5(b) == 0.0)
        {
            std::cout << "The solution is " << a << std::endl;
            return;
        }
        do
        {
            if (do_rounds)
            {
                l = r;
                r = c;
            }
            c = r - (eq5(r) * (r - l)) / (eq5(r) - eq5(l));
            ++do_rounds;
        } while (!(std::fabs(c - r) < EPS));
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq5(c) << " and did " << do_rounds << " rounds. (Secant)" << std::endl;
        break;
    default:
        break;
    }
}