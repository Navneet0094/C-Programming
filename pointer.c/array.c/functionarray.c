#include<stdio.h>
void fun(int arr[])
{
    arr[0]=20;
    return;
}

void main()
{
   int arr[5]= {1,2,3,4,5};
   printf("%d ",arr[0]);
   fun(arr);//only name of variable in parenthisis
   printf("%d ",arr[0]);
}