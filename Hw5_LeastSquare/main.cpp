#include <iostream>
#include <fstream>
#include <cmath>
#include <graphics.h>
#define N 44
#define M 43 // Max: N - 1 

using namespace std;

// global variables
const char* name = "Data.txt";
const int width = 1280;
const int height = 720;
double T[N][2];
double A[M][M + 1];
double X[M] = {0.0};
// prototype
void gsel();
void gsbs();
void lesq();
void rdat();
int getv(int n);

int main() {
	rdat();
	lesq();
	gsel();
	gsbs();
	cout << "The provided test data is fixed as filename \"Data.txt\".\nYou can only change the file name to test another data.\n\n";
	for (int i = 0; i < M; i++) {
		if (i == 0)
			cout << "The approximation P(x) = " << X[i];
		else
			cout << " + " << X[i] << "x^" << i;
	}
	cout << endl;
	initwindow(width, height);
	line(0, 3 * height / 4, getmaxx(), 3 * height / 4);
	line(width / 5, 0, width / 5, getmaxy());
	for (int i = 0; i < 5 * width / 2; i++) {
		putpixel(width / 5 + i, 3 * height / 4 - getv(i), GREEN);
	}
	for (int i = width / 5; i > 0; i--) {
		putpixel(i, 3 * height / 4 - getv(i - width / 5), GREEN);
	}
	getch();
    return 0;
}

// Gaussian elimination
void gsel() {
    int i, j, pv;
    double d;
    for (pv = 0; pv < M - 1; pv++) {
        for (i = pv + 1; i < M; i++) {
            d = A[i][pv] / A[pv][pv];
            for (j = pv; j < M + 1; j++)
                A[i][j] -= d * A[pv][j];
        }
    }
}

// Backward Substitution
void gsbs() {
    for (int i = M - 1; i >= 0; i--) {
        double sum = 0.0;
        for (int j = i + 1; j < M; j++)
            sum += A[i][j] * X[j];
        X[i] = (A[i][M] - sum) / A[i][i];
    }
}

// Least square (build matrix)
void lesq() {
	for (int i = 0; i < M; i++) {
        for (int j = 0; j < M + 1; j++) {
            if (i==0 && j ==0) {
            	A[i][j] = N;
            	continue;
			}
			double t = 0.0;
			if (j != M) {
				for (int k = 0; k < N; k++)
					t += pow(T[k][0], (double) (i + j));
			} else {
				for (int k = 0; k < N; k++)
					t += pow(T[k][0], (double) i) * T[k][1];
			}
			A[i][j] = t;
        }
    }
}

// Read test data
void rdat() {
    ifstream file(name);
    if (file.is_open()) {
        double *tmp = &T[0][0];
        while (!file.eof()) {
            file >> *tmp;
            tmp++;
        }
    } else {
        cout << "I/O error" << endl;
        exit(0);
    }
    file.close();
}

// Calculate the scale
int getv(int n) {
	double valn = (double) n / 120.0;
	double val = 0.0;
	for (int i = 0; i < M ; i++) {
		val += X[i] * pow(valn, (double)i);
	}
	return (int) (val * 160.0);
}
