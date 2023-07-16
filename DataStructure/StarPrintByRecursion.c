// 재귀로 별 n개 한 줄로 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f(int k) {
    if (k <= 0) return;
    f(k - 1);
    printf("*");
}

int main() {
    int n;
    scanf("%d", &n);
    f(n);
    printf("\n");
    return 0;
}