/*#include <stdio.h>
#include <stdlib.h>

int arr[100000] = { 0 };

int cmp(const void*v1, const void*v2) {
	return *(int*)v1 - *(int*)v2;
}

int main(void) {
	int n, p;
	scanf("%d %d", &n, &p);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), cmp);

	int max = 0;*/
	/* 应该是因为测试点4数据的分布问题，导致从后往前会超时，而从前往后不会
	for (int i = 0; i < n && n-i>max; i++) {
		for (int j = n - 1; j - i + 1 > max ; j--) {
			if ((long long)arr[i] * p >= (long long)arr[j]) {
				if (j - i + 1 > max) {
					max = j - i + 1;
					break;
				}
			}
		}
	}
	*/
	/*
	for (int i = 0; i<n && n - i>max; i++) {
		for (int j = i + max; j<n; j++) {
			if ((long long)arr[i] * p >= (long long)arr[j]) {
				max = j - i + 1;
			}
			else {
				break;
			}
		}
	}

	printf("%d", max);

	return 0;

}
*/