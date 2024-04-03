// #include<stdio.h>
// void main()
// {
//     int ram, shyam ,ajay;
//     printf("enter ages");
//     scanf("%d %d %d",&ram,&shyam,&ajay);
//     if(ram<shyam)// shyam comp. se bahar
//     {
//          if(ram<ajay);
//          printf("ram is youngest ");
//          else //ajay is youngest
//          printf("ajay is youngest");
//     }
//     else  //shyam <ram
//   {  if (shyam<ajay)
//     printf("shyam is youngest");
//     else 
//     printf("ajay is youngest");

// }
// }

#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the ages:");
  scanf("%d %d %d",&a,&b,&c);
  if (a<b)
  {
    if (a<c)
    printf("a is youngest");
    else
    printf("c is youngest");
  }
  else
  {
    if (b<c)
    printf("b is youngest");
    else
    printf("c is youngest");
  }
return 0;
}