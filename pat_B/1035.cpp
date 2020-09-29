/*
#include <stdio.h>

int arr[101] = { 0 };
int arr2[101] = { 0 };
int referance[101] = { 0 };

int equal(int *a,int len) {
	for (int i = 1; i <= len; i++) {
		if (a[i] != referance[i])
			return 0;
	}
	return 1;
}

void display(int *a,int n) {
	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			printf("%d",a[i]);
		}
		else {
			printf(" %d", a[i]);
		}
	}
}

void mergeSort(int len) {
	int aux[101] = { 0 };
	int mergeFlag = 0;
	for (int step = 1; step <= len; step = step * 2) {
		for (int g1 = 1, g2 = g1 + step; g1 <= len; g1 = g2 + step, g2 = g1 + step) {
			g2 = g2 <= len ? g2: len;
			int i, j, k;
			for (i = g1, j = g2, k = 0; i<=len && j<=len && i < g1 + step && j < g2 + step;) {
				if (arr2[i] < arr2[j]) {
					aux[g1+k] = arr2[i];
					i++;
					k++;
				}
				else {
					aux[g1+k] = arr2[j];
					j++;
					k++;
				}
			}
			while (i <= len && i < g1 + step)
			{
				aux[g1+k] = arr2[i];
				i++;
				k++;
			}
			while (j <= len && j < g2 + step) {
				aux[g1+k] = arr2[j];
				j++;
				k++;
			}
		}
		for(int i=1;i<=len;i++){
			arr2[i] = aux[i];
		}

		if (mergeFlag) {
			printf("Merge Sort\n");
			display(arr2,len);
			break;
		}

		if (equal(arr2,len)) {
			mergeFlag = 1;
		}
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		arr2[i] = arr[i];
	}
	for (int i = 1; i <= n; i++) {
		scanf("%d", &referance[i]);
	}

	int flagInsert = 0;
	for (int i = 2; i <= n; i++) {
		int basic = arr[i];
		int j;
		for (j = i - 1; j > 0 && arr[j] > basic; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = basic;

		if (flagInsert) {
			printf("Insertion Sort\n");
			display(arr,n);
			break;
		}

		if (equal(arr,n)) {
			flagInsert = 1;
		}
	}

	if (!flagInsert) {
		mergeSort(n);
	}

	return 0;
}
*/