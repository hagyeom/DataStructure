// ���� Ž�� �˰������� ��� ����
#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target) {
	int mid;
	if (first > last)
		return -1;

	mid = (first + last) / 2;
	if (ar[mid] == target)
		return mid;
	else if (ar[mid] > target)
		return BSearchRecur(ar, first, mid - 1, target); // �պκ��� ������� ��Ž��
	else
		return BSearchRecur(ar, mid + 1, last, target); // �޺κ��� ������� ��Ž��
}

int main() {
	int idx;
	int arr[] = { 1,3,5,7,9 };

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, 7);
	if (idx == -1)
		printf("Ž������\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, 4);
	if (idx == -1)
		printf("Ž������\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);

	return 0;
}