/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

using namespace std;
string arr[1001];
int main(void) {
	int m, step, beg;
	cin >> m >> step >> beg;
	map<string, int> flag;
	for (int i = 1; i <= m; i++) {
		string name;
		cin >> name;
		arr[i] = name;
		flag[name] = 0;
	}
	int count = 0;
	for (int i = beg; i <= m;) {
		if (!flag[arr[i]]) {
			count++;
			cout << arr[i] << endl;
			flag[arr[i]] = 1;
			i += step;
		}
		else {
			int flagNext = 0;
			for (int j = i + 1; j <= m; j++) {
				if (!flag[arr[j]]) {
					count++;
					flagNext = 1;
					cout << arr[j] << endl;
					flag[arr[j]] = 1;
					i = j + step;
					break;
				}
			}
			if (!flagNext)
				break;
		}
	}
	if (count == 0)
		cout << "Keep going..." << endl;
	return 0;
}
*/