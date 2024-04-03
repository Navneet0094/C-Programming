#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
   for(int i =0;i<=4;i++)
   { printf("enter %d th index",i);
   scanf("%d",&a[i]);
   }
   printf("%d",a[3]);
}