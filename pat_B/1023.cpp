/*
#include <stdio.h>

int record[10] = { 0 };
int main(void) {
	int num;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		record[i] = num;
	}
	for (int i = 1; i < 10; i++) {
		if (record[i] != 0) {
			printf("%d", i);
			record[i]--;
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (record[i] != 0) {
			while (record[i]--)
			{
				printf("%d", i);
			}
		}
	}

	return 0;
}
*/