#include<stdio.h>
int main()
{
float w,h,BMI;

printf("enter the weight in kg : ");
scanf("%f",&w);

printf("enter the height in m : ");
scanf("%f",&h);

BMI = w/(h*h);

if (BMI <=15){
    printf("Your BMI is %f and you are 'Starvation' ",BMI);
}
else if (BMI > 15 && BMI <= 17.5){
    printf("Your BMI is %f and you are 'Anorexic' ",BMI);
}
else if (BMI > 17.5 && BMI <= 18.5){
    printf("Your BMI is %f and you are 'Underweight' ",BMI);
}else if (BMI > 18.5 && BMI <= 24.9){
    printf("Your BMI is %f and you are 'Ideal' ",BMI);
}else if (BMI > 24.9 && BMI <= 25.9){
    printf("Your BMI is %f and you are 'Overweight' ",BMI);
}
    else if (BMI > 24.9 && BMI <= 25.9){
    printf("Your BMI is %f and you are ' Obese' ",BMI);
}else if (BMI > 40){
    printf("Your BMI is %f and you are 'Morbidity Obese' ",BMI);
}

    return 0;
}