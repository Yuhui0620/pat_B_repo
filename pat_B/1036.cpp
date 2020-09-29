/*
#include <stdio.h>

int main(void) {
	char c;
	int n;
	scanf("%d %c", &n, &c);
	int col = n; int row;
	double tmp = col * 0.5;
	double decim = tmp - int(tmp);
	if (decim >= 0.5)
		row = int(tmp) + 1;
	else
		row = int(tmp);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (i == 0 || i == row - 1) {
				printf("%c", c);
			}
			else {
				if (j == 0 || j == col - 1) {
					printf("%c", c);
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}

	return 0;
}
*/