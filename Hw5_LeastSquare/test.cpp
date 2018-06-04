#include <iostream>
#include <fstream>
#include <graphics.h>
#define N 44

using namespace std;

// global variables
const char* name = "Data.txt";
const int width = 1280;
const int height = 720;
double T[N][2];
// prototype
void rdat();

int main() {
	rdat();
	
	initwindow(width, height);
	line(0, 3 * height / 4, getmaxx(), 3 * height / 4);
	line(width / 5, 0, width / 5, getmaxy());
	for (int i = 0; i < 40; i++) {
		line(width / 5 + (int) (T[i][0] * 100.0), 3 * height / 4 - (int) (T[i][1] * 100.0), width / 5 + (int) (T[i+1][0] * 100.0), 3 * height / 4 - (int) (T[i+1][1] * 100.0));
	}
	
	getch();
    return 0;
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

