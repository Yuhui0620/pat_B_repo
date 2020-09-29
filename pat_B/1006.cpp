/*
#include <stdio.h>

char s[100] = { 0 };
int len = 0;

int main(void) {
	int n;
	scanf("%d", &n);
	int n1 = n % 10;
	n /= 10;
	int n2 = n % 10;
	n /= 10;
	int n3 = n % 10;
	for (int i = 0; i < n3; i++) {
		s[len++] = 'B';
	}
	for (int i = 0; i < n2; i++) {
		s[len++] = 'S';
	}
	for (int i = 1; i <= n1; i++) {
		s[len++] = i + '0';
	}

	printf("%s", s);

	return 0;
}
*/