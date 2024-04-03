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
    int nfact= factorial(n);
    int rfact= factorial(r);
    int nrfact= factorial(n-r);
    int ncr= nfact/(rfact*nrfact);
    printf("combination ncr is %d:",ncr);

    
}