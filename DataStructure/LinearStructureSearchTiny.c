#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int LSearch(int ar[], int len, int target) {
    for (int i = 0; i < len; i++) {
        if (ar[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int* arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int idx;

    idx = LSearch(arr, n, k);

    if (idx == -1) {
        printf("-1\n");
    }
    else {
        printf("%d\n", idx+1);
    }

    free(arr);
}
