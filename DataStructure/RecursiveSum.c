// ��ͷ� 1���� n���� �� �����ϱ�
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