/*
#include <stdio.h>

int scoreTotal[100] = { 0 };
int rightAnswer[100] = { 0 };

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &scoreTotal[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &rightAnswer[i]);
	}
	for (int i = 0; i < n; i++) {
		int score = 0;
		int answer;
		for (int j = 0; j < m; j++) {
			scanf("%d", &answer);
			if (answer == rightAnswer[j]) {
				score += scoreTotal[j];
			}
		}
		printf("%d\n", score);
	}
	return 0;
}
*/