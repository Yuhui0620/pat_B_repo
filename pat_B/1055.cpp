/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Person
{
	char name[10];
	int height;
}arr[10000];

//cmp¾¡Á¿ÓÃstrcmp
int cmp(const void* v1, const void* v2) {
	Person *p1 = (Person*)(v1);
	Person *p2 = (Person*)(v2);
	if (p1->height != p2->height) {
		return p2->height - p1->height;
	}
	else {
		return strcmp(p1->name, p2->name);
	}
}

Person tmp[10000];

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%s %d",&arr[i].name, &arr[i].height);
	}
	qsort(arr, n, sizeof(Person), cmp);
	
	int n_line = n / k;
	int redunt = n % n_line;
	for (int i = 0,pos_beg=0; i < k; i++) {
		int count = n_line;
		if (i == 0) {
			count = n_line + redunt;
		}
		int pos_mid = pos_beg + count / 2;
		tmp[pos_mid] = arr[pos_beg];
		for (int j = 1, pos_next_op = -1, pos_next_step = 1,pos_pre=pos_mid; j < count; j++, pos_pre = pos_pre + pos_next_op*pos_next_step,pos_next_op *= -1,pos_next_step++) {
			tmp[pos_pre + pos_next_op*pos_next_step] = arr[pos_beg+j];
		}

		for (int j = pos_beg; j < pos_beg+count; j++) {
			if (j == pos_beg) {
				printf("%s", tmp[j].name);
			}
			else {
				printf(" %s", tmp[j].name);
			}
		}
		printf("\n");
		pos_beg += count;
	}

	return 0;
}
*/