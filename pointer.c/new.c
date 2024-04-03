#include<stdio.h>
void main()
// {
//     int a= 5;
//     int* x = &a; // int* -> pointer used to store address 
// //     printf("%p \n",x); //khud ka or kisi ka address bhi store krr skta hai ,,, ye a ka addresss dwga 
// //     printf("%p",&x); ye x ka address dega 
//     printf("%p",*x); //this means x k ander jiska address store hai usko point kro or uski v alue dedo 
// }
{
    int a=5;
    int* x;
    x=&a;
    printf("%p \n",x);
    printf("%p \n",&a);
}