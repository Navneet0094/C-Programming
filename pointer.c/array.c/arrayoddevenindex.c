#include<stdio.h>
void main()
{
    int arr[7]={1,2,3,4,5,7};
    for (int i=0; i<=6;i++)
{
    if(i%2!=0)
    {
        arr[i]=arr[i]*2;
    }
    else
    arr[i]=arr[i]+10;
    printf("%d ",arr[i]);
}
}