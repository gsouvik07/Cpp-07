#include <stdio.h>

#define ROWS 4
#define COLS 4

void add_arrays(int arr1[][COLS], int arr2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main() {
    int arr1[ROWS][COLS];
    int arr2[ROWS][COLS];
    int result[ROWS][COLS];

    printf("Enter elements for first array: \n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements for second array: \n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    add_arrays(arr1, arr2, result);

    printf("Resulting array is: \n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
