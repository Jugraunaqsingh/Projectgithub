//ncr*mcr
#include <stdio.h>
int fac(int x) {
	int a, b;
	if (x == 0) {
		return 0;
	}
	if (x == 1) {
		return 1;
	}
	b = fac(x - 1);
	a = x * b;
	return a;
}
int main() {
	int n, m, r1, r2, ncr, mcr;
	printf("enter the values");
	scanf_s("%d%d%d%d", &n, &m, &r1, &r2);
	ncr = fac(n) / (fac(r1) * fac(n - r1));
	mcr = fac(m) / (fac(r2) * fac(m - r2));
	printf("the value is %d", ncr * mcr);
	return 0;
}