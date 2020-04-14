#include <stdio.h>

typedef unsigned char byte;

int main(void) {
	byte a, b;
	scanf("%hhd", &a);
	b = ((a & 0xf0) >> 4) + ((a & 0x0f) << 4);
	printf("%hhd\n", b);
	return 0;
}

/*
0110 1101 (109)
1101 0110 (214)

1010 0101 (165)
0101 1010 (90)
*/