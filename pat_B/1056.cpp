/*
#include <stdio.h>

int arr[10] = { 0 };

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			sum += arr[i] * 10 + arr[j];
		}
	}
	printf("%d", sum);

	return 0;
}
*/