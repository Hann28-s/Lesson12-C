#include <stdio.h>

int timMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 28, 12, 20, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = timMax(arr, n);
    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}
