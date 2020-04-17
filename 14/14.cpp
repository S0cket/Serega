#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

const int n = 10, m = 6;
int arr[n][m];

int main(void) {
	srand(time(NULL));
	for (int i = 0; i < n; ++ i) {
		for (int j = 0; j < m; ++ j) {
			arr[i][j] = rand() % 100;
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	int a = n / 2;
	if (n % 2 == 0)
		-- a;
	int b = m / 2;
	if (m % 2 == 0)
		-- b;
	int mid = min(a, b), ma = -1000;
	for (int i = 0; i <= mid; ++ i) {
		for (int j = i; j < m - i; ++ j) {
			if (arr[i][j] > ma)
				ma = arr[i][j];
			//printf("%d\n", arr[i][j]);
		}
	}
	printf("\n\n");
	for (int i = 0; i <= mid; ++ i) {
		for (int j = i; j < m - i; ++ j) {
			if (arr[n - i - 1][j] > ma)
				ma = arr[n - i - 1][j];
			//printf("%d\n", arr[n - i - 1][j]);
		}
	}
	printf("%d\n", ma);
	return 0;
}