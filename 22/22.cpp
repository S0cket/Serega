#include <iostream>

using namespace std;

double func(int x, double bn = -5, int n = 1) {
	if (x == n)
		return bn;
	return func(x, (bn / (n * n + n + 1.0)), n + 1);
}

int main(void) {
	int n;
	double res;
	cin >> n;
	res = func(n);
	cout << res << endl;
	return 0;
}