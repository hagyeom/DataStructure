// �ڵ�� 1276: ���丮�� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", Factorial(n));
    return 0;
}