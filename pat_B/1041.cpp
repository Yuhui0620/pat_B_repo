/*
#include <stdio.h>
#include <string.h>

struct Student
{
	char id[17];
	int seat_machine;
	int seat_exam;
}arr_Stud[1000];

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d %d",&arr_Stud[i].id, &arr_Stud[i].seat_machine, &arr_Stud[i].seat_exam);
	}

	int m;
	scanf("%d", &m);
	int seat_check;
	while (m--)
	{
		scanf("%d", &seat_check);
		for (int i = 0; i < n; i++) {
			if (arr_Stud[i].seat_machine == seat_check) {
				printf("%s %d\n", arr_Stud[i].id, arr_Stud[i].seat_exam);
				break;
			}
		}
	}

	return 0;
}
*/