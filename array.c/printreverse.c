#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
   for(int i=0;i<=4;i++)
   { printf("enter %d th index",i+1);
   scanf("%d ",&a[i]);
   }
   for(int i=4;i>=0;i--)
   {
    printf("%d ",a[i]);
   }
}