#include<stdio.h>
int main(void) {
	int a[10];
	for (int i = 0;i < 10;i++) {
		scanf_s("%d", &a[i]);
	}
	int h;
	scanf_s("%d", &h);
	h += 30;
	int cnt = 0;
	for (int i = 0;i < 10;i++) {
		if (h >= a[i]) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}