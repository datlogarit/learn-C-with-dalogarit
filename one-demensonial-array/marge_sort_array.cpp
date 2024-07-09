#include <stdio.h>
#define size1 6
#define size2 6

int main() {
    int a[size1] = {1, 3, 6, 7, 8, 13};
    int b[size2] = {4, 5, 6, 10, 12, 14};
    int size3 = size1 + size2;
    int c[size3];  // Ensure the size of c is enough to hold all elements of a and b combined
    int i = 0, j = 0, k = 0;

    // Merge arrays a and b into c
    while (i < size1 && j < size2) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Copy any remaining elements of a
    while (i < size1) {
        c[k++] = a[i++];
    }

    // Copy any remaining elements of b
    while (j < size2) {
        c[k++] = b[j++];
    }

    // Print the merged array
    for (i = 0; i < size3; i++) {
        printf("%d \t", c[i]);
    }
    return 0;
}

