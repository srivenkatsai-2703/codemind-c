#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c)
    {
        printf("Valid triangle");
    }
    else if(a+b<c)
    {
        printf("Invalid triangle");
    }
}