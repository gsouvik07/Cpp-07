#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
        ; // find the end of str1

    for (j = 0; str2[j] != '\0'; j++ , i++) // concatenate str2 to str1
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0'; // end the concatenated string with a null character

    printf("The concatenated string is: %s\n", str1);

    return 0;
}
