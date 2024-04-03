#include<stdio.h>//calculate product of all elements of a given array
void main()
{
int a[6] = {1,2,3,4,5,6};
 int product =1 ;
 for(int i=0;i<=5;i++)
 {
    product= product*a[i];
 }
 printf("%d ",product);
}