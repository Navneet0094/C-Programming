#include<stdio.h>
void main()
{
    int a[7]={1,2,3,4,3,2,1};
    for(int i=0,j=6;i=j;i++,j--)
    {
        if(i!=j){
            printf("number is not palindrome");
            break;
        }
        else 
        printf("number is a palindrome");
    }
}