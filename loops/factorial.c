#include<stdio.h>
void main()
{
    // int n,factorial=1;
    // printf("enter n");
    // scanf("%d",&n); // 1*2*3*4*5=5!
    // for(int i=1;i<=n;i++){
    //     factorial=factorial*i;
    // }
    int n,factorial=1;
    printf("enter n");
    scanf("%d",&n);
    for(int i=n; i>0;i--)
    {
        factorial=factorial*i;
    }
    
    printf("the factorial is %d:",factorial);
}