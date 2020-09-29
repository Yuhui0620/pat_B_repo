/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr_num[1000] = { 0 };
int len_arr = 0;
char s[10000] = { 0 };
int N = 0;

int main(void) {
	fgets(s, 10000, stdin);
	int len_s = strlen(s) - 1;
	int flagN = 0;
	for (int i = 0; i < len_s;) {
		if (s[i] != ' ') {
			int j;
			for (j = i + 1; j < len_s && s[j] != ' '; j++)
				;
			char tmp[10] = { 0 }; int len_tmp = 0;
			for (int k = i; k < j; k++) {
				tmp[len_tmp++] = s[k];
			}
			int num = atoi(tmp);
			if (!flagN) {
				N = num;
				flagN = 1;
			}
			else {
				arr_num[len_arr++] = num;
			}
			i = j + 1;
		}
		else
			i++;
	}
	int A1, A2, A3, A5; double A4;
	int flagA1, flagA2, flagA3, flagA4, flagA5;
	flagA1 = flagA2 = flagA3 = flagA4 = flagA5 = 0;
	A1 = A2 = A3 = A4 = A5 = 0;
	int calOp = 1; int countA4 = 0;
	for (int i = 0; i < len_arr; i++) {
		if (arr_num[i] % 5 == 0 && arr_num[i] % 2 == 0) {
			flagA1 = 1;
			A1 += arr_num[i];
		}
		if (arr_num[i] % 5 == 1) {
			flagA2 = 1;
			A2 += calOp * arr_num[i];
			calOp = -calOp;
		}
		if (arr_num[i] % 5 == 2) {
			flagA3 = 1;
			A3 += 1;
		}
		if (arr_num[i] % 5 == 3) {
			flagA4 = 1;
			A4 += arr_num[i];
			countA4++;
		}
		if (arr_num[i] % 5 == 4) {
			flagA5 = 1;
			if (arr_num[i] > A5) {
				A5 = arr_num[i];
			}
		}
	}
	A4 /= countA4;

	if (flagA1) {
		printf("%d", A1);
	}
	else {
		printf("N");
	}
	if (flagA2) {
		printf(" %d", A2);
	}
	else {
		printf(" N");
	}
	if (flagA3) {
		printf(" %d", A3);
	}
	else {
		printf(" N");
	}
	if (flagA4) {
		printf(" %.1lf", A4);
	}
	else {
		printf(" N");
	}
	if (flagA5) {
		printf(" %d", A5);
	}
	else {
		printf(" N");
	}

	return 0;
}
*/