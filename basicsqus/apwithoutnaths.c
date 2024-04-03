#include<stdio.h>
void main()// dispaly 4,7 9 11 .. n
{
    int n;//itni bar loop chl ra hai
    printf("enter number");
    scanf("%d",&n);
    int a=4;
    for(int i=1; i<=n;i++)
{ 
printf("%d ",a);
a=a+3;
}
}