#include<stdio.h>
void main()
{
    float x;
    printf("enter decimal number");
    scanf("%f",&x);
    int y=x;
    float z=x-y;
    printf("fractional part is: %f",z);
}