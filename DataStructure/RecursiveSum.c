// 재귀로 1부터 n까지 합 리턴하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Sum(int n) {
	if (n <= 1)
		return 1;
	return Sum(n - 1) + n;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", Sum(n));
	return 0;
}