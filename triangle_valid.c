#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    printf("enter the value of c:\n");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("valid triangle\n");

        // equilateral triangle
        if(a==b && b==c && c==a)
        printf("equilateral triangle\n");
        // isosceles triangle
        if(a==b || b==c || c==a)
        printf("isosceles triangle\n");
        //right angle triangle
        if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
        printf("right angled triangle\n");
        else
        printf("scalene triangle\n");
    }

    else
    printf("not a valid triangle");
    return 0;
}