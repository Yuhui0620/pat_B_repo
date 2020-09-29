/*
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;

int isLegal(string s) {
	int i = 0;
	int flagPoint = 0;
	int countDecim = 0;
	if (s[0] == '-')
		i = 1;
	int len_s = s.size();
	for (; i < len_s; i++) {
		if (!isdigit(s[i]) && s[i] != '.')
			return 0;
		else if (s[i] == '.' && flagPoint == 0)
			flagPoint = 1;
		else if (s[i] == '.' && flagPoint == 1)
			return 0;
		else if (isdigit(s[i]) && flagPoint == 1) {
			countDecim++;
			if (countDecim > 2)
				return 0;
		}
	}
	double num = atof(s.c_str());
	if (num > 1000 || num < -1000)
		return 0;
	return 1;
}

int main(void) {
	int n;
	cin >> n;
	int count_leagl = 0;
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (!isLegal(s)) {
			cout << "ERROR: " << s << " is not a legal number" << endl;
		}
		else {
			count_leagl++;
			double num = atof(s.c_str());
			sum += num;
		}
	}
	if (count_leagl == 0) {
		cout << "The average of 0 numbers is Undefined" << endl;
	}
	else if(count_leagl == 1){
		printf("The average of 1 number is %.2lf\n", sum);
	}
	else
	{
		double result = sum / count_leagl;
		printf("The average of %d numbers is %.2lf\n", count_leagl, result);
	}

	return 0;
}
*/