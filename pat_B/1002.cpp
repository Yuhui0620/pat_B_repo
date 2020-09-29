/*
#include <stdio.h>
#include <string.h>

char arr[200] = { 0 };
char num_s[10] = { 0 };
char name[10][5] = { {"ling"},{"yi"},{"er"},{"san"},{"si"},{"wu"},{"liu"},{"qi"},{"ba"},{"jiu"} };


int main(void) {
	scanf("%s", &arr);
	int len = strlen(arr);
	int sum = 0;
	for (int i = 0; i < len; i++) {
		sum += arr[i] - '0';
	}
	sprintf(num_s, "%d", sum);
	int len_sum = strlen(num_s);
	for (int i = 0; i < len_sum; i++) {
		if (i == 0)
			printf("%s", name[num_s[i] - '0']);
		else
			printf(" %s", name[num_s[i] - '0']);
	}

	return 0;
}
*/