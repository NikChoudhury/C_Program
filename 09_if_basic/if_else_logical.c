#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int check();
int main()
{
    int age;
    int vipPass = 0;
    printf("Enter your age :");
    scanf("%d", &age);
    check(age);
    getch();
    return 0;
}
int check(int age, int vipPass)
{
    if (age <= 70 && age >= 18 || vipPass == 1)
    {
        printf("You are above 18 and bellow 70,You can drive ");
        return 1;
    }
    else
    {
        printf("You cannot Drive");
        return 0;
    }
}
