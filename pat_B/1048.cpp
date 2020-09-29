/*
#include <stdio.h>
#include <string.h>

char A[101] = { 0 };
char B[101] = { 0 };
char result[101] = { 0 };

void reverse(char *arr, int len) {
	for (int i = 0, j = len - 1; i < j; i++, j--) {
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int main(void) {
	scanf("%s %s", &A, &B);
	int len_A = strlen(A);
	int len_B = strlen(B);
	reverse(A, len_A);
	reverse(B, len_B);
	while (len_A > len_B)
	{
		B[len_B++] = '0';
	}
	while (len_B > len_A)
	{
		A[len_A++] = '0';
	}
	int i;
	for (i = 0; i < len_A; i++) {
		if ((i+1) % 2 == 0) {
			int tmp = (B[i] - '0') - (A[i] - '0');
			if (tmp < 0) {
				tmp += 10;
				if (tmp == 10) {
					result[i] = 'J';
				}
				else if (tmp == 11) {
					result[i] = 'Q';
				}
				else if (tmp == 12) {
					result[i] = 'K';
				}
				else {
					result[i] = '0' + tmp;
				}
			}
			else {
				result[i] = '0' + tmp;
			}
		}
		else {
			int tmp = ((A[i] - '0') + (B[i] - '0')) % 13;
			if (tmp == 10) {
				result[i] = 'J';
			}
			else if (tmp == 11) {
				result[i] = 'Q';
			}
			else if(tmp == 12){
				result[i] = 'K';
			}
			else {
				result[i] = '0' + tmp;
			}
		}
	}
	for (int j=len_A-1; j >= 0; j--) {
		printf("%c", result[j]);
	}

	return 0;
}
*/
