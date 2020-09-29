/*
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <string>

using namespace std;

int record[200] = { 0 };

int main(void) {
	string line;
	getline(cin, line);
	int maxCount = -1;
	int len_line = line.size();
	for (int i = 0; i < len_line; i++) {
		char c = tolower(line[i]);
		if (isalpha(c)) {
			record[c]++;
			if (record[c] > maxCount) {
				maxCount = record[c];
			}
		}
	}
	for (int i = 0; i < 200; i++) {
		if (record[i] == maxCount) {
			printf("%c %d", i, maxCount);
			break;
		}
	}

	return 0;
}
*/