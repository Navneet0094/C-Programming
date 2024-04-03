#include<stdio.h>
void main()
{
    int n,a=100;
    printf("enter number");
    scanf("%d",&n);
    //display ap 100 97 94 upto all  terms which are positive 
    for(int i=1;a>0;i++){// or we  can also use a>0in place of i<=n . a>0 better
        printf("%d  ",a);
        a=a-3;
    }
}