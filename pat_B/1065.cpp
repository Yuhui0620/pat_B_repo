/*
#include <stdio.h>

int pairs[100000] = { 0 }; //pairs下标和值代表了这对伴侣的id

void init() {
	for (int i = 0; i < 100000; i++) {
		pairs[i] = -1;
	}
}

int main(void) {
	init();

	int n, m;
	scanf("%d", &n);
	int p1, p2;
	for (int i = 0; i < n; i++) {
		scanf("%05d %05d", &p1, &p2);
		pairs[p1] = p2;
		pairs[p2] = p1;
	}
	scanf("%d", &m);
	int attend;
	int count = 0;
	for (int i = 0; i < m; i++) {
		scanf("%05d", &attend);
		int cp = pairs[attend];
		pairs[attend] = -2;
		count++;
		if (cp != -1) {
			if (pairs[cp] == -2) {
				pairs[cp] = pairs[attend] = -3;
				count -= 2;
			}
		}
	}
	printf("%d\n", count);
	for (int i = 0,j=0; i < 100000; i++) {
		if(pairs[i]==-2){
			j++;
			if (j == 1)
				printf("%05d", i);
			else
				printf(" %05d", i);
		}
	}
	return 0;
}
*/