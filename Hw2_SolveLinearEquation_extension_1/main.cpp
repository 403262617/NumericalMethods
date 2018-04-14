#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#define N 70
#define EPS 10e-9

using namespace std;

// global variables
double A[N][N + 1];
double X[N] = {0.0};
// prototype
void gsel(bool pp);
void gsbs();
void norm();
void slt1();
void slt2();
void ppvt(int r, int c);

int main()
{
    slt1();
    cout << "(Without partial pivoting)";
    gsel(false);
    gsbs();
    cout << endl << "The solution is:" << endl;
    for (int i = 0; i < N; i++)
        cout << "x" << i + 1 << " = " << X[i] << endl;
    cout << endl;
    norm();

    cout << endl;

    slt2();
    cout << "(With partial pivoting)";
    gsel(true);
    gsbs();
    cout << endl << "The solution is: (** Order Changed **)" << endl;
    for (int i = 0; i < N; i++)
        cout << "x" << i + 1 << " = " << X[i] << endl;
    cout << endl;
    norm();
    return 0;
}

// Gaussian elimination extends partial pivoting
void gsel(bool pp)
{
    int i, j, pv;
    double d;
    for (pv = 0; pv < N - 1; pv++)
    {
        for (i = pv + 1; i < N; i++)
        {
            if (pp)
                ppvt(i, i);
            d = A[i][pv] / A[pv][pv];
            for (j = pv; j < N + 1; j++)
                A[i][j] -= d * A[pv][j];
        }
    }
}
// Backward Substitution
void gsbs()
{
    for (int i = N - 1; i >= 0; i--)
    {
        double sum = 0.0;
        for (int j = i + 1; j < N; j++)
            sum += A[i][j] * X[j];
        X[i] = (A[i][N] - sum) / A[i][i];
    }
}

// Validation (Measure of Vector: 1-Norm)
void norm()
{
    double err = 0.0;
    for (int j = 0; j < N; j++)
    {
        double tmp = 0.0;
        for (int i = 0; i < N; i++)
            tmp += A[j][i] * X[i];
        err += fabs(A[j][N] - tmp);
    }
    cout << "The 1-Norm is " << err << ". ";
    if (err <= EPS)
        cout << "The solution is valid. (OK)" << endl;
    else
        cout << "The solution is error. (NG)" << endl;
}

// Selection 1
void slt1()
{
    ofstream file("input1.txt");
    if (file.is_open())
    {
        srand(time(NULL)); // initialize random seed
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N + 1; j++)
            {
                double mult = (double)(rand() % 2);
                if (mult == 0.0)
                    mult = -1.0;
                A[i][j] = (double)rand() / (double)RAND_MAX * (double)(rand() % 100) * mult;
                if (j != 0)
                    file << " ";
                file << A[i][j];
            }
            file << endl;
        }
        cout << "A matrix with N = " << N << " having random value" << endl;
        cout << "from -100.0 to 100.0 is created and saved as \"input1.txt\"." << endl;
    }
    else
    {
        cout << "I/O error" << endl;
        exit(0);
    }
    file.close();
}

// Selection 2
void slt2()
{
    ifstream file("input1.txt");
    if (file.is_open())
    {
        double *tmp = &A[0][0];
        while (!file.eof())
        {
            file >> *tmp;
            tmp++;
        }
    }
    else
    {
        cout << "I/O error" << endl;
        exit(0);
    }
    file.close();
}

void ppvt(int r, int c)
{
    int idx = r;
    double m = A[r][c];
    for (int i = 0; i < N - r + 1; i++)
    {
        if (A[r + i][c] > m)
        {
            idx = r + i;
            m = A[r + i][c];
        }
    }
    if (idx != r)
    {
        for (int i = 0; i < N + 1 - c; i++)
            swap(A[r][c + i], A[idx][c + i]);
    }
}
