/*
#include <stdio.h>
#include <string.h>

long long findMinGBS(long long a, long long b) {
	long long maxnum = a > b ? a : b;
	long long minnum = a <= b ? a : b;

	while (minnum != 0) {
		long long tmp = maxnum % minnum;
		maxnum = minnum;
		minnum = tmp;
	}
	return (a*b) / maxnum;
}

long long findMaxGYZ(long long a, long long b) {
	long long maxnum = a > b ? a : b;
	long long minnum = a <= b ? a : b;

	while (minnum != 0) {
		long long tmp = maxnum % minnum;
		maxnum = minnum;
		minnum = tmp;
	}

	return maxnum;
}

struct Num
{
	long long fenzi;
	long long fenmu;
	Num(long long zi, long long mu) {
		fenzi = zi;
		fenmu = mu;
	}
	void display() {
		long long part_Int = 0;
		long long tmp_fenzi = fenzi >= 0 ? fenzi : -fenzi;
		long long tmp_fenmu = fenmu >= 0 ? fenmu : -fenmu;
		long long gyz = findMaxGYZ(tmp_fenzi, fenmu);
		if (gyz != 1) {
			tmp_fenzi /= gyz;
			tmp_fenmu /= gyz;
		}
		part_Int = tmp_fenzi / tmp_fenmu;
		tmp_fenzi = tmp_fenzi % tmp_fenmu;
		int op = fenzi >= 0 ? 1 : -1;
		if (op < 0) {
			printf("(");
		}
		if (part_Int != 0) {
			if (op < 0)
				printf("-");
			printf("%lld", part_Int);
		}
		if (tmp_fenzi != 0) {
			if (part_Int != 0) 
				printf(" ");
			if (part_Int == 0 && op < 0)
				printf("-");
			printf("%lld/%lld", tmp_fenzi, tmp_fenmu);
		}
		if (part_Int == 0 && fenzi == 0) {
			printf("0");
		}
		if (fenzi < 0) {
			printf(")");
		}
	}
	Num add(Num *num) {
		Num result(0,0);
		long long gbs = findMinGBS(fenmu,num->fenmu);
		long long fenzi1 = fenzi * (gbs / fenmu);
		long long fenzi2 = num->fenzi * (gbs / num->fenmu);
		result.fenzi = fenzi1 + fenzi2;
		result.fenmu = gbs;

		return result;
	}
	Num minus(Num *num) {
		Num result(0, 0);
		long long gbs = findMinGBS(fenmu, num->fenmu);
		long long fenzi1 = fenzi * (gbs / fenmu);
		long long fenzi2 = num->fenzi * (gbs / num->fenmu);
		result.fenzi = fenzi1 - fenzi2;
		result.fenmu = gbs;

		return result;
	}
	Num mul(Num *num) {
		Num result(0, 0);
		result.fenzi = fenzi * num->fenzi;
		result.fenmu = fenmu * num->fenmu;

		return result;
	}
	Num div(Num *num,int *zeroFlag) {
		Num result(0, 0);
		if (num->fenzi == 0) {
			*zeroFlag = 1;
			return result;
		}
		result.fenzi = fenzi * num->fenmu;
		result.fenmu = fenmu * num->fenzi;
		if (result.fenmu < 0) {
			result.fenzi = -result.fenzi;
			result.fenmu = -result.fenmu;
		}
		return result;
	}
};

int main(void) {
	long long a1, b1, a2, b2;
	scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
	
	Num num1(a1, b1);
	Num num2(a2, b2);
	Num result_add = num1.add(&num2);
	num1.display();
	printf(" + ");
	num2.display();
	printf(" = ");
	result_add.display();
	printf("\n");

	Num result_minus = num1.minus(&num2);
	num1.display();
	printf(" - ");
	num2.display();
	printf(" = ");
	result_minus.display();
	printf("\n");

	Num result_mul = num1.mul(&num2);
	num1.display();
	printf(" * ");
	num2.display();
	printf(" = ");
	result_mul.display();
	printf("\n");

	int zeroFlag = 0;
	Num result_div = num1.div(&num2,&zeroFlag);
	num1.display();
	printf(" / ");
	num2.display();
	printf(" = ");
	if (zeroFlag)
		printf("Inf");
	else
		result_div.display();
	printf("\n");

	return 0;
}
*/