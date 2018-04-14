#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#define N 70
#define EPS 10e-9

using namespace std;

// global variables
double A[N][N * 2];
double B[N][N];
// prototype
void gjel();
void slt1();
void slt2();

int main()
{
    slt1();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            B[i][j] = A[i][j];
    }
    gjel();
    slt2();
    double e = 0.0;
    for (int j = 0; j< N; j++)
    {
        double t = 0.0;
        for (int i = 0; i < N; i++)
            t += B[j][i] * A [i][70 + j];
        e += fabs(t - 1.0);
    }
    cout << "Total error is: " << e << " (1-Norm at diagonal)" << endl;

    return 0;
}

// Gauss-Jordan elimination
void gjel()
{
    int i, j, pv;
    double d;
    for (pv = 0; pv < N; pv++)
    {
        for (i = 0; i < N; i++)
        {
            if (i != pv)
            {
                d = A[i][pv] / A[pv][pv];
                for (j = pv; j < N * 2; j++)
                    A[i][j] -= d * A[pv][j];
            }
        }
    }
    // Make coefficient be 1.0
    for (i = 0; i < N; i++)
    {
        d = A[i][i];
        for (j = i + 1; j < N * 2; j++)
            A[i][j] /= d;
    }
}

// Selection 1
void slt1()
{
    ofstream file("input.txt");
    if (file.is_open())
    {
        srand(time(NULL)); // initialize random seed
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N * 2; j++)
            {
                if (j < N)
                {
                    double mult = (double)(rand() % 2);
                    if (mult == 0.0)
                        mult = -1.0;
                    A[i][j] = (double)rand() / (double)RAND_MAX * (double)(rand() % 100) * mult;
                }
                else
                {
                    if (j - N == i)
                        A[i][j] = 1.0;
                    else
                        A[i][j] = 0.0;
                }
                if (j != 0)
                    file << " ";
                file << A[i][j];
            }
            file << endl;
        }
        cout << "A matrix with N = " << N << " having random value between +/-100.0 is created and saved as \"input.txt\"." << endl;
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
    ofstream file("output.txt");
    if (file.is_open())
    {
        srand(time(NULL)); // initialize random seed
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N * 2; j++)
            {
                if (j != 0)
                    file << " ";
                file << A[i][j];
            }
            file << endl;
        }
        cout << "The inverse of this matrix is calculated and saved as \"output.txt\"." << endl;
    }
    else
    {
        cout << "I/O error" << endl;
        exit(0);
    }
    file.close();
}
