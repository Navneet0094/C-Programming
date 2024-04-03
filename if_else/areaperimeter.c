#include<stdio.h>
void main()
{
    int length;
    int breadth;
    int area=length*breadth;
    int perimeter=2*(length+breadth);
    printf("enter length");
    scanf("%d",&length);
    printf("enter b");
    scanf("%d",&breadth);
    if(area>perimeter)
    printf("area is greater than perimeter");
    else 
    printf("area is not greater teh perimeter");


}