/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXSIZE 20000

char s_num[MAXSIZE] = { 0 };
char part_int[MAXSIZE] = { 0 };
char part_decim[MAXSIZE] = { 0 };
char part_exp[10] = { 0 };
int len_int = 0;
int len_decim = 0;
int len_exp = 0;

int main(void) {
	scanf("%s", &s_num);
	int len = strlen(s_num);

	int op_basic = s_num[0] == '+' ? 1 : -1;
	part_int[len_int++] = s_num[1];
	int i;
	for (i = 3; s_num[i] != 'E'; i++) {
		part_decim[len_decim++] = s_num[i];
	}
	int op_exp = s_num[i+1] == '+' ? 1 : -1;

	for (i = i + 2; i < len; i++) {
		part_exp[len_exp++] = s_num[i];
	}
	int num_exp = atoi(part_exp);

	if (op_exp == 1) {
		int tmp = len_decim;
		for (i = 0; i < num_exp; i++) {
			if (len_decim > 0) {
				part_int[len_int++] = part_decim[i];
				len_decim--;
			}
			else {
				part_int[len_int++] = '0';
			}
		}
		if (len_decim != 0) {
			for (i = num_exp; i < tmp; i++) {
				part_decim[i - num_exp] = part_decim[i];
			}
		}
	}
	else {
		for (i = 0; i < num_exp; i++) {
			part_int[len_int + i] = part_int[len_int + i - 1];
			part_int[len_int + i - 1] = '0';
		}
		for (int j = len_decim - 1; j >= 0; j--) {
			part_decim[j + num_exp] = part_decim[j];
		}
		for (int j = 0; j < num_exp; j++) {
			part_decim[j] = part_int[1 + j];
		}
		len_decim += num_exp;
	}

	if (op_basic == -1)
		printf("-");
	for (i = 0; i < len_int; i++) {
		printf("%c", part_int[i]);
	}
	if(len_decim!=0)
		printf(".");
	for (i = 0; i < len_decim; i++) {
		printf("%c", part_decim[i]);
	}
	
	return 0;
}
*/