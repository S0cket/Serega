#include <math.h>
#include <iostream>

using namespace std;

int main(void) {
	double z = 0;
	for (int i = 1; i <= 10; ++ i) {
		double x;
		if (i < 5)
			x = 1.0 / tan(sqrt(i));
		else
			x = pow(i, tan(i));
		z += x;
	}
	cout << z << endl;

	int n = 20;
	double a = 2, b = 2.3, h = (b - a) / n, s = 0;
	for (int i = 0; i < n; ++ i)
		s += h * sin(log(a + (i - 0.5) * h));
	cout << s << endl;
	return 0;
}