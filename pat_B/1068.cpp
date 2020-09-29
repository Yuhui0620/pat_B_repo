/*
#include <stdio.h>
#include <math.h>

int arr[1001][1001] = { 0 };
int flag[1001][1001] = { 0 };
int occur[20000000] = { 0 };

void display(int n,int m) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%d ", flag[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	int m, n, tol;
	scanf("%d %d %d", &m, &n, &tol);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d",&arr[i][j]);
			occur[arr[i][j]]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (occur[arr[i][j]] > 1)
				flag[i][j] = 1;
		}
	}
	int count = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (flag[i][j]) {
				continue;
			}
			if (i - 1 >= 1 && j - 1 >= 1 && abs(arr[i][j] - arr[i-1][j-1]) <= tol) {
				flag[i][j] = flag[i - 1][j - 1] = 1;
				continue;
			}
			if (i - 1 >= 1 && abs(arr[i][j] - arr[i - 1][j]) <= tol) {
				flag[i][j] = flag[i - 1][j] = 1;
				continue;
			}
			if (i - 1 >= 1 && j + 1 <= m && abs(arr[i][j] - arr[i - 1][j + 1]) <= tol) {
				flag[i][j] = flag[i - 1][j + 1] = 1;
				continue;
			}
			if (j + 1 <= m && abs(arr[i][j] - arr[i][j + 1]) <= tol) {
				flag[i][j] = flag[i][j + 1] = 1;
				continue;
			}
			if (i + 1 <= n && j + 1 <= m && abs(arr[i][j] - arr[i + 1][j + 1]) <= tol) {
				flag[i][j] = flag[i + 1][j + 1] = 1;;
				continue;
			}
			if (i + 1 <= n && abs(arr[i][j] - arr[i + 1][j]) <= tol) {
				flag[i][j] = flag[i + 1][j] = 1;
				continue;
			}
			if (i + 1 <= n && j - 1 >= 1 && abs(arr[i][j] - arr[i + 1][j - 1]) <= tol) {
				flag[i][j] = flag[i + 1][j - 1] = 1;;
				continue;
			}
			if (j - 1 >= 1 && abs(arr[i][j] - arr[i][j - 1]) <= tol) {
				flag[i][j] = flag[i][j - 1] = 1;;
				continue;
			}
			count++;
		}
	}

	if (count == 0) {
		printf("Not Exist\n");
	}
	else if (count > 1) {
		printf("Not Unique\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (flag[i][j] == 0) {
					printf("(%d, %d): %d\n",j,i,arr[i][j]);
					break;
				}
			}
		}
	}

	return 0;
}
*/