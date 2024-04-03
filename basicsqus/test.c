#include<stdio.h>  //write a progmram  to coumt digit of a number
void main()
{
int n;
printf("enter number ");
scanf("%d",&n);
int sum=0;
int lastDigit=0;
while(n!=0)   //or n>0 rhe 
{
    lastDigit=n%10;
    sum=sum+lastDigit;
    n=n/10;
}
printf("sum is : %d",sum);
}