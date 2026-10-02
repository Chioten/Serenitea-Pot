#include <stdio.h>
int main(void) {
	double h, n;//小球坠落初始高度和弹跳次数
	scanf_s("%lf %lf", &h, &n);
	if (n == 0) {
		printf("0.0 0.0");
		return 0;
	}
	else {
		double sum = h;//小球在空中经过的总距离
		for (int i = 2;i <= n;i++) {
			h = h / 2;
			sum += h * 2;
		}
		h = h / 2;
		printf("%.1lf %.1lf", sum, h);
		return 0;
	}
}