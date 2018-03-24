#include <cstdlib>
#include <windows.h>
#include "common.cpp"
#include "bisect.cpp"
#include "falpos.cpp"
#include "modfap.cpp"
#include "newton.cpp"
#include "secant.cpp"
#include "fixedp.cpp"

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
    fixedp(1, 0.0);
    fixedp(1, 1.0);
    cout << endl;
    cout << "2. f(x) = x^4 - 2(x^3) - 4(x^2) + 4x + 4 = 0" << endl;
    bisect(2, -2.0, -1.0);
    falpos(2, -2.0, -1.0);
    modfap(2, -2.0, -1.0);
    newton(2, -2.0);
    newton(2, -1.0);
    secant(2, -2.0, -1.0);
    fixedp(2, -2.0);
    fixedp(2, -1.0);
    bisect(2, 0.0, 2.0);
    falpos(2, 0.0, 2.0);
    modfap(2, 0.0, 2.0);
    newton(2, 0.0);
    newton(2, 2.0);
    secant(2, 0.0, 2.0);
    fixedp(2, 0.0);
    fixedp(2, 2.0);
    bisect(2, 2.0, 3.0);
    falpos(2, 2.0, 3.0);
    modfap(2, 2.0, 3.0);
    newton(2, 3.0);
    secant(2, 2.0, 3.0);
    fixedp(2, 3.0);
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
    fixedp(3, 0.0);
    fixedp(3, 1.0);
    bisect(3, 3.0, 4.0);
    falpos(3, 3.0, 4.0);
    modfap(3, 3.0, 4.0);
    newton(3, 3.0);
    newton(3, 4.0);
    secant(3, 3.0, 4.0);
    fixedp(3, 3.0);
    fixedp(3, 4.0);
    bisect(3, 6.0, 7.0);
    falpos(3, 6.0, 7.0);
    modfap(3, 6.0, 7.0);
    newton(3, 6.0);
    newton(3, 7.0);
    secant(3, 6.0, 7.0);
    fixedp(3, 6.0);
    fixedp(3, 7.0);
    cout << "4. f(x) = x * sin(3x) - e^(-0.1x) * cos(2x) - 5" << endl;
    bisect(4, -20.0, 19.0);
    falpos(4, -20.0, 19.0);
    modfap(4, -20.0, 19.0);
    secant(4, -20.0, 19.0);
    bisect(4, -10.0, -4.5);
    falpos(4, -10.0, -4.5);
    modfap(4, -10.0, -4.5);
    secant(4, -10.0, -4.5);
    cout << "5. f(x) = ln(6x^2 + 5x + 11) - x^2 + 3x - 2" << endl;
    bisect(5, 0.0, 4.0);
    falpos(5, 0.0, 4.0);
    modfap(5, 0.0, 4.0);
    newton(5, 0.0);
    newton(5, 4.0);
    secant(5, 0.0, 4.0);
    fixedp(5, 0.0);
    fixedp(5, 4.0);
    cout << endl;
    system("pause");
    return 0;
}
