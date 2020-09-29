/*
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int say_a, do_a, say_b, do_b;
	int record_a = 0, record_b = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &say_a, &do_a, &say_b, &do_b);
		int sum = say_a + say_b;
		if (do_a == sum && do_b != sum) {
			record_b += 1;
		}
		else if (do_b == sum && do_a != sum) {
			record_a += 1;
		}
	}

	printf("%d %d", record_a, record_b);

	return 0;
}
*/