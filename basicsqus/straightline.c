#include<stdio.h>
void main()
{
    // LINE IS STRAIGHT OR NOT
    double x1,y1,x2,y2,x3,y3;
    double m1=(y2-y1)/(x2-x1);
    double m2=(y3-y2)/(x3-x2);
    printf("enter values:");
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y2,&x2,&y2,&x3,&y3);
    if(m1==m2)
    printf("line is straight");
    else 
    printf("line is not straight");

}