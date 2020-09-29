/*
#include <stdio.h>
#include <stdlib.h>

int record[101];
int arr_num[101];
int result[101];

int cmp(const void* v1, const void* v2) {
	return *(int*)v2 - *(int*)v1;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr_num[i] = num;
		while (num!=1)
		{
			if (num % 2 == 0) {
				num /= 2;
			}
			else {
				num = (3 * num + 1) / 2;
			}
			if(num<=100)
				record[num] = 1;
		}
	}
	qsort(arr_num, n, sizeof(int), cmp);
	int n_key = 0;
	for (int i = 0; i < n; i++) {
		if (record[arr_num[i]] == 0) {
			result[n_key++] = arr_num[i];
		}
	}
	for (int i = 0; i < n_key; i++) {
		if (i == 0)
			printf("%d", result[i]);
		else
			printf(" %d", result[i]);
	}

	return 0;
}
*/