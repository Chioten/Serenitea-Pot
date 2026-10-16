#include <stdio.h>
int main(void) {
	int m, n;
	scanf_s("%d %d", &n, &m);
	double best = 0;
	for (int i = 0;i < n;i++) {
		double sum = 0.00;
		int max = -1;
		int min = 11;
		for (int j = 0;j < m;j++) {
			int x;
			scanf_s("%d", &x);
			sum += x;
			if (x > max) max = x;
			if (x < min) min = x;
		}
		double avg = (sum - max - min) / (m - 2);
		if (best < avg) best = avg;
	}
	printf("%.2lf", best);
	return 0;
}
