#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first Number\n");
    scanf("%d", &a);
    printf("Enter second Number\n");
    scanf("%d", &b);
    printf("Value before Swapping %d %d\n", a, b);
    c = a;
    b = c;
    a = b;
    printf("value after swapping %d %d\n", a, b);

    return 0;
}