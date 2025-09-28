#include<stdio.h>

 int factorial(int n);

int main()
{
    int num, result;
    printf("enter a number: ");
    scanf("%d", &num);

    result = factorial(num);
    
    //if we try to access local variable 'fact' here it wont work 
    //printf("%d", fact); will give error because 'fact' is not declared here

    printf("factorial is : %d",result);
    
    return 0;
}

    int factorial(int n)
{
    int fact=1;  // fact is local variable to this function

    for(int i=1; i<=n; i++)
    fact = fact*i;

    return fact;  
}