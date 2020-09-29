/*
#include <stdio.h>
#include <string.h>

char s[100001] = { 0 };

int main(void) {
	scanf("%s", &s);
	int len_s = strlen(s);
	long long countP = 0;
	long long countPA = 0;
	long long countPAT = 0;
	for (int i = 0; i < len_s; i++) {
		if (s[i] == 'P') {
			countP++;
		}
		else if (s[i] == 'A') {
			countPA += countP;
		}
		else {
			countPAT += countPA;
		}
	}

	printf("%d", countPAT % 1000000007);
	return 0;
}
*/