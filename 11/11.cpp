#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int n = 10;
int a[n], b[n], c[n];

int main(void) {
	srand(time(NULL));
	for (int i = 0; i < n; i ++) {
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i ++) {
		b[i] = rand() % 100;
		cout << b[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		c[i] = a[i] + b[i];
		cout << c[i] << " ";
	}
	cout << endl;
	return 0;
}