
#include<stdio.h>
int main()
{
    int n,q,s=0,r,a,b,c;
    scanf("%d",&n);
    a=n*n;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    b=s*s;
    q=b;
    s=0;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    c=s;
    if(a==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}