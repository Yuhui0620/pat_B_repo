/*
#include <stdio.h>
#include <stdlib.h>

double arr[100000] = { 0.0 };
*/
/*超时
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &arr[i]);
	}
	double sum = 0;
	for (int step = 0; step < n; step++) {
		for (int i = 0; i + step < n; i++) {
			for (int j = i; j <= i + step; j++)
				sum += arr[j];
		}
	}
	printf("%.2lf", sum);

	return 0;
}
*/
/*超时
int main(void) {
	int n;
	scanf("%d", &n);
	double **df = (double**)malloc(n * sizeof(double*));
	for (int i = 0; i < n; i++) {
		df[i] = (double*)malloc(n*(sizeof(double)));
	}
	double sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%lf", &df[i][i]);
		sum += df[i][i];
		for (int j = 0; j < i; j++) {
			df[j][i] = df[j][i - 1] + df[i][i];
			sum += df[j][i];
		}
	}
	printf("%.2lf", sum);

	for (int i = 0; i < n; i++) {
		free(df[i]);
	}
	free(df);

	return 0;
}
*/
/*超时
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &arr[i]);
		sum[i] = arr[i];
		for (int j = 0; j < i; j++) {
			arr[j] = arr[j] + arr[i];
			sum[j] += arr[j];
		}
	}
	double sumNum = 0;
	for (int i = 0; i < n; i++) {
		sumNum += sum[i];
	}
	printf("%.2lf", sumNum);

	return 0;
}
*/

/*思路对了，找规律，答案错了
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &arr[i]);
	}
	double sum = 0;
	int i, occur, step;
	for (i = 0,occur=n,step=n; i < n / 2; i++) {
		sum += arr[i] * occur;
		sum += arr[n - 1 - i] * occur;
		occur += step - 2;
		step -= 2;
	}
	if (n % 2 == 1) {
		sum += arr[n / 2] * occur;
	}

	printf("%.2lf", sum);

	return 0;
}
*/

/*正确做法
int main(void) {
	int n;
	scanf("%d", &n);
	double sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%lf", &arr[i]);
		sum += arr[i] * (i + 1)*(n - i);
	}
	printf("%.2lf", sum);

	return 0;
}
*/