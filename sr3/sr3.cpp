#include <iostream>

using namespace std;

int main(void) {
	int n, s = 0, c = 0;
	cin >> n;

	for (; n != 0; n /= 10) {
		s += n % 10;
		c ++;
	}
	cout << (1.0 * s / c) << endl;
	return 0;
}