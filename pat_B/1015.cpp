/*
#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int id;
	int d;
	int c;
}arr_stu[100000];
int m = 0;

int cmp(const void* v1, const void* v2) {
	struct Student* s1 = (struct Student*)v1;
	struct Student* s2 = (struct Student*)v2;
	int tmp = (s2->d + s2->c) - (s1->d + s1->c);
	if (tmp > 0) {
		return 1;
	}
	else if (tmp < 0) {
		return -1;
	}
	else {
		int d = s2->d - s1->d;
		if (d > 0) {
			return 1;
		}
		else if (d < 0) {
			return -1;
		}
		else {
			return s1->id - s2->id;
		}
	}
}

int main(void) {
	int n, l, h;
	scanf("%d %d %d", &n, &l, &h);
	for (int i = 0; i < n; i++) {
		int id, d, c;
		scanf("%d %d %d", &id, &d, &c);
		if (d >= l && c >= l) {
			arr_stu[m].id = id;
			arr_stu[m].d = d;
			arr_stu[m].c = c;
			m++;
		}
	}

	struct Student* arr_stu_1 = (struct Student*)malloc(m * sizeof(struct Student)); int len1 = 0;
	struct Student* arr_stu_2 = (struct Student*)malloc(m * sizeof(struct Student)); int len2 = 0;
	struct Student* arr_stu_3 = (struct Student*)malloc(m * sizeof(struct Student)); int len3 = 0;
	struct Student* arr_stu_4 = (struct Student*)malloc(m * sizeof(struct Student)); int len4 = 0;

	for (int i = 0; i < m; i++) {
		if (arr_stu[i].d >= h && arr_stu[i].c >= h) {
			arr_stu_1[len1++] = arr_stu[i];
		}
		else if (arr_stu[i].d >= h && arr_stu[i].c < h) {
			arr_stu_2[len2++] = arr_stu[i];
		}
		else if (arr_stu[i].d < h && arr_stu[i].c < h && arr_stu[i].d >= arr_stu[i].c) {
			arr_stu_3[len3++] = arr_stu[i];
		}
		else {
			arr_stu_4[len4++] = arr_stu[i];
		}
	}
	qsort(arr_stu_1, len1, sizeof(struct Student), cmp);
	qsort(arr_stu_2, len2, sizeof(struct Student), cmp);
	qsort(arr_stu_3, len3, sizeof(struct Student), cmp);
	qsort(arr_stu_4, len4, sizeof(struct Student), cmp);

	printf("%d\n", m);
	for (int i = 0; i < len1; i++) {
		printf("%d %d %d\n", arr_stu_1[i].id, arr_stu_1[i].d, arr_stu_1[i].c);
	}
	for (int i = 0; i < len2; i++) {
		printf("%d %d %d\n", arr_stu_2[i].id, arr_stu_2[i].d, arr_stu_2[i].c);
	}
	for (int i = 0; i < len3; i++) {
		printf("%d %d %d\n", arr_stu_3[i].id, arr_stu_3[i].d, arr_stu_3[i].c);
	}
	for (int i = 0; i < len4; i++) {
		printf("%d %d %d\n", arr_stu_4[i].id, arr_stu_4[i].d, arr_stu_4[i].c);
	}

	free(arr_stu_1);
	free(arr_stu_2);
	free(arr_stu_3);
	free(arr_stu_4);

	return 0;
}
*/