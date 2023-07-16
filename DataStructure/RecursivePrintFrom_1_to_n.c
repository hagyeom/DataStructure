// 재귀로 1부터 n까지 한 줄로 출력하기
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