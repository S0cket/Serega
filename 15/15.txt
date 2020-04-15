#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int n = 5, m = 5;
int a[n][m], b[n][m], c[n][m];

int main(void) {
	srand(time(NULL));
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			a[i][j] = rand() % 100;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			b[i][j] = rand() % 100;
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			c[i][j] = a[i][j] + b[i][j];
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}