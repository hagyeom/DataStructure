// ÀÌÁø Å½»ö
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Bsearch(int ar[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid;

	while (first <= last) {
		mid = (first + last) / 2;
		if (target == ar[mid])
			return mid;
		else if (target > ar[mid])
			first = mid + 1;
		else
			last = mid - 1;
	}

	return -1;
}

int main() {
	int n, m;
	scanf("%d", &n);

	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int s, idx;
		scanf("%d", &s);

		idx = Bsearch(arr, n, s);
		if (idx == -1)
			printf("-1\n");
		else
			printf("%d\n", idx + 1);
	}

	return 0;
}