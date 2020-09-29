/*
#include <stdio.h>

int GYZ(int a, int b) {
	int maxnum = a > b ? a : b;
	int minnum = a > b ? b : a;

	while (minnum != 0)
	{
		int tmp = maxnum % minnum;
		maxnum = minnum;
		minnum = tmp;
	}
	return maxnum;
}

int isSimple(int fenzi,int fenmu) {
	int gyz = GYZ(fenzi, fenmu);
	if (gyz != 1) {
		return 0;
	}
	else {
		return 1;
	}
}

int main(void) {
	int fenzi1, fenzi2, fenmu1, fenmu2, k;
	scanf("%d/%d %d/%d %d", &fenzi1, &fenmu1, &fenzi2, &fenmu2, &k);
	double lbound = (double)fenzi1 / fenmu1 < (double)fenzi2 / fenmu2 ? (double)fenzi1 / fenmu1 : (double)fenzi2 / fenmu2;
	double rbound = (double)fenzi1 / fenmu1 > (double)fenzi2 / fenmu2 ? (double)fenzi1 / fenmu1 : (double)fenzi2 / fenmu2;
	int begInt = (int)(k * lbound) + 1;
	int endInt = (int)(k * rbound);
	if ((double)begInt / k == lbound) {
		begInt++;
	}
	if ((double)endInt / k == rbound) {
		endInt--;
	}
	int count = 0;
	for (int i = begInt; i <= endInt; i++) {
		if (isSimple(i, k)) {
			count++;
			if (count == 1)
				printf("%d/%d", i, k);
			else
				printf(" %d/%d", i, k);
		}
	}
	return 0;
}
*/