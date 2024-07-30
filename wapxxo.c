#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value: a = %d, b = %d\n", a, b);
}

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap_by_reference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap_by_value(x, y);
    printf("After swapping by value: x = %d, y = %d\n", x, y);
    swap_by_reference(&x, &y);
    printf("After swapping by reference: x = %d, y = %d\n", x, y);
    return 0;
}
