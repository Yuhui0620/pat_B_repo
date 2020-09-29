/*
#include <stdio.h>
#include <stdlib.h>

struct People
{
	int y;
	int m;
	int d;
	char name[10];
}arr_peo[100000];

int isLegal1(int pos) {
	if (arr_peo[pos].y < 1814)
		return 0;
	else if (arr_peo[pos].y > 1814)
		return 1;
	else {
		if (arr_peo[pos].m < 9)
			return 0;
		else if (arr_peo[pos].m > 9)
			return 1;
		else {
			if (arr_peo[pos].d < 6)
				return 0;
			else
				return 1;
		}
	}
}

int isLegal2(int pos) {
	if (arr_peo[pos].y > 2014)
		return 0;
	else if (arr_peo[pos].y < 2014)
		return 1;
	else {
		if (arr_peo[pos].m > 9)
			return 0;
		else if (arr_peo[pos].m < 9)
			return 1;
		else {
			if (arr_peo[pos].d > 6)
				return 0;
			else
				return 1;
		}
	}
}

int cmp(const void* v1, const void* v2) {
	People* p1 = (People*)v1;
	People* p2 = (People*)v2;
	if (p1->y < p2->y) {
		return -1;
	}
	else if (p1->y > p2->y) {
		return 1;
	}
	else {
		if (p1->m < p2->m) {
			return -1;
		}
		else if (p1->m > p2->m) {
			return 1;
		}
		else {
			if (p1->d < p2->d) {
				return -1;
			}
			else if (p1->d > p2->d) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	char name[10] = { 0 };
	int y, m, d;
	for (int i = 0; i < n; i++) {
		scanf("%s %04d/%02d/%02d", &arr_peo[i].name, &arr_peo[i].y, &arr_peo[i].m, &arr_peo[i].d);
	}

	qsort(arr_peo, n, sizeof(People), cmp);
	
	int index_youngest = -1; int index_eldest = -1;
	for (int i = 0; i < n; i++) {
		if (isLegal1(i) && isLegal2(i)) {
			index_youngest = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (isLegal1(i) && isLegal2(i)) {
			index_eldest = i;
			break;
		}
	}
	int count_legal = index_eldest - index_youngest + 1;
	if (index_eldest==-1 && index_youngest==-1)
		printf("0");
	else {
		printf("%d %s %s", count_legal, arr_peo[index_youngest].name, arr_peo[index_eldest].name);
	}

	return 0;
}
*/