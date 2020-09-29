/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int record1[200] = { 0 };
int record2[200] = { 0 };

char s1[100] = { 0 };
char s2[100] = { 0 };
char order[200] = { 0 };
int len_occur = 0;

int main(void) {
	scanf("%s", &s1);
	scanf("%s", &s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	for (int i = 0; i < len1; i++) {
		if (isalpha(s1[i])) {
			s1[i] = toupper(s1[i]);
		}
		if (record1[s1[i]] == 0) {
			record1[s1[i]] = 1;
			order[len_occur++] = s1[i];
		}
	}
	for (int i = 0; i < len2; i++) {
		if (isalpha(s2[i])) {
			s2[i] = toupper(s2[i]);
		}
		record2[s2[i]] = 1;
	}
	for (int i = 0; i < len_occur; i++) {
		char c = order[i];
		if (record2[c] == 0) {
			printf("%c", c);
		}
	}

	return 0;
}
*/