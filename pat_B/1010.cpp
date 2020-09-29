/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr_k[2001];
int arr_e[2001];
int len = 0;
char s[30000] = { 0 };

int main(void) {
	int k, e;
	fgets(s, 30000, stdin);
	int len_s = strlen(s) - 1;

	int flag = 0;
	for (int i = 0; i < len_s;) {
		if (s[i] != ' ') {
			int j;
			for (j = i + 1; j < len_s&&s[j] != ' '; j++)
				;
			char tmp[10] = { 0 }; int len_tmp = 0;
			for (int k = i; k < j; k++) {
				tmp[len_tmp++] = s[k];
			}
			if (flag == 0) {
				arr_k[len] = atoi(tmp);
				flag = 1;
			}
			else {
				arr_e[len++] = atoi(tmp);
				flag = 0;
			}
			i = j+1;
		}
		else
			i++;
	}
	int count = 0;
	for (int i = 0; i < len; i++) {
		arr_k[i] = arr_k[i] * arr_e[i];
		if(arr_e[i]!=0)
			arr_e[i] -= 1;
		if (arr_k[i] == 0 && arr_e[i] == 0) {
			continue;
		}
		count++;
		if (count == 1) {
			printf("%d %d", arr_k[i], arr_e[i]);
		}
		else {
			printf(" %d %d", arr_k[i], arr_e[i]);
		}
	}
	if (count == 0)
		printf("0 0");

	return 0;
}
*/