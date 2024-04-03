#include<stdio.h>
int main()
{
    int cp,sp;
    printf("enter cp");
    scanf("%d",&cp);
    
    printf("enter sp");
    scanf("%d",&sp);
    if(sp>cp){
    printf("profit is :%d",sp-cp);
    }
    if(sp<cp){
    printf("loss is:%d",cp-sp);
    }
   
    if(sp==cp){
    printf("no profit no loss");
    }
    return 0;
}