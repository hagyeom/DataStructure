// 선택 정렬
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[10001];
int n, i, j, temp, min;

int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 1; i < n; i++) {
        min = i;
        for (j = i + 1; j <= n; j++) {
            // 이 부분에 코드 입력
            if (a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
    return 0;
}