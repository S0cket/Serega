#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int n = 10, m = 6;
int arr[n][m];

int main(void) {
	srand(time(NULL));
	int n;
	scanf("%d", &n);
	int **arr = new int*[n];
	for (int i = 0; i < n; ++ i) {
		arr[i] = new int[n];
		for (int j = 0; j < n; ++ j) {
			arr[i][j] = rand() % 100;
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
	//printf("\n\n\n");
	int mid = (n - 1) / 2, m = 0;
	for (int i = 0; i <= mid; ++ i) {
		for (int j = i; j < n - i; ++ j) {
			if (arr[i][j] > m)
				m = arr[i][j];
			//printf("%d\n", arr[i][j]);
		}
	}
	//printf("\n");
	mid = n / 2;
	for (int i = n - 1; i >= mid; -- i) {
		for (int j = i; j >= n - i - 1; -- j) {
			if (arr[i][j] > m)
				m = arr[i][j];
			//printf("%d\n", arr[i][j]);
		}
	}
	printf("max = %d\n", m);
	return 0;
}