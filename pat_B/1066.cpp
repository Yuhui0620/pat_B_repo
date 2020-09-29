/*
#include <stdio.h>

int main(void) {
	int m, n;
	int lbound, rbound;
	int replace;
	scanf("%d %d %d %d %d", &m, &n, &lbound, &rbound, &replace);
	for (int i = 0; i < m; i++) {
		int value;
		for (int j = 0; j < n; j++) {
			scanf("%d", &value);
			if (value >= lbound && value <= rbound) {
				value = replace;
			}
			if (j == 0) {
				printf("%03d", value);
			}
			else {
				printf(" %03d", value);
			}
		}
		printf("\n");
	}

	return 0;
}
*/