// ¼øÂ÷ Å½»ö ¾Ë°í¸®Áò
#include <stdio.h>

int LSearch(int ar[], int len, int target) {
	int i;

	for (i = 0; i < len; i++) {
		if (ar[i] == target)
			return i;
	}

	return -1;
}

int main() {
	int arr[] = { 3,5,2,4,9 };
	int idx;

	idx = LSearch(arr, sizeof(arr) / sizeof(arr[0]), 4);

	if (idx == -1)
		printf("Å½»ö ½ÇÆĞ\n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d\n", idx);

	idx = LSearch(arr, sizeof(arr) / sizeof(arr[0]), 7);

	if (idx == -1)
		printf("Å½»ö ½ÇÆĞ\n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d\n", idx);

	return 0;
}