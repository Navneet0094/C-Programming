//print sum of series 1-2+3-4+5...upto n.
#include<stdio.h>
int main()
{
    int n ;
    printf("enter n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1; i<=n; i++){
        // if(i%2!=0) sum = sum+i;
        // else sum=sum-i;
        if(i%2==0) sum = -n/2;// 2 2 k pair bna lo like if n= 6 then (1-2)+(3-4)+(5-6)= -3 which is -6/2
        if(i%2!=0) sum = (-n/2)+n;// pair bna lo 1 bchega like if n=7 then -6/2+7=>-n/2+n

    }
    printf("sum is : %d ",sum);
    return 0;
}