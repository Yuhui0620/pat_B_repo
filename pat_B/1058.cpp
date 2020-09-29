/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int right_answer[101][5] = { 0 };
int n_choice_total[101] = { 0 };
int score_total[101] = { 0 };
int score_students[1000] = { 0 };
int countWrong[101] = { 0 };

int main(void) {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int score, n_choice, n_correct;
		cin >> score >> n_choice >> n_correct;
		score_total[i] = score;
		n_choice_total[i] = n_choice;
		for (int j = 0; j < n_correct; j++) {
			char answer;
			cin >> answer;
			right_answer[i][answer - 'a'] = 1;
		}
	}
	getchar();
	for (int i = 0; i < n; i++) {
		string line;
		getline(cin, line);
		int len_line = line.size();
		// 因为输入是以（）为单位，所以可以将其替换成空格后再进行字符串输入
		for (int j = 0; j < len_line; j++) {
			if (line[j] == '(' || line[j] == ')')
				line[j] = ' ';
		}
		istringstream input(line);
		for (int j = 1; j <= m; j++) {
			int n_select;
			input >> n_select;
			int answers[5] = { 0 };
			for (int k = 0; k < n_select; k++) {
				char answer;
				input >> answer;
				answers[answer - 'a'] = 1;
			}

			int flagCorrect = 1;
			for (int k = 0; k < 5; k++) {
				if (answers[k] != right_answer[j][k]) {
					flagCorrect = 0;
					break;
				}
			}
			if (flagCorrect) {
				score_students[i] += score_total[j];
			}
			else {
				countWrong[j]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", score_students[i]);
	}
	int mostWrong = 0;
	for (int i = 1; i <= m; i++) {
		if (countWrong[i] > mostWrong) {
			mostWrong = countWrong[i];
		}
	}
	if (mostWrong == 0) {
		printf("Too simple");
	}
	else {
		printf("%d", mostWrong);
		for (int i = 1; i <= m; i++) {
			if (mostWrong == countWrong[i]) {
				printf(" %d", i);
			}
		}
	}

	return 0;
}
*/