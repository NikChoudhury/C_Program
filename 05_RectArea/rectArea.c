#include <stdio.h>
#include <conio.h>
int main()
{
    float length, width, area;
    printf("Eneter the length of Reactangle : ");
    scanf("%f", &length);
    printf("Enter the width of Reactangle : ");
    scanf("%f", &width);
    area = length * width;
    printf("Area of the Reactangle is : %f", area);
    getch();
    return 0;
}