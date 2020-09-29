/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[100001] = { 0 };

int main(void) {
	fgets(s, 100001,stdin);
	int len_s = strlen(s);  //注意题目输入格式是否有换行符，没有的话不用减1就是输入字符串的长度
	int sum = 0;
	for (int i = 0; i < len_s; i++) {
		if (isupper(s[i])) {
			sum += s[i] - 'A' + 1;
		}
		else if (islower(s[i])) {
			sum += s[i] - 'a' + 1;
		}
	}
	int countZeros = 0, countOnes = 0;
	while (sum != 0) {
		int r = sum % 2;
		if (r == 1) {
			countOnes++;
		}
		else {
			countZeros++;
		}
		sum /= 2;
	}
	printf("%d %d", countZeros, countOnes);

	return 0;
}
*/