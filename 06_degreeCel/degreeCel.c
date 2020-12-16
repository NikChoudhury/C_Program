#include <stdio.h>
#include <conio.h>
int main()
{
    float f, c;
    printf("Degree Fahrenheit ? : ");
    scanf("%f", &f);
    c = 5.0 / 9.0 * (f - 32);
    printf("Degree Centigrade = %f", c);
    getch();
    return 0;
}