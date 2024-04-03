#include<stdio.h>
void main()//find factorial of 1st n numbers
{
    int n,factorial=1;
    printf("enter n");
    scanf("%d",&n); // 1*2*3*4*5=5!
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
        
    }
    printf("factorial of %d is %d \n",i,factorial);
    
}