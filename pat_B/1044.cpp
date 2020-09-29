/*
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <ctype.h>

using namespace std;

string bit_1[13] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
string bit_2[13] = { "tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };

int main(void) {
	int n;
	cin >> n;
	getchar();
	string line;
	for (int i = 0; i < n; i++) {
		getline(cin, line);
		if (isdigit(line[0])) {
			int num_earth = atoi(line.c_str());
			int r = num_earth % 13;
			int d = num_earth / 13;
			if (d != 0) {
				cout << bit_2[d];
				if (r != 0) {
					cout << " " << bit_1[r];
				}
				cout << endl;
			}
			else {
				cout << bit_1[r] << endl;
			}
		}
		else {
			istringstream input(line);
			string s;
			int num_earth = 0;
			while (input >> s) {
				for (int i = 0; i < 13; i++) {
					if (s == bit_1[i]) {
						num_earth += i;
						break;
					}
					if (s == bit_2[i]) {
						num_earth += 13 * i;
						break;
					}
				}
			}
			cout << num_earth << endl;
		}
	}

	return 0;
}
*/