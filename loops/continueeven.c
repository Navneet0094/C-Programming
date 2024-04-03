#include<stdio.h>//wap to print odd number from 1 to 100
void main()

{
for(int i=1;i<=100;i++)
{
    if(i%2!=0)
    continue; // means jo us iteration ko skip krr do jo condn me hai ;
    printf("%d ",i);
}
}