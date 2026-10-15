#include <stdio.h>
int gcd(int a, int b) {
	while (b != 0) {
		int t = a % b;
		a = b;
		b = t;
	}
	return a;
}
int main(void) {
	int a, b;
	scanf_s("%d/%d", &a, &b);
	int g = gcd(a, b);
	printf("%d/%d", a / g, b / g);
	return 0;
}