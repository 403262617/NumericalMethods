#include <cstdlib>
#include <windows.h>
#include "common.cpp"
#include "bisect.cpp"
#include "falpos.cpp"
#include "modfap.cpp"
#include "newton.cpp"
#include "secant.cpp"

using namespace std;

int main()
{
    SetConsoleTitle(TEXT("Hw1. Solve the equation (1-3 are from myself, 4-5 are from teacher)"));
    cout << "1. f(x) = sqrt(x) - cos(x)" << endl;
    bisect(1, 0.0, 1.0);
    falpos(1, 0.0, 1.0);
    modfap(1, 0.0, 1.0);
    newton(1, 0.1); // ** f'(x) != 0 **
    newton(1, 1.0);
    secant(1, 0.0, 1.0);
    cout << endl;
    cout << "2. f(x) = x^4 - 2(x^3) - 4(x^2) + 4x + 4 = 0" << endl;
    bisect(2, -2.0, -1.0);
    falpos(2, -2.0, -1.0);
    modfap(2, -2.0, -1.0);
    newton(2, -2.0);
    newton(2, -1.0);
    secant(2, -2.0, -1.0);
    bisect(2, 0.0, 2.0);
    falpos(2, 0.0, 2.0);
    modfap(2, 0.0, 2.0);
    newton(2, 0.0);
    newton(2, 2.0);
    secant(2, 0.0, 2.0);
    bisect(2, 2.0, 3.0);
    falpos(2, 2.0, 3.0);
    modfap(2, 2.0, 3.0);
    newton(2, 3.0);
    secant(2, 2.0, 3.0);
    bisect(2, -1.0, 0.0);
    falpos(2, -1.0, 0.0);
    modfap(2, -1.0, 0.0);
    secant(2, -1.0, 0.0);
    cout << endl;
    cout << "3. f(x) = sin(x) - e^(-x)" << endl;
    bisect(3, 0.0, 1.0);
    falpos(3, 0.0, 1.0);
    modfap(3, 0.0, 1.0);
    newton(3, 0.0);
    newton(3, 1.0);
    secant(3, 0.0, 1.0);
    bisect(3, 3.0, 4.0);
    falpos(3, 3.0, 4.0);
    modfap(3, 3.0, 4.0);
    newton(3, 3.0);
    newton(3, 4.0);
    secant(3, 3.0, 4.0);
    bisect(3, 6.0, 7.0);
    falpos(3, 6.0, 7.0);
    modfap(3, 6.0, 7.0);
    newton(3, 6.0);
    newton(3, 7.0);
    secant(3, 6.0, 7.0);
    cout << endl;
    system("pause");
    return 0;
}
