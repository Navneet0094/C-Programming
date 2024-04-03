#include<stdio.h>
void main() // count numbrr of elements in agiven array greater than a given number x
{ 
    int a[8]={2,3,24,5,34,547,8,10};
    int x =4;
    int count =0;
    for (int i=0;i<=7;i++)
    {
      if(a[i]>x)
      count++;
    }
 printf("%d ",count);
}