#include<stdio.h>
void main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(n%3==0){
        if(n%3==0)
        printf("it is divisible by 5 and 3");
        else
        printf("it is not divisible by 5 and 3");
    }
    else
        printf("it is not divisible by 5 and 3");
}