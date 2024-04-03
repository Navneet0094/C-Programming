#include<stdio.h>// find ncr factorial by functions
int factorial(int x)
{
    int fact = 1;
    for(int i=1;i<=x;i++)
    fact=fact*i;
    return fact;
}

void main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    int r;
    printf("enter r");
    scanf("%d",&r);
    int ncr= factorial(n)/(factorial(r)*factorial(n-r));
    printf("combination ncr is %d:",ncr);

    
}