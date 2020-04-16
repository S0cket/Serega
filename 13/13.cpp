#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int n = 5;
int a[n][n];

int main(void) {
	int count = 0;
	srand(time(NULL));
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < n; j ++) {
			a[i][j] = rand() % 100 - 50;
			if (abs(a[i][j]) < 20)
				count ++;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "count: " << count << endl;
	return 0;
}