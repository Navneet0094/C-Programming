#include<stdio.h>
void main()
{
    int x;
    printf("enter x");
    scanf("%d",&x);
    if(x<0)
   {x=x*(-1);}
    printf("absolute value is :%d",x);
}