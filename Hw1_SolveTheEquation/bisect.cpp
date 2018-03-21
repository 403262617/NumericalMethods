#include <iostream>
#include "common.h"
// Bisection method
void bisect(int eq, double a, double b)
{
    double c;
    double l = a;
    double r = b;
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
            c = l + (r - l) / 2.0;
            if (eq1(l) * eq1(c) < 0.0)
            {
                r = c;
            }
            else
            {
                l = c;
            }
            ++do_rounds;
        } while (!(std::fabs(l - r) < EPS));
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq1(c) << " and did " << do_rounds << " rounds. (Bisection)" << std::endl;
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
            c = l + (r - l) / 2.0;
            if (eq2(l) * eq2(c) < 0.0)
            {
                r = c;
            }
            else
            {
                l = c;
            }
            ++do_rounds;
        } while (!(std::fabs(l - r) < EPS));
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq2(c) << " and did " << do_rounds << " rounds. (Bisection)" << std::endl;
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
            c = l + (r - l) / 2.0;
            if (eq3(l) * eq3(c) < 0.0)
            {
                r = c;
            }
            else
            {
                l = c;
            }
            ++do_rounds;
        } while (!(std::fabs(l - r) < EPS));
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq3(c) << " and did " << do_rounds << " rounds. (Bisection)" << std::endl;
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
            c = l + (r - l) / 2.0;
            if (eq4(l) * eq4(c) < 0.0)
            {
                r = c;
            }
            else
            {
                l = c;
            }
            ++do_rounds;
        } while (!(std::fabs(l - r) < EPS));
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq4(c) << " and did " << do_rounds << " rounds. (Bisection)" << std::endl;
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
            c = l + (r - l) / 2.0;
            if (eq5(l) * eq5(c) < 0.0)
            {
                r = c;
            }
            else
            {
                l = c;
            }
            ++do_rounds;
        } while (!(std::fabs(l - r) < EPS));
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq5(c) << " and did " << do_rounds << " rounds. (Bisection)" << std::endl;
        break;
    default:
        break;
    }
}
