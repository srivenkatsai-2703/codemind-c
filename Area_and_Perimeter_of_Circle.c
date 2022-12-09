#include <stdio.h>
int main()
{
    float r,area,per;
    scanf("%f%f%f",&r,&area,&per);
    area=3.14*r*r;
    per=2*3.14*r;
    printf("%0.2f
%0.2f",area,per);
}