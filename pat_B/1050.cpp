/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <cmath>

using namespace std;

int arr[10000] = { 0 };
char dir[4][10] = { "right","down","left","up" };

void sort(int round,int len) {
	for (int i = 0; i < round; i++) {
		vector<vector<int>> record(10);
		for (int j = 0; j < len; j++) {
			int tmp = arr[j];
			for (int k = 0; k < i; k++) {
				tmp /= 10;
			}
			tmp %= 10;
			record[tmp].push_back(arr[j]);
		}
		int index = 0;
		for (int j = 9; j >= 0; j--) {
			int size = record[j].size();
			for (int k = 0; k < size; k++) {
				arr[index++] = record[j][k];
			}
		}
	}
}

int cmp(const void* v1, const void* v2) {
	return *(int*)v2 - *(int*)v1;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int maxNum = -1;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > maxNum) {
			maxNum = arr[i];
		}
	}
	int round = 0;
	while (maxNum != 0) {
		round++;
		maxNum /= 10;
	}
	sort(round, n);

	int row, col;
	int span = 100000;
	for (int i = sqrt(n); i > 0; i--) {
		if (n % i == 0) {
			int j = n / i;
			int tmp = i - j > 0 ? i - j : j - i;
			if (tmp < span) {
				span = tmp;
				row = i - j > 0 ? i : j;
				col = i - j > 0 ? j : i;
			}
		}
	}
	
	int curDir = 0, curRow = 0, curCol = 0;
	int **matrix = new int*[row];
	int **flag = new int*[row];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col];
		flag[i] = new int[col];
	}
	matrix[0][0] = arr[0];
	flag[0][0] = 1;
	for (int i = 1; i < n; i++) {
		if (strcmp(dir[curDir], "right") == 0) {
			if (curCol + 1 >= col || flag[curRow][curCol + 1] == 1) {
				matrix[curRow + 1][curCol] = arr[i];
				flag[curRow + 1][curCol] = 1;
				curRow += 1;
				curDir++;
				curDir %= 4;
			}
			else {
				matrix[curRow][curCol+1] = arr[i];
				flag[curRow][curCol+1] = 1;
				curCol += 1;
			}
		}
		else if (strcmp(dir[curDir], "down") == 0) {
			if (curRow + 1 >= row || flag[curRow + 1][curCol] == 1) {
				matrix[curRow][curCol - 1] = arr[i];
				flag[curRow][curCol - 1] = 1;
				curCol -= 1;
				curDir++;
				curDir %= 4;
			}
			else {
				matrix[curRow + 1][curCol] = arr[i];
				flag[curRow + 1][curCol] = 1;
				curRow += 1;
			}
		}
		else if (strcmp(dir[curDir], "left") == 0) {
			if (curCol - 1 < 0 || flag[curRow][curCol - 1] == 1) {
				matrix[curRow - 1][curCol] = arr[i];
				flag[curRow - 1][curCol] = 1;
				curRow -= 1;
				curDir++;
				curDir %= 4;
			}
			else {
				matrix[curRow][curCol - 1] = arr[i];
				flag[curRow][curCol - 1] = 1;
				curCol -= 1;
			}
		}
		else {
			if (curRow - 1 < 0 || flag[curRow - 1][curCol] == 1) {
				matrix[curRow][curCol + 1] = arr[i];
				flag[curRow][curCol + 1] = 1;
				curCol += 1;
				curDir++;
				curDir %= 4;
			}
			else {
				matrix[curRow - 1][curCol] = arr[i];
				flag[curRow - 1][curCol] = 1;
				curRow -= 1;
			}
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (j == 0) {
				printf("%d", matrix[i][j]);
			}
			else {
				printf(" %d", matrix[i][j]);
			}
		}
		printf("\n");
	}

	for (int i = 0; i < row; i++) {
		delete(matrix[i]);
		delete(flag[i]);
	}
	delete matrix;
	delete flag;

	return 0;
}
*/