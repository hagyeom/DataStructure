// ��ͷ� 1���� n���� �� �ٷ� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printNumber(int count,int k) {
	if (count == k+1)
		return;

	printf("%d ", count);

	printNumber(++count,k);
}

int main() {
	int n;
	scanf("%d", &n);
	int count = 1;
	printNumber(count, n);
	return 0;
}