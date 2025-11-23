#include<stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter your weight in kilograms:");
    scanf("%f", &weight);

    printf("Enter your height in meters:");
    scanf("%f", &height);

    bmi= weight/(height*height);

    printf(" Your BMI is : %2.f\n", bmi);
     if (bmi<18.5)
     {
        printf("Category: Underweight\n");

     }
     else if (bmi>=18.5)
     {
        printf("Category: Normal weigght\n");
     }
     else if (bmi>=25 && bmi<29.9)
     {
        printf("Category: Over weight");

     }
     else
     {
        printf("Category: Obsese");
     }
     
     
        return 0;
}
