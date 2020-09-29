/*
#include <stdio.h>
#include <string.h>

struct Node
{
	char address[6];
	int data;
	char next[6];
	void copy(Node *node) {
		strcpy(address, node->address);
		data = node->data;
		strcpy(next, node->next);
	}
	void display() {
		printf("%s %d %s\n", address, data, next);
	}
}list[100000];

void swapPos(int pos1, int pos2) {
	Node tmp;
	tmp.copy(&list[pos1]);
	list[pos1].copy(&list[pos2]);
	list[pos2].copy(&tmp);
}

int listSort(int len,char *firstAdd) {
	char add_cur[6] = { 0 };
	strcpy(add_cur, firstAdd);
	int pos = 0;
	int count_valid = 0;
	while (strcmp(add_cur, "-1") != 0) {
		count_valid++;
		for (int i = pos; i < len; i++) {
			if (strcmp(list[i].address, add_cur) == 0) {
				swapPos(pos, i);
				strcpy(add_cur,list[pos].next);
				pos++;
				break;
			}
		}
	}

	return count_valid;
}

void reverse(int len,int step) {
	for (int i = 0, j = i + step - 1; i < len && j < len; i = i + step, j = j + step) {
		int head = i;
		int rear = j;
		while (head < rear) {
			if (head + 1 == rear) {
				swapPos(head, rear);
				strcpy(list[rear].next, list[head].next);
				strcpy(list[head].next, list[rear].address);
				if (head - 1 >= 0) {
					strcpy(list[head - 1].next, list[head].address);
				}
				if (rear - 1 >= 0) {
					strcpy(list[rear - 1].next, list[rear].address);
				}
				head++;
				rear--;
			}
			else {
				swapPos(head, rear);
				char tmp[6] = { 0 };
				strcpy(tmp, list[head].next);
				strcpy(list[head].next, list[rear].next);
				strcpy(list[rear].next, tmp);
				if (head - 1 >= 0) {
					strcpy(list[head - 1].next, list[head].address);
				}
				if (rear - 1 >= 0) {
					strcpy(list[rear - 1].next, list[rear].address);
				}
				head++;
				rear--;
			}
		}
	}
}

int main(void) {
	int n, k;
	char firstAdd[6] = { 0 };
	scanf("%s %d %d", &firstAdd, &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%s %d %s", &list[i].address, &list[i].data, &list[i].next);
	}
	n = listSort(n,firstAdd);

	reverse(n, k);

	for (int i = 0; i < n; i++) {
		list[i].display();
	}

	return 0;
}
*/