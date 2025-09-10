#include <stdio.h>
int main() 
{
    float length, width, area, perimeter;
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    
    area = length * width;
    perimeter = 2 * (length + width);
    
    printf("Area of rectangle: %f\n", area);
    printf("Perimeter of rectangle: %f\n", perimeter);
    
    return 0;
}
