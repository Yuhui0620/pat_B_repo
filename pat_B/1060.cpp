/*
#include <stdio.h>
#include <stdlib.h>

int arr[200001] = { 0 };
int record[200001] = { 0 };
int occurCount[200001] = { 0 };
*/
/*³¬Ê±½â·¨
int main(void) {
	int n;
	scanf("%d", &n);
	int mile;
	int maxMile = -1;
	for (int i = 0; i < n; i++) {
		scanf("%d", &mile);
		if (mile > maxMile)
			maxMile = mile;
		for (int j = mile-1; record[j] < j; j--) {
			record[j]++;
		}
	}
	int i;
	for (i = maxMile - 1; i >= 0 && i > record[i]; i--)
		;
	printf("%d", i);
	return 0;
}
*/
/*
int main() {
	int n;
	scanf("%d", &n);
	int mile;
	for (int i = 0; i < n; i++) {
		scanf("%d",&mile);
		occurCount[mile]++;
	}
	int tmp = 0;
	int E = 0;
	for (int i = 200000; i >= 0; i--) {
		int days = tmp;
		int curMile = i;
		int tmp2;
		int min = days < curMile ? days : curMile;
		if (min > E) {
			E = min;
		}
		tmp += occurCount[i];
	}
	printf("%d", E);
	return 0;
}
*/