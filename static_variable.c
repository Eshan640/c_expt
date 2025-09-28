#include<stdio.h>

int func_subtract(int x, int y)
{
    static int num = 4;
    num = num - x - y;
    return num;
}

int func_divide(int x, int y)
{
    static int num = 4;
    if (y != 0)  // avoid division by zero
        num = num / y;
    else
        printf("Division by zero avoided.\n");
    return num;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nResult of subtraction call\n%d", func_subtract(num1, num2));

    printf("\nResult of division call\n%d", func_divide(num1, num2));

    printf("\nResult of second subtraction call\n%d", func_subtract(num1, num2));

    printf("\nResult of second division call\n%d", func_divide(num1, num2));

    return 0;
}
