/*
#include <stdio.h>
#include <string.h>

int record[10] = { 0 };
char s[1001] = { 0 };

int main(void) {
	scanf("%s", &s);
	int len = strlen(s);

	for (int i = 0; i < len; i++) {
		int num = s[i] - '0';
		record[num]++;
	}

	for (int i = 0; i < 10; i++) {
		if (record[i] == 0)
			continue;
		printf("%d:%d\n", i, record[i]);
	}

	return 0;
}
*/