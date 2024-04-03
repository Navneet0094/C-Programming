#include<stdio.h>
void reverse(int arr[],int si,int ei)
{
   for(int i =si ,j=ei; i<j;i++,j--)
{
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
      
}
}
void main()
{
    int arr[5]={1,2,3,4,5};
    reverse(arr,1,3);
   
    for(int i=0; i<=4;i++)
    {
    printf("%d ",arr[i]);
    }


}