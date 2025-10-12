#include <stdio.h>
#include <string.h>

void reverse(char str[])
{
    int length = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char str[100];
    printf("enter a string: ");
    gets(str);

    reverse(str);

    printf("reversed string: %s", str);
    return 0;
}