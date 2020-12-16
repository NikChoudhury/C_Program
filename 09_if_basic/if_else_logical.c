#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    int vipPass = 0;
    printf("Enter your age :");
    scanf("%d", &age);
    if (age <= 70 && age >= 18 || vipPass == 1)
    {
        printf("You are above 18 and bellow 70,You can drive ");
    }
    else
    {
        printf("You cannot Drive");
    }
    getch();
    return 0;
}