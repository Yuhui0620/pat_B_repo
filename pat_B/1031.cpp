/*
#include <stdio.h>
#include <ctype.h>

char num[20] = { 0 };
int w[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char tran[11] = { '1','0','X','9','8','7','6','5','4','3','2' };

int isLegal() {
	int sum = 0;
	for (int i = 0; i < 17; i++) {
		if (!isdigit(num[i]))
			return 0;
		sum += (num[i] - '0')*w[i];
	}
	char last = tran[sum % 11];
	if (last != num[17])
		return 0;

	return 1;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s", &num);
		
		if (isLegal()) {
			count++;
			continue;
		}
		printf("%s\n", num);
	}
	if (count == n)
		printf("All passed");

	return 0;
}
*/