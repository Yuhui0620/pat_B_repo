/*
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<string> hand;
vector<string> eye;
vector<string> mouth;

void extract(string type,string s) {
	int len = s.size();
	for (int i = 0; i < len;) {
		if (s[i] == '[') {
			int j;
			for (j = i + 1; j < len && s[j] != ']'; j++)
				;
			string ch = s.substr(i + 1, j - i - 1);
			if (type == "hand") {
				hand.push_back(ch);
			}
			else if (type == "eye") {
				eye.push_back(ch);
			}
			else {
				mouth.push_back(ch);
			}
			i = j + 1;
		}
		else {
			i++;
		}
	}
}

int main(void) {
	string line_hand, line_eye, line_mouth;
	getline(cin, line_hand);
	getline(cin, line_eye);
	getline(cin, line_mouth);
	extract("hand", line_hand);
	extract("eye", line_eye);
	extract("mouth", line_mouth);

	int n;
	cin >> n;
	int lh, le, m, re, rh;
	for (int i = 0; i < n; i++) {
		cin >> lh >> le >> m >> re >> rh;
		lh--; le--; m--; re--; rh--;
		int size_hand = hand.size();
		int size_eye = eye.size();
		int size_mouth = mouth.size();
		if (lh < 0 || lh >=size_hand || rh < 0 || rh >= size_hand || le < 0 || le >= size_eye || re < 0 || re >= size_eye || m < 0 || m >= size_mouth) {
			cout << "Are you kidding me? @\\/@" << endl;
			continue;
		}
		cout << hand[lh] << "(" << eye[le] << mouth[m] << eye[re] << ")" << hand[rh] << endl;
	}

	return 0;
}
*/
