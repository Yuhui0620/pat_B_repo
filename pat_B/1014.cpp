/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char s1[70] = { 0 };
char s2[70] = { 0 };
char s3[70] = { 0 };
char s4[70] = { 0 };
char name_week[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};


int main(void) {
	scanf("%s", &s1);
	scanf("%s", &s2);
	scanf("%s", &s3);
	scanf("%s", &s4);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len3 = strlen(s3);
	int len4 = strlen(s4);

	int count_pair = 0;
	int index_day = -1;
	int hour = -1;
	for (int i = 0; i < len1 && i < len2; i++) {
		if (s1[i] == s2[i] && count_pair == 0 && s1[i] >= 'A' && s1[i] <= 'G') {
			index_day = s1[i] - 'A';
			count_pair++;
		}
		else if (count_pair==1 && s1[i]==s2[i]) {
			if (s1[i] >= 'A' && s1[i] <= 'N') {
				hour = s1[i] - 'A' + 10;
				break;
			}
			else if (s1[i] >= '0' && s1[i] <= '9') {
				hour = s1[i] - '0';
				break;
			}
		}
	}

	int minute = -1;
	for (int i = 0; i < len3 && i < len4; i++) {
		if (s3[i] == s4[i] && isalpha(s3[i])) {
			minute = i;
			break;
		}
	}

	printf("%s %02d:%02d", name_week[index_day], hour, minute);

	return 0;
}
*/