// wapto print sum and revere of given number
#include<stdio.h>
void main()
{
    int n ,r=0;
    printf("enter n");
    scanf("%d",&n); 
   int b=n;
   // while(n>0)//or n!=0
for(int i=1;n>0;i++ )
    {
      r=r*10;
      r=r+(n%10);
      n=n/10;
    }
    // here r=4321
printf("%d",b+r);

}

