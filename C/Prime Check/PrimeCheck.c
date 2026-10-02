#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    if (n == 0 || n == 1) printf("0");
    else {
        int flag = 1;
        for (int i = 2;i <= n / i;i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
        printf("%d", flag);
    }
    return 0;
}