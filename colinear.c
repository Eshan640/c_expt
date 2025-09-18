//ifarea of triangle=0 then colinear point
#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("enter the coordinates of (x1,y1),(x2,y2),(x3,y3)");
    scanf("%d%d%d%d%d%d",&x1, &y1, &x2, &y2, &x3, &y3);
    int area;
     area = x1 * (y2 - y3)+ x2 * (y3 - y1)+  x3*(y1 - y2);
     if(area==0)
     {
        printf("colinear\n");
     }
     else{
        printf("not a colinear\n");
     }
     return 0;



}