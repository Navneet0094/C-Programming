// fibonacci series= 1 1 2 3 5 8 13 21 34 55 89..... 
                   //1+1=2, 1+2=3,2+3=5.. we have to use 3 variables and order is imp
#include<stdio.h>
void main()
{
    int n;
    printf("enter number ");
    scanf("%d",&n);
    int a=1,b=1;
    printf("%d %d ",a,b);
    int sum;//sum =1 not =0 bcz.if we ask for2nd it will give 0
    for(int i=1; i<=n-2;i++)//n-2 lia kunki a or b ko phle se nhi maan ra isilie 2 barkam loop chlayege
    {
    sum=a+b;
    printf("%d ",sum);
    a=b;// orderis important
    b=sum;
    }
}
