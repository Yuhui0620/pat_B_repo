/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char s[82] = { 0 };
	fgets(s, 82, stdin);
	char result[82];
	int len = strlen(s) - 1;
	for (int i = len - 1; i >= 0;) {
		if (s[i] != ' ') {
			int j;
			for (j = i - 1; j >= 0 && s[j] != ' '; j--)
				;
			char tmp[82] = { 0 }; int len_tmp = 0;
			for (int k = j + 1; k <= i; k++) {
				tmp[len_tmp++] = s[k];
			}
			if (j == -1) {
				printf("%s", tmp);
			}
			else {
				printf("%s ", tmp);
			}
			i = j - 1;
		}
	}

	return 0;
}
*/