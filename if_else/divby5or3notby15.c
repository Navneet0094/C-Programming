#include<stdio.h>
void main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
//     if(n%3==0||n%5==0){
//     if(n%15!=0)
//     printf("number is divisible by 5 or 3 notby 15");
//     else   
//     printf("number is divisible by 5 or 3 and by 15");
//     }
//     else 
//     printf("number is divisible by 5 or 3 and by 15");
// }
if((n%5==0||n%3==0)&&n%15!=0)
printf("number is divisible by 5 or 3 not by 15");
else 
printf("not matching condition");
}
