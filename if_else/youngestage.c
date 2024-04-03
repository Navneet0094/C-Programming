#include <stdio.h>
void main()
{
int ram,shyam,ajay;
printf("enter age of ram");
scanf("%d",&ram);
printf("enter age of shyam");
scanf("%d",&shyam);
printf("enter age of ajay");
scanf("%d",&ajay);
if(ram<shyam&&ram<ajay)
{printf("ram is youngest");}
if(shyam<ram&&shyam<ajay)
{printf("shyam is youngest");}
if(ajay<ram&&ajay<shyam)
{printf("ajay is youngest");}
}