/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char s[101];

int isLegal1(int len) {
	for (int i = 0; i < len; i++) {
		if (s[i] != 'P' && s[i] != 'A' && s[i] != 'T') {
			return 0;
		}
	}
	return 1;
}
*/
/*
void compress(int len) {
	for (int i = 0; i < len;) {
		if (s[i] == 'A') {
			int j = i + 1;
			for (; j < len && s[j] == 'A'; j++)
				;
			if (j != i + 1) {
				s[j - 1] = '#';
				i = j;
			}
			else
				i++;
		}
		else
			i++;
	}
	for (int i = 0; i < len;) {
		if (s[i] == '#') {
			int j;
			for (j = i + 1; j <= len; j++) {
				s[j - 1] = s[j];
			}
			len--;
		}
		else
			i++;
	}
}
*/
/*
int findPAT(int len) {
	for (int i = 0; i < len-2; i++) {
		if (s[i] == 'P' && s[i+1] == 'A' && s[i+2] == 'T') {
			return 1;
		}
	}
	return 0;
}
*/
/*
int findPT(int len,int *index_firstP,int *index_lastT) {
	*index_firstP = -1; *index_lastT = -1;
	for (int i = 0; i < len; i++) {
		if (s[i] == 'P') {
			*index_firstP = i;
			break;
		}
	}
	for (int i = len - 1; i >= 0; i--) {
		if (s[i] == 'T') {
			*index_lastT = i;
			break;
		}
	}
	if (*index_firstP != -1 && *index_lastT != -1)
		return 1;
	else
		return 0;
}

int main(void) {
	int n;
	scanf("%d",&n);
	while (n--) {
		scanf("%s", s);
		int len_s = strlen(s);
		if (!isLegal1(len_s)) {
			printf("NO\n");
			continue;
		}
		int index_firstP, index_lastT;
		if (!findPT(len_s, &index_firstP, &index_lastT) || index_firstP > index_lastT || index_firstP+1==index_lastT) {
			printf("NO\n");
			continue;
		}
		else {
			int onlyA = 1;
			for (int i = index_firstP + 1; i < index_lastT; i++) {
				if (s[i] != 'A') {
					onlyA = 0;
					break;
				}
			}
			if (!onlyA) {
				printf("NO\n");
				continue;
			}
			int lena = index_firstP; int lenb = index_lastT - index_firstP - 1; int lenc = len_s - 1 - index_lastT;
			if (lena*lenb != lenc) {
				printf("NO\n");
				continue;
			}
			printf("YES\n");
		}
	}
	return 0;
}
*/