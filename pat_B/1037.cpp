/*
#include <stdio.h>

struct Money
{
	int g;
	int s;
	int k;
	Money(int g1, int s1, int k1) {
		g = g1;
		s = s1;
		k = k1;
	}
	int getChange(Money P) {
		k = k - P.k;
		if (k < 0) {
			s--;
			k += 29;
			if (s < 0) {
				g--;
				s += 17;
			}
		}
		s = s - P.s;
		if (s < 0) {
			g--;
			s += 17;
		}
		g = g - P.g;
		if (g < 0)
			return 0;
		return 1;
	}
	void display() {
		printf("%d.%d.%d", g, s, k);
	}
};

int main(void) {
	int g1, s1, k1, g2, s2, k2;
	scanf("%d.%d.%d %d.%d.%d", &g1, &s1, &k1, &g2, &s2, &k2);
	Money P(g1, s1, k1);
	Money A(g2, s2, k2);
	Money A2(g2, s2, k2);
	if(A.getChange(P))
		A.display();
	else {
		P.getChange(A2);
		printf("-");
		P.display();
	}

	return 0;
}
*/