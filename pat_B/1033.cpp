/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int record[200] = { 0 };
char str[100002] = { 0 };
char error[200] = { 0 };

int main(void) {
	fgets(error, 200, stdin);
	scanf("%s", str);
	int len_err, len_str;
	len_err = strlen(error);
	len_str = strlen(str);
	for (int i = 0; i<len_str; i++) {
		record[str[i]] = 1;
	}
	for (int i = 0; i < len_err - 1; i++) {
		char c_err = error[i];
		if ((c_err >= 'a' && c_err <= 'z') || (c_err >= 'A' && c_err <= 'Z')) {
			record[toupper(c_err)] = record[tolower(c_err)] = 0;
		}
		else if (c_err == '+') {
			for (int i = 'A'; i <= 'Z'; i++) {
				record[i] = 0;
			}
		}
		else {
			record[c_err] = 0;
		}
	}
	for (int i = 0; i < len_str; i++) {
		if (record[str[i]] == 1)
			printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}
*/