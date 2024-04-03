#include<stdio.h>

void main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    float a = 100;

    // GP: 100, 50, 25, ..., up to n terms
    for (int i = 1; i <= n; i++)
    {
        printf("%f ", a);
        a = a / 2;
    }
}
