#include<stdio.h>
void main()
{
int x;
printf("enter number");
scanf("%d",&x);
if(x%5==0 && x%3==0)
printf("divisible by 5and3");
else
printf("not divisible by 3 and5");
}
