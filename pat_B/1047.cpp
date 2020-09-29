/*
#include <stdio.h>

int record[10001] = { 0 };

int main(void) {
	int n;
	scanf("%d", &n);
	int num_team, num_member, score;
	int maxScore = -1; int championTeam = -1;
	for (int i = 0; i < n; i++) {
		scanf("%d-%d %d", &num_team, &num_member, &score);
		record[num_team] += score;
		if (record[num_team] > maxScore) {
			maxScore = record[num_team];
			championTeam = num_team;
		}
	}

	printf("%d %d", championTeam, maxScore);

	return 0;
}
*/