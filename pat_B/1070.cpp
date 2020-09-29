/*
#include <stdio.h>
#include <stdlib.h>

int arr[10000] = { 0 };

int cmp(const void* v1, const void* v2) {
	return *(int*)(v1)-*(int*)(v2);
}

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), cmp);
	double sum = arr[0] / 2.0 + arr[1] / 2.0;
	for (int i = 2; i < n; i++) {
		sum = sum / 2.0 + arr[i] / 2.0;
	}
	printf("%d", (int)sum);

	return 0;
}
*/