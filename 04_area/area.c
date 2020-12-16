#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{

    float a, b, c, s, area;
    printf("\n Enter three Sides: ");
    scanf("%f,%f,%f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("\n Area of Triangle = %6.2f Sq. units", area);
    getch();
}