#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int x;
	scanf("%d", &x);
	int a = (x % 100) / 10;
	int b = x % 10;

	printf("Я решил %d ", x);

	if (a == 1)
		printf("задач\n");
	else {
		switch (b) {
			case 1:
			printf("задачу\n");
			break;

			case 2:
			printf("задачи\n");
			break;

			case 3:
			printf("задачи\n");
			break;

			case 4:
			printf("задачи\n");
			break;

			default:
			printf("задач\n");
			break;
		}
	}
	return 0;
}