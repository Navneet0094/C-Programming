#include<stdio.h>  //write a progmram  to coumt digit of a number
void main()
{
int n;
printf("enter number ");
scanf("%d",&n);
int count=0;
while(n!=0)   //or n>0 rhe 
{n=n/10;
count++;}
printf("count is : %d",count);
}
