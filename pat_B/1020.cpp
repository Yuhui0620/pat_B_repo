/*
#include <stdio.h>
#include <stdlib.h>

double total[1000] = { 0 };
double weight[1000] = { 0 };
double price[1000] = { 0 };
int flag[1000] = { 0 };

int main(void) {
	int n, need;
	scanf("%d %d\n", &n, &need);
	double w_total = 0;
	for (int i = 0; i < n; i++) {
		scanf("%lf", &weight[i]);
		w_total += weight[i];
	}
	for (int i = 0; i < n; i++) {
		scanf("%lf", &total[i]);
		price[i] = total[i] / weight[i];
	}

	double maxIncome = 0;
	while (need != 0 && w_total!=0) {
		int index_maxPrice = -1; double maxPrice = -1;
		for (int i = 0; i < n; i++) {
			if (flag[i])
				continue;
			if (price[i] > maxPrice) {
				index_maxPrice = i;
				maxPrice = price[i];
			}
		}
		flag[index_maxPrice] = 1;
		if (weight[index_maxPrice] <= need) {
			maxIncome += total[index_maxPrice];
			need -= weight[index_maxPrice];
			w_total -= weight[index_maxPrice];
		}
		else {
			maxIncome += need * price[index_maxPrice];
			w_total -= need;
			need = 0;
		}
	}

	printf("%.2lf", maxIncome);

	return 0;
}
*/