
#include <stdio.h>
void main()
{
    int a, b, c, sum;
    float average;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    average = sum / 3.0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
}
