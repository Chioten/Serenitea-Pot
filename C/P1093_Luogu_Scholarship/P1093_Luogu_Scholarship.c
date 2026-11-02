#include<stdio.h>
int main() {
	int n;
	int stu[305][5];
	scanf_s("%d", &n);
	for (int i = 0;i < n;i++) {
		stu[i][0] = i + 1;
		stu[i][4] = 0;
		for (int j = 1;j <= 3;j++) {
			scanf_s("%d", &stu[i][j]);
			stu[i][4] += stu[i][j];
		}
	}
	for (int i = 1;i <= n - 1;i++) {
		for (int j = 1;j <= n - i - 1;j++) {
			int need = 0;
			if (stu[j][4] < stu[j + 1]) {
				need = 1;
			}
			else if (stu[j][4] == stu[j + 1][4] && stu[j][1] < stu[j + 1][1]) {
				need = 1;
			}
			else if (stu[j][4] == stu[j + 1][4] && stu[j][1] == stu[j + 1][1] && stu[j][0] > stu[j + 1][0]) {
				need = 1;
			}
			if (need) {
				for (int k = 0;k < 5;k++) {
					int t = stu[j][k];
					stu[j][k] = stu[j + 1][k];
					stu[j + 1][k] = t;
				}
			}
		}
	}
	for (int i = 0;i < 5;i++) {
		printf("%d %d\n", stu[i][0], stu[i][4]);
	}
	return 0;
}