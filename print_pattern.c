//WAP to generate the following set of output.
//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1



#include <stdio.h>

int main() 
{
int n = 5; 
int i, j, k, val;

for(i = 0; i < n; i++) 
{

for(k = 0; k < n-i-1 ; k++) 
{
printf(" ");
}

val = 1;

for(j = 0; j <= i; j++) 
{
printf("%d ",val);
val = val * (i - j)/(j + 1); 
}
printf("\n");
}
return 0;
}