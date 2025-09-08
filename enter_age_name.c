#include<stdio.h>
int main()
{
    char name[13];
    int age;
    printf("Enter the name:");
    scanf("%s",name);
    printf("enter age:");
    scanf("%d",&age);
    printf("Name is %s \n age is %d",name,age);
    return 0;
}