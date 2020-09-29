/*
#include <stdio.h>

int record[100] = { 0 };
int flag[100] = { 0 };

int main(void) {
	int n;
	scanf("%d", &n);
	int num;
	int count = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		int sum = 0;
		while (num != 0)
		{
			sum += num % 10;
			num /= 10;
		}
		record[sum]++;
		if(record[sum] >= 1 && !flag[sum]){
			count++;
			flag[sum] = 1;
		}
	}
	printf("%d\n", count);
	for (int i = 0,j=0; i < 100; i++) {
		if (flag[i]) {
			j++;
			if (j == 1)
				printf("%d", i);
			else
				printf(" %d",i);
		}
	}
	return 0;
}
*/