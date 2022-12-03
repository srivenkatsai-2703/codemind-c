#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    float area,volume;
    area=6*a*a;
    volume=a*a*a;
    printf("Surface area = %.2f and Volume = %.2f",area,volume);
}