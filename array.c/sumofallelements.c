#include<stdio.h>//wap to printf sum of all elememts of an array 
void main()
{
    int arr[4]={1,2,3,4};
    int sum = 0; 
    for (int i = 0 ; i<4 ;i++)
    {
        sum= sum +arr[i];
    }
    printf("%d ",sum);
    }