/*
#include <stdio.h>
#include <string.h>

char correct[30] = { 0 };

int main(void) {
	int n;
	scanf("%s %d\n", &correct, &n);

	while (n--)
	{
		char input[30] = { 0 };
		fgets(input, 30, stdin);

		input[strlen(input) - 1] = '\0';
		if (strcmp("#", input) == 0)
			break;
		if (strcmp(input, correct) == 0) {
			printf("Welcome in\n");
			break;
		}
		else {
			printf("Wrong password: %s\n", input);
			if (n == 0) {
				printf("Account locked\n");
				break;
			}
		}
	}
	return 0;
}
*/