#include <stdio.h>

int main(void) {
	int a, b = 0;
	scanf("%d", &a);
	b = ((a & 0xf0) >> 4) + ((a & 0x0f) << 4);
	printf("%d\n", b);
	return 0;
}

/*
0110 1101 (109)
1101 0110 (214)

1010 0101 (165)
0101 1010 (90)
*/