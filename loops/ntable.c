#include<stdio.h>
void main()
{
    // int n;
    // printf("enter n:");
    // scanf("%d",&n);
    
// for(int i=n;i<=(n*10);i=i+n)
// {
// printf("%d ",i);
// }
// }
//or

int n,a,i;
printf("enter n:");
scanf("%d",&n);
for( i=1;i<=10;i++)
{
    a=n*i;
    printf("%d ",a);
}
printf("%d",a); // last value 50 50 fot table 5 as 50 is last value
// printf("%d",i); LAST value will be 11 where loop fails
}
