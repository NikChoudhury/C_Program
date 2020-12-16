#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a = 8, b = 4;
    printf("The value Of a + b = %d\n", a + b);
    printf("The value Of a - b = %d\n", a - b);
    printf("The value Of a * b = %d\n", a * b);
    printf("The value Of a / b = %d\n", a / b);
    printf("The value Of a divided by b = %d\n", a % b);
    printf("The value of a to the power b = %f\n", pow(a, b));
    getch();
    return 0;
}