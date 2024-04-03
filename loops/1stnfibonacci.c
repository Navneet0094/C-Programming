#include<stdio.h>
void main()
{
    int n;
    printf("enter number ");
    scanf("%d",&n);
    int a=1,b=1;
    int sum =1;
    for(int i=1; i<=n-2;i++)
    {
    printf("the fibonacci %d th number is %d \n",i,sum);
    sum=a+b;
    a=b;// orderis important
    b=sum;
   
}
}