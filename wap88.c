#include <stdio.h>
#include <string.h>

int main()
{
char str[100];
int i, length, flag = 0;

printf("Enter a string: ");
scanf("%s", str);

length = strlen(str);

for (i = 0; i < length / 2; i++)
{
    if (str[i] != str[length - i - 1])
    {
        flag = 1;
        break;
    }
}

if (flag == 1)
{
    printf("The string is not a palindrome.\n");
}
else
{
    printf("The string is a palindrome.\n");
}

return 0;
}
