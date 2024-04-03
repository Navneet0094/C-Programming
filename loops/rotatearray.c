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
    int n=5;
    int k=4;
    //steps
    k=k%n;
    reverse(arr,0,n-1);// puri array reverse
    reverse(arr,0,k-1); 
    reverse(arr,k,n-1);
   
    for(int i=0; i<=4;i++)
    {
    printf("%d ",arr[i]);
    }


}