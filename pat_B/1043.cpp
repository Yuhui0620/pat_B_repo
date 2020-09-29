/*
#include <stdio.h>
#include <string.h>

char str[10001] = { 0 };
char pos[6] = { 'P','A','T','e','s','t' };

int isEnd(int *record) {
	if (record[0] == 0 && record[1] == 0 && record[2] == 0 && record[3] == 0 && record[4] == 0 && record[5] == 0) {
		return 1;
	}
	return 0;
}
int main(void) {
	while (scanf("%s", &str) != EOF) {
		int record[6] = { 0 };
		for (int i = 0; i < strlen(str); i++) {
			char cur = str[i];
			for (int j = 0; j < 6; j++) {
				if (pos[j] == cur) {
					record[j]++;
					break;
				}
			}
		}
		while (!isEnd(record)) {
			for (int i = 0; i < 6; i++) {
				if (record[i] != 0) {
					printf("%c", pos[i]);
					record[i]--;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
*/