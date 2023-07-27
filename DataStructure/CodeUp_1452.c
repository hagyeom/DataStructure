// �� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Swap(int arr[], int idx1, int idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int Partition(int arr[], int left, int right) {
	int pivot = arr[left]; // �ǹ��� ��ġ�� ���� ����
	int low = left + 1; // �ǹ��� ������ ���� ���ʿ� ��ġ�� ����
	int high = right; // �ǹ��� ������ ���� �����ʿ� ��ġ�� ����

	while (low <= high) { // �������� ���� ������ �ݺ�
		// �ǹ����� ū ���� ã�� ����
		if (arr[low] <= pivot && low <= right)
			low++; // low�� ���������� �̵�

		// �ǹ����� ���� ���� ã�� ����
		if (arr[high] > pivot && high >= left + 1)
			high--; // high�� �������� �̵�

		// �������� ���� ���¶�� Swap ����
		if (low <= high)
			Swap(arr, low, high);
	}

	Swap(arr, left, high); // �ǹ��� high�� ����Ű�� ��� ��ȯ
	return high; // �Ű��� �ǹ��� ��ġ ���� ��ȯ
}

void QuickSort(int arr[], int left, int right) {
	if (left <= right) {
		int pivot = Partition(arr, left, right); // �ѷ� ������
		QuickSort(arr, left, pivot - 1); // ���� ������ ����
		QuickSort(arr, pivot + 1, right); // ������ ������ ����
	}
}

int main() {
	int n;
	scanf("%d", &n);

	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	QuickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}