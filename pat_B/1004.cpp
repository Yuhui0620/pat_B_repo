/*
#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[20];
	char id[20];
	int score;
};

int main(void) {
	int n;
	scanf("%d", &n);
	struct Student* arr_stu = (struct Student*)malloc(n*sizeof(struct Student));
	for (int i = 0; i < n; i++) {
		scanf("%s %s %d", &arr_stu[i].name, &arr_stu[i].id, &arr_stu[i].score);
	}
	int score_max = -1; int score_min = 101;
	int index_max = -1; int index_min = -1;
	for (int i = 0; i < n; i++) {
		if (arr_stu[i].score > score_max) {
			index_max = i;
			score_max = arr_stu[i].score;
		}
		if (arr_stu[i].score < score_min) {
			index_min = i;
			score_min = arr_stu[i].score;
		}
	}
	printf("%s %s\n", arr_stu[index_max].name, arr_stu[index_max].id);
	printf("%s %s\n", arr_stu[index_min].name, arr_stu[index_min].id);

	free(arr_stu);

	return 0;
}
*/