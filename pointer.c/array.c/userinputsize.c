#include<stdio.h>
void main()
{
    int n;
    printf("enter sixe of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;  i<=n-1; i++)
    {
        printf("emter elememts");
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<=n-1; i++)
    {
        printf("%d ", arr[i]);
    }
   
}