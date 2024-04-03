#include<stdio.h>
#include<limits.h>
void main()
{
    int arr[7]={7,6,5,4,3,2,1};
    int max = INT_MIN ;
    int smax = INT_MIN;
    for(int i=0;i<=6;i++)
    {
        if (max<arr[i]){
            smax=max; //isme phle wale max ki value dedi
            max = arr[i]; // isme ne =w max ki value dedi
        } 
        else if(smax<arr[i]&& arr[i]!=max)
        smax = arr[i];
}
  printf("%d ",smax);
}