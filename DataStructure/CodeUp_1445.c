// ���ĵ� �� �迭 ��ġ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ���� ���� �Լ�
void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // key���� ū ���Ҹ� ã�Ƽ� ���������� �̵�
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int* nArr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nArr[i]);
    }
    int* mArr = malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &mArr[i]);
    }

    
}