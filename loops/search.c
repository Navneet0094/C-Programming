#include<stdio.h>
#include<stdbool.h>
void main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int x = 3;
    bool flag=false ;// means not present
    int idx= -1;
    for(int i=0 ; i< 6;i++)
    {
        if(arr[i]==x)
        {
            flag = true ; // means present
            idx = i;
            break;
        }
    }
    if (flag == false){
        printf("%d is not present in array ",x);}
    else    
        printf("%d is present in array and its index is %d",x,idx);
    }
