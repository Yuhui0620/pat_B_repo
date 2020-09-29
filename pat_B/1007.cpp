/*
#include <stdio.h>

int flag_prime[100000] = { 0 };
int n_prime_pair = 0;

void init() {
	for (int i = 2; i < 100000; i++) {
		if (flag_prime[i] == 1) {
			continue;
		}
		for (int j = 2; i*j < 100000; j++) {
			flag_prime[i*j] = 1;
		}
	}
}

int main(void) {
	int n;
	init();
	scanf("%d", &n);
	for (int i = 2; i + 2 <= n; i++) {
		if (flag_prime[i] == 0 && flag_prime[i + 2] == 0) {
			n_prime_pair++;
		}
	}

	printf("%d", n_prime_pair);

	return 0;
}
*/