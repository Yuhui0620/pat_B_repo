/*
#include <stdio.h>
#include <string.h>

int record[200] = { 0 };
char offer[1001] = { 0 };
char need[1001] = { 0 };


int main(void) {
	scanf("%s", &offer);
	scanf("%s", &need);
	int len_need = strlen(need);
	int len_offer = strlen(offer);
	for (int i = 0; i < len_need; i++) {
		record[need[i]]++;
	}
	for (int i = 0; i < len_offer; i++) {
		record[offer[i]]--;
	}

	int redunt = 0, needmore = 0;
	for (int i = 0; i < 200; i++) {
		if (record[i] > 0)
			needmore += record[i];
		else
			redunt += record[i];
	}
	redunt = -redunt;

	if (needmore != 0) {
		printf("No %d", needmore);
	}
	else {
		printf("Yes %d", redunt);
	}

	return 0;
}
*/