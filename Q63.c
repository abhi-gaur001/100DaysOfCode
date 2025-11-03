//Merge two arrays.

#include <stdio.h>

void merge_arrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }
}

int main() {
    int n1, n2;

    printf("Enter number of elements in first array: ");
    if (scanf("%d", &n1) != 1 || n1 < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr1[n1];
    if (n1 > 0) {
        printf("Enter %d elements for first array:\n", n1);
        for (int i = 0; i < n1; i++) {
            if (scanf("%d", &arr1[i]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Enter number of elements in second array: ");
    if (scanf("%d", &n2) != 1 || n2 < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr2[n2];
    if (n2 > 0) {
        printf("Enter %d elements for second array:\n", n2);
        for (int i = 0; i < n2; i++) {
            if (scanf("%d", &arr2[i]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    int total = n1 + n2;
    int merged[total];
    merge_arrays(arr1, n1, arr2, n2, merged);

    printf("Merged array:\n");
    for (int i = 0; i < total; i++) {
        printf("%d", merged[i]);
        if (i < total - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
