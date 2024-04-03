#include<stdio.h>
void main()
{
    int n,a=1;
    printf("enter number");
    scanf("%d",&n);
    // 1 2 4 8 . . . . . .n terms  
    for(int i=1;i<=n;i++){
        printf("%d  ",a);
        a=a*2;
    }
}