/*
#include <stdio.h>

char types[3] = { 'C','J','B' };
int record_win_A[3] = { 0 };
int record_win_B[3] = { 0 };
int record_A[3] = { 0 };
int record_B[3] = { 0 };

int main(void) {
	int n;
	scanf("%d\n", &n);                      //使用scanf会把换行符留在缓存，需要加上'\n'将它从输入流读出
	while (n--) {
		char type_a, type_b;
		scanf("%c %c\n", &type_a, &type_b);
		if (type_a == 'C' && type_b == 'J') {
			record_win_A[0]++;
			record_A[0]++;
			record_B[1]++;
		}
		else if (type_a == 'C'&& type_b == 'B') {
			record_win_B[2]++;
			record_A[1]++;
			record_B[0]++;
		}
		else if (type_a == 'C'&& type_b == 'C') {
			record_A[2]++;
			record_B[2]++;
		}
		else if (type_a == 'J'&& type_b == 'J') {
			record_A[2]++;
			record_B[2]++;
		}
		else if (type_a == 'J'&& type_b == 'C') {
			record_win_B[0]++;
			record_A[1]++;
			record_B[0]++;
		}
		else if (type_a == 'J'&& type_b == 'B') {
			record_win_A[1]++;
			record_A[0]++;
			record_B[1]++;
		}
		else if (type_a == 'B'&& type_b == 'B') {
			record_A[2]++;
			record_B[2]++;
		}
		else if (type_a == 'B'&& type_b == 'C') {
			record_win_A[2]++;
			record_A[0]++;
			record_B[1]++;
		}
		else if (type_a == 'B'&& type_b == 'J') {
			record_win_B[1]++;
			record_A[1]++;
			record_B[0]++;
		}
	}
	printf("%d %d %d\n", record_A[0], record_A[2], record_A[1]);
	printf("%d %d %d\n", record_B[0], record_B[2], record_B[1]);
	int index_max_A = -1; int maxA = -1;
	for (int i = 0; i < 3; i++) {
		if (record_win_A[i] > maxA) {
			index_max_A = i;
			maxA = record_win_A[i];
		}
		else if (record_win_A[i] == maxA) {
			index_max_A = types[index_max_A] < types[i] ? index_max_A : i;
		}
	}
	int index_max_B = -1; int maxB = -1;
	for (int i = 0; i < 3; i++) {
		if (record_win_B[i] > maxB) {
			index_max_B = i;
			maxB = record_win_B[i];
		}
		else if (record_win_B[i] == maxB) {
			index_max_B = types[index_max_B] < types[i] ? index_max_B : i;
		}
	}
	printf("%c %c", types[index_max_A], types[index_max_B]);

	return 0;
}
*/