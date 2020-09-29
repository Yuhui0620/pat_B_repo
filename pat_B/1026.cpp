/*
#include <stdio.h>

#define CLK 100

struct Counter
{
	int h;
	int m;
	int s;
	Counter() {
		h = 0;
		m = 0;
		s = 0;
	}
	void addSec() {
		s++;
		if (s >= 60) {
			m++;
			s = 0;
			if (m >= 60) {
				h++;
				m = 0;
			}
		}
	}
	void display() {
		printf("%02d:%02d:%02d", h, m, s);
	}
};

int main(void) {
	int t1, t2;
	scanf("%d %d", &t1, &t2);
	double tmp = (t2 - t1)/ (double)CLK;
	double decim = tmp - (int)tmp;
	int secondTotal;
	secondTotal = decim >= 0.5 ? (int)(tmp + 1) : (int)tmp;

	Counter counter;
	while (secondTotal--) {
		counter.addSec();
	}
	counter.display();

	return 0;
}
*/