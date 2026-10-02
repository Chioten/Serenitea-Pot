#include <stdio.h>
int main(void) {
	long long n;
	scanf_s("%lld", &n);
	if (n < 0) {
		printf("-");
		n = -n;
	}
	long long r = 0;
	while (n != 0) {
		r = r * 10 + (n % 10);
		n = n / 10;
	}
	printf("%lld", r);
	return 0;
}