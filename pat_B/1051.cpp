/*
#include <stdio.h>
#include <cmath>


int main(void) {
	double r1, p1, r2, p2;
	scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);

	double r3 = r1 * r2;
	double p3 = p1 + p2;
	double resultA = r3 * cos(p3);
	double resultB = r3 * sin(p3);

	if (fabs(resultA) < 0.005) {
		resultA = 0;
	}
	if (fabs(resultB) < 0.005) {
		resultB = 0;
	}
	if (resultA == 0 && resultB == 0) {
		printf("0");
		return 0;
	}
	printf("%.2lf%c%.2lfi", resultA, resultB < 0 ? '-' : '+', fabs(resultB));

	return 0;
}
*/