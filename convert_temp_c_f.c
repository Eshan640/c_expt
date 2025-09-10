#include<stdio.h>
int main()
{
    int temperature;
    printf("enter the temp. in celsius :");
    scanf("%d",&temperature);
    float fahrenhit;
    fahrenhit=(temperature*9/5)+32;
    printf("temperature in fahrenhit is :%f",fahrenhit);
    return 0;
}