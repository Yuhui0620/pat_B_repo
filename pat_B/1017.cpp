/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

char s[1001] = { 0 };

struct BigInt
{
	int arrInt[1000];
	int len_arr;
	void init(int len) {                   //倒置放置便于运算的处理（部分商可能产生零）
		len_arr = 0;
		memset(arrInt,0,1000*sizeof(int));

		for (int i = len-1; i >= 0; i--) {
			arrInt[len_arr++] = s[i] - '0';
		}
	}
	int div(int b) {
		int q = 0, r = 0;
		for (int i = len_arr-1; i >= 0; i--) {
			q = (r * 10 + arrInt[i]) / b;
			r = (r * 10 + arrInt[i]) % b;
			
			arrInt[i] = q;
		}
		int newLen;
		for (int i = 0; i < 1000; i++) {
			if (arrInt[i] != 0)
				newLen = i;
		}
		len_arr = newLen + 1;

		return r;
	}
	void display() {
		for (int i = len_arr - 1; i >= 0; i--) {
			printf("%d", arrInt[i]);
		}
	}
};

int main(void) {
	int b;
	scanf("%s %d", &s, &b);
	int len_s = strlen(s);

	BigInt a;
	a.init(len_s);
	int r = a.div(b);

	a.display();
	printf(" ");
	printf("%d", r);

	return 0;
}
*/