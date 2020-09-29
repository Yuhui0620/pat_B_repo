/*
#include <stdio.h>

int flag_empty[1000] = { 0 };
int flag_maybe_empty[1000] = { 0 };

int main(void) {
	int n, D;
	double e;
	scanf("%d %lf %d", &n, &e, &D);
	for (int i = 0; i < n; i++) {
		int day;
		scanf("%d", &day);
		int count_less = 0;
		double eletric;
		for (int j = 0; j < day; j++) {
			scanf("%lf", &eletric);
			if (eletric < e) {
				count_less++;
			}
		} 
		if (count_less > day / 2) {
			flag_maybe_empty[i] = 1;
		}
		if (flag_maybe_empty[i] == 1 && day > D) {
			flag_empty[i] = 1;
			flag_maybe_empty[i] = 0;
		}
	}
	double ratio_maybe_empty, ratio_empty;
	int count_empty = 0, count_maybe_empty = 0;
	for (int i = 0; i < n; i++) {
		if (flag_empty[i])
			count_empty++;
		if (flag_maybe_empty[i])
			count_maybe_empty++;
	}
	ratio_empty = (double)count_empty / n;
	ratio_maybe_empty = (double)count_maybe_empty / n;
	ratio_empty *= 100;
	ratio_maybe_empty *= 100;
	printf("%.1lf%% %.1lf%%", ratio_maybe_empty, ratio_empty);

	return 0;
}
*/