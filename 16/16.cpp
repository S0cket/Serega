#include <iostream>

using namespace std;

int main(void) {
	int a, b = 0;
	cin >> a;
	b = ((a & 0xf0) >> 4) + ((a & 0x0f) << 4);
	cout << b << endl;
	return 0;
}

/*
0110 1101 (109)
1101 0110 (214)

1010 0101 (165)
0101 1010 (90)
*/