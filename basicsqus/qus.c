#include<stdio.h>
void main()
{
    int a,b;
    printf("enter Divident");
    scanf("%d",&a);
    printf("enter divisor");
    scanf("%d",&b);
    int q =a/b;
    int r=a-b*q ; //divident = divisor*quiotent +remainder
    printf("remainder when %d is divided by %d is :%d",a,b,r);
}