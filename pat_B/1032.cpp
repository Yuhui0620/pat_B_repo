/*
#include <stdio.h>

int record[100000] = { 0 };

int main(void) {
	int n;
	scanf("%d", &n);
	int id, score;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &id, &score);

		record[id] += score;
	}

	int max = -1; int max_index = -1;
	for (int i = 0; i < 100000; i++) {
		if (record[i] > max) {
			max = record[i];
			max_index = i;
		}
	}
	printf("%d %d", max_index, max);

	return 0;
}
*/