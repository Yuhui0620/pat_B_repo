/*
#include <stdio.h>
#include <stdlib.h>

int cmpAcs(const void* v1, const void* v2) {
	return *(char*)v1 - *(char*)v2;
}

int cmpDes(const void* v1, const void* v2) {
	return *(char*)v2 - *(char*)v1;
}

int main(void) {
	char s[5];
	int n;
	scanf("%d", &n);
	sprintf(s, "%04d", n);
	char c = s[0]; int count = 0;
	for (int i = 0; i < 4; i++) {
		if (s[i] == c)
			count++;
	}
	if (count == 4) {
		printf("%s - %s = 0000", s, s);
	}
	else {
		int result;
		while (true) {
			qsort(s, 4, sizeof(char), cmpDes);
			int n1 = atoi(s);
			qsort(s, 4, sizeof(char), cmpAcs);
			int n2 = atoi(s);
			result = n1 - n2;
			sprintf(s, "%04d", result);
			printf("%04d - %04d = %04d\n", n1, n2, result);

			if (result == 6174)
				break;
		}
	}

	return 0;
}
*/