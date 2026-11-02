#include <stdio.h>
int digitsum(long long num) {
	int sum = 0;
	while(num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main(void) {
	int N;
	scanf_s("%d", &N);
	while (N--) {
		long long x;
		scanf_s("%lld",&x);
		int base = digitsum(x);
		int unchanged = 1;
		for (int i = 2;i <= 9;i++) {
			long long produce = x * i;
			if (digitsum(produce) != base) {
				unchanged = 0;
				break;
			}
		}
		if (unchanged) {
			printf("%d\n", base);
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}