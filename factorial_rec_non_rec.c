#include<stdio.h>

// factorial using recursion
int factorial(int n)
{
    if(n==1 || n==0)
    return 1;

    return n*factorial(n-1);
}
// factorial using non recurssive function
int fact_nonrec(int n ){
    int i,fact = 1;
    for (i=1; i<=n; i++)
        fact =fact*i;
        return fact;
 }
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int fact=factorial(n);
printf("factorial is %d\n", fact );//factorial using recursion

    // factorial using non recurssive function
     printf("factorial using non recursive function is %d\n", fact_nonrec(n));

     return 0;

}