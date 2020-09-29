/*
#include <stdio.h>

int flag_prime[1000000] = { 0 };
int n_prime = 0;
void init(int m,int n,int *index1,int *index2) {
	for (int i = 2; i < 10000; i++) {
		if (flag_prime[i] == 1) {
			continue;
		}
		n_prime++;
		if (n_prime == m) {
			*index1 = i;
		}
		if (n_prime == n) {
			*index2 = i;
		}
		for (int j = 2; i*j < 10000; j++) {
			flag_prime[i*j] = 1;
		}
	}
}

int main(void) {
	int m, n,index1,index2;
	scanf("%d %d", &m, &n);
	init(m,n,&index1,&index2);

	int count = 0;
	for (int i = index1; i <= index2; i++) {
		if (flag_prime[i] == 0) {
			count++;
			if(count==1)
				printf("%d", i);
			else if(count!=1) {
				printf(" %d", i);
			}
			if (count == 10) {
				printf("\n");
				count = 0;
			}
		}
	}
	return 0;
}
*/