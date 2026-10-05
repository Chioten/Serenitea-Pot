#include <stdio.h>
int main(void) {
	int A;
	scanf_s("%d", &A);
	int i, j, k;
	int cnt = 0;
	for (i = A;i <= A + 3;i++) {
		for (j = A;j <= A + 3;j++) {
			for (k = A;k <= A + 3;k++) {
				if (i == j || i == k || j == k) {
					continue;
				}
				cnt += 1;
				if (cnt % 6 == 0) printf("%d\n", i * 100 + j * 10 + k);
				else printf("%d ", i * 100 + j * 10 + k);
			}
		}
	}
	return 0;
}