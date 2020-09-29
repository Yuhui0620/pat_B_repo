/*
#include <stdio.h>

int record[100001] = { 0 };

int main(void) {
	int n;
	scanf("%d", &n);
	int score;
	for (int i = 0; i < n; i++) {
		scanf("%d", &score);
		record[score]++;
	}
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d",&score);
		if (i == 0)
			printf("%d", record[score]);
		else
			printf(" %d", record[score]);
	}

	return 0;
}
*/