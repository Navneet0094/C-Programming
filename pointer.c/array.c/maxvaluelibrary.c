#include<stdio.h>
#include<limits.h>
void main()
{
    int arr[10]={1,3,4,5,3,15,6,890,12,-234};
    int max = INT_MIN ;//sbse chota number iski jagah a[0] bi krr skte hai
    for(int i=0;i<10;i++)
    {
        if (max<arr[i]){
            max = arr[i];
        }
}printf("%d ",max);
    }