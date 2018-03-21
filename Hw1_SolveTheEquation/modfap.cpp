#include <iostream>
#include "common.h"
// Method of Modified False Position
void modfap(int eq, double a, double b)
{
    double l = a;
    double r = b;
    double c;
    double c_new = 0.0;
    int type = 0; // 0: Initial, 1: f(l / 2.0), 2: f(r / 2.0)
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
            c = c_new;
            if (type == 0)
            {
                c_new = l - (eq1(l) * (r - l)) / (eq1(r) - eq1(l));
            }
            if (type == 1)
            {
                c_new = (eq1(r) * l - eq1(l) * r / 2.0) / (eq1(r) - eq1(l) / 2.0);
            }
            if (type == 2)
            {
                c_new = (eq1(r) * l / 2.0 - eq1(l) * r) / (eq1(r) / 2.0 - eq1(l));
            }
            if (eq1(l) * eq1(c_new) < 0.0)
            {
                r = c_new;
                type = 1;
            }
            else
            {
                l = c_new;
                type = 2;
            }
            ++do_rounds;
        } while (!(std::fabs(c_new - c) < EPS) && do_rounds < ROUND_MAX);
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq1(c) << " and did " << do_rounds << " rounds. (Modified False Position)" << std::endl;
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
            c = c_new;
            if (type == 0)
            {
                c_new = l - (eq2(l) * (r - l)) / (eq2(r) - eq2(l));
            }
            if (type == 1)
            {
                c_new = (eq2(r) * l - eq2(l) * r / 2.0) / (eq2(r) - eq2(l) / 2.0);
            }
            if (type == 2)
            {
                c_new = (eq2(r) * l / 2.0 - eq2(l) * r) / (eq2(r) / 2.0 - eq2(l));
            }
            if (eq2(l) * eq2(c_new) < 0.0)
            {
                r = c_new;
                type = 1;
            }
            else
            {
                l = c_new;
                type = 2;
            }
            ++do_rounds;
        } while (!(std::fabs(c_new - c) < EPS) && do_rounds < ROUND_MAX);
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq2(c) << " and did " << do_rounds << " rounds. (Modified False Position)" << std::endl;
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
            c = c_new;
            if (type == 0)
            {
                c_new = l - (eq3(l) * (r - l)) / (eq3(r) - eq3(l));
            }
            if (type == 1)
            {
                c_new = (eq3(r) * l - eq3(l) * r / 2.0) / (eq3(r) - eq3(l) / 2.0);
            }
            if (type == 2)
            {
                c_new = (eq3(r) * l / 2.0 - eq3(l) * r) / (eq3(r) / 2.0 - eq3(l));
            }
            if (eq3(l) * eq3(c_new) < 0.0)
            {
                r = c_new;
                type = 1;
            }
            else
            {
                l = c_new;
                type = 2;
            }
            ++do_rounds;
        } while (!(std::fabs(c_new - c) < EPS) && do_rounds < ROUND_MAX);
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq3(c) << " and did " << do_rounds << " rounds. (Modified False Position)" << std::endl;
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
            c = c_new;
            if (type == 0)
            {
                c_new = l - (eq4(l) * (r - l)) / (eq4(r) - eq4(l));
            }
            if (type == 1)
            {
                c_new = (eq4(r) * l - eq4(l) * r / 2.0) / (eq4(r) - eq4(l) / 2.0);
            }
            if (type == 2)
            {
                c_new = (eq4(r) * l / 2.0 - eq4(l) * r) / (eq4(r) / 2.0 - eq4(l));
            }
            if (eq4(l) * eq4(c_new) < 0.0)
            {
                r = c_new;
                type = 1;
            }
            else
            {
                l = c_new;
                type = 2;
            }
            ++do_rounds;
        } while (!(std::fabs(c_new - c) < EPS) && do_rounds < ROUND_MAX);
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq4(c) << " and did " << do_rounds << " rounds. (Modified False Position)" << std::endl;
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
            c = c_new;
            if (type == 0)
            {
                c_new = l - (eq5(l) * (r - l)) / (eq5(r) - eq5(l));
            }
            if (type == 1)
            {
                c_new = (eq5(r) * l - eq5(l) * r / 2.0) / (eq5(r) - eq5(l) / 2.0);
            }
            if (type == 2)
            {
                c_new = (eq5(r) * l / 2.0 - eq5(l) * r) / (eq5(r) / 2.0 - eq5(l));
            }
            if (eq5(l) * eq5(c_new) < 0.0)
            {
                r = c_new;
                type = 1;
            }
            else
            {
                l = c_new;
                type = 2;
            }
            ++do_rounds;
        } while (!(std::fabs(c_new - c) < EPS) && do_rounds < ROUND_MAX);
        std::cout << "Sol: " << c << " in [" << a << ", " << b << "], f(x) = " << eq5(c) << " and did " << do_rounds << " rounds. (Modified False Position)" << std::endl;
        break;
    default:
        break;
    }
}