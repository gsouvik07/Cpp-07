#include <stdio.h>

int main()
{
    int a[4][4], b[4][4], i, j;

    printf("Enter elements of matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Transposing the matrix
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("Transposed matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
