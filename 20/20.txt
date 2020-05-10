#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void) {
	srand(time(NULL));
	int n, ans = 0;
	cin >> n;
	int *arr = new int[n], cnt = 1;
	for (int i = 0; i < n; ++ i) {
		*(arr + i) = rand() % 100;
		cout << *(arr + i) << " ";
	}
	cout << "\n";

	for (int i = 1; i < n; ++ i) {
		if (*(arr + i) >= *(arr + i - 1))
			++ cnt;
		else {
			if (cnt != 1) {
				cnt = 1;
				++ ans;
			}
		}
	}
	if (cnt != 1)
		++ ans;
	delete [] arr;
	cout << "count = " << ans << "\n";
	return 0;
}