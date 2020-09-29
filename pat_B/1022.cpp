/*
#include <stdio.h>

int main(void) {
	int a, b, d;
	scanf("%d %d %d", &a, &b, &d);
	int sum = a + b;
	if (sum == 0) {
		printf("%d", sum);
		return 0;
	}

	int record[32]; int len = 0;
	while (sum != 0) {
		int tmp = sum % d;
		record[len++] = tmp;
		sum /= d;
	}
	for (int i = len - 1; i >= 0; i--) {
		printf("%d", record[i]);
	}

	return 0;

}
*/