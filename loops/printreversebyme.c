#include<stdio.h>
void main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    while(n>0){
        int ld=n%10;
        printf("%d",ld);
      n=n/10; 
    }
    
}