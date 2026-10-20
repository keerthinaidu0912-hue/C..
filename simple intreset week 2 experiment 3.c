
#include <stdio.h>
void main()
{
    float p, r, t, si;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time period: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest = %.2f", si);
}


