#include<stdio.h>// find ncr factorial
void main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    int r;
    printf("enter r");
    scanf("%d",&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1;//n-r cant write
    for(int i=1;i<=n;i++)
    {
        nfact=nfact*i;
    }
    for(int i=1;i<=r;i++)
    {
        rfact=rfact*i;
    }
    for(int i=1;i<=n-r;i++)
    {
        nrfact=nrfact*i;
    }
    int ncr= nfact/(rfact*nrfact);
    printf("combination ncr is %d:",ncr);

    
}