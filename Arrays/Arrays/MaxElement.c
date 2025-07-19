#include <stdio.h>

int main() {
    int arr[] = {5, 8, 2, 10, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum element is: %d\n", max);
    return 0;
}
