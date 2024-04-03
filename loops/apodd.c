#include<stdio.h>    // display ap 1,3,5,9 ...n tems
void main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1; i<=(2*n-1);i=i+2)
{
printf("%d ",i);
}
}