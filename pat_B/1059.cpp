/*
#include <stdio.h>
#include <math.h>

int notPrime[10001] = { 0 };
int reward[10000] = { 0 };
int flagOccur[10000] = { 0 };
int flagGet[10000] = { 0 };

void init() {
	notPrime[0] = notPrime[1] = 1;
	for (int i = 2; i < 10001; i++) {
		if (notPrime[i] == 1) {
			continue;
		}
		for (int j = 2; i*j < 10001; j++) {
			notPrime[i*j] = 1;
		}
	}
}

int main(void) {
	init();

	int n;
	scanf("%d", &n);
	int id;
	for (int i = 1; i <= n; i++) {
		scanf("%04d", &id);
		flagOccur[id] = 1;
		if (i == 1) {
			reward[id] = 2;
		}
		else {
			if (!notPrime[i]) {
				reward[id] = 1;
			}
		}
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%04d", &id);
		printf("%04d: ",id);
		if (!flagOccur[id]) {
			printf("Are you kidding?\n");
			continue;
		}
		if (flagGet[id]) {
			printf("Checked\n");
			continue;
		}
		if (reward[id] == 0) {
			printf("Chocolate\n");
		}
		else if (reward[id] == 1) {
			printf("Minion\n");
		}
		else {
			printf("Mystery Award\n");
		}
		flagGet[id] = 1;
	}

	return 0;
}
*/