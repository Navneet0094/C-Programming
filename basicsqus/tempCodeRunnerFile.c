#include <stdio.h>
void main()
{
int a, b, c;
printf("enter values");
scanf("%d %d %d ", &a, &b, &c);
if(a>b&&a>c)
printf("a is greatest");
if(b>c&&b>a)
printf("b is greatest");
if(c>a&&c>b)
printf("c is greatest");
}