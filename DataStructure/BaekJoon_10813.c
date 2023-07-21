#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, m;
int a, b;
int arr[101] = { 0 };

void swap(int idx1, int idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		swap(a, b);
	}
	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}