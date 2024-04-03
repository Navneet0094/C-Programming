#include<stdio.h>  //write a progmram  toGET SUMOF even digit of a number
void main()
{
int n;
printf("enter number ");
scanf("%d",&n);
int sum=0;
// int lastDigit=0;noneed t
while(n!=0)   //or n>0 rhe 
{
    int lastDigit=n%10;
    if(lastDigit%2==0)
    sum=sum + lastDigit;
    n=n/10;
}
printf("sum is : %d",sum);
}

    