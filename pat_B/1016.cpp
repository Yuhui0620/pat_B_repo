/*
#include <stdio.h>

int main(void) {
	int a, da, b, db;
	scanf("%d %d %d %d", &a, &da, &b, &db);

	int pa = 0, pb = 0;
	while (a != 0) {
		int tmp = a % 10;
		if (tmp == da) {
			pa = pa * 10 + tmp;
		}
		a /= 10;
	}
	while (b != 0)
	{
		int tmp = b % 10;
		if (tmp == db) {
			pb = pb * 10 + tmp;
		}
		b /= 10;
	}
	printf("%d", pa + pb);

	return 0;
}
*/