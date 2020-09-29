/*
#include <stdio.h>

int main(void) {
	int n;
	char c;
	scanf("%d %c", &n, &c);
	n -= 1;
	int level = 0; int maxLevelCount = 1;
	while ((maxLevelCount+2)*2 <= n)
	{
		maxLevelCount += 2;
		level++;
		n -= (maxLevelCount) * 2;
	}

	for (int i = 0; i <= level; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < maxLevelCount - i * 2; j++) {
			printf("%c",c);
		}
		printf("\n");
	}
	for (int i = level-1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < maxLevelCount - i * 2; j++) {
			printf("%c",c);
		}
		printf("\n");
	}

	printf("%d\n", n);

	return 0;
}
*/