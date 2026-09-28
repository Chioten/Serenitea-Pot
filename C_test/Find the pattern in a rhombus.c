#define _CRT_SECURE_NO_WARNINGS   // 让 MSVC 允许标准 scanf（gcc 也能编）
#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int total = n * 2 + 1;       //上下两行总行数
	for (int i = 1; i <= total;i++) {
		int d;//距离中间层有几行
		if (i <= n + 1) {
			d = (n + 1) - i;
		}
		else {
			d = i - (n + 1);
		}
		int indent = d * 2;
		int star = (n - d) * 2 + 1;
		for (int k = 0;k < indent;k++) printf(" ");
		for (int k = 0;k < star;k++) printf("* ");
		for (int k = 0;k < indent;k++) printf(" ");
		printf("\n");
	}
	return 0;
}