/*
#include <stdio.h>
#include <stdlib.h>

void swap(int *arr,int index1, int index2) {
	int tmp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = tmp;
}

void move(int *arr, int n, int m) {
	for (int i = n - m, j = n - 1; i < j; i++, j--) {
		swap(arr, i, j);
	}
	for (int i = 0, j = n - m - 1; i < j; i++, j--) {
		swap(arr, i, j);
	}
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		swap(arr, i, j);
	}
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int *arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	if (n >= m) {
		move(arr, n, m);
	}
	else {
		int step = m - n;		//注意有可能数组大小比要移动的步数更小，就不能简单地分成两块倒置，需要减少步数再操作
		move(arr, n, step);
	}

	for (int i = 0; i < n; i++) {
		if (i == 0)
			printf("%d", arr[i]);
		else
			printf(" %d", arr[i]);
	}
	free(arr);

	return 0;
}
*/