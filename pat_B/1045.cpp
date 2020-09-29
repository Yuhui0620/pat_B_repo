/*
#include <stdio.h>

int leftMax[100000] = { 0 };
int rightMin[100000] = { 0 };
int arr[100000] = { 0 };
int flag[100000] = { 0 };

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		leftMax[i] = max;
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	int min = arr[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		rightMin[i] = min;
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			if (rightMin[i] > arr[i]) {
				flag[i] = 1;
				count++;
			}
		}
		else if (i == n - 1) {
			if (leftMax[i] < arr[i]) {
				flag[i] = 1;
				count++;
			}
		}
		else {
			if (rightMin[i] > arr[i] && leftMax[i] < arr[i]) {
				flag[i] = 1;
				count++;
			}
		}
	}
	printf("%d\n", count);
	if (count == 0) {
		printf("\n");
	}
	else {
		for (int i = 0; i < n; i++) {
			if (flag[i]) {
				count--;
				if (count == 0) {
					printf("%d", arr[i]);
				}
				else {
					printf("%d ", arr[i]);
				}
			}
		}
	}

	return 0;
}
*/