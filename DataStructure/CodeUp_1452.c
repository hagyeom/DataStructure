// 퀵 정렬
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Swap(int arr[], int idx1, int idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int Partition(int arr[], int left, int right) {
	int pivot = arr[left]; // 피벗의 위치는 가장 왼쪽
	int low = left + 1; // 피벗을 제외한 가장 왼쪽에 위치한 지점
	int high = right; // 피벗을 제외한 가장 오른쪽에 위치한 지점

	while (low <= high) { // 교차되지 않을 때까지 반복
		// 피벗보다 큰 값을 찾는 과정
		if (arr[low] <= pivot && low <= right)
			low++; // low를 오른쪽으로 이동

		// 피벗보다 작은 값을 찾는 과정
		if (arr[high] > pivot && high >= left + 1)
			high--; // high를 왼쪽으로 이동

		// 교차되지 않은 상태라면 Swap 실행
		if (low <= high)
			Swap(arr, low, high);
	}

	Swap(arr, left, high); // 피벗과 high가 가리키는 대상 교환
	return high; // 옮겨진 피벗의 위치 정보 변환
}

void QuickSort(int arr[], int left, int right) {
	if (left <= right) {
		int pivot = Partition(arr, left, right); // 둘로 나눠서
		QuickSort(arr, left, pivot - 1); // 왼쪽 영역을 정렬
		QuickSort(arr, pivot + 1, right); // 오른쪽 영역을 정렬
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