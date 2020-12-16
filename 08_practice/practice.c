/*
    Write a program to check wheather a number is divisible by 97 or not??

*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Insert a number :");
    scanf("%d", &num);
    float check = num % 97;
    printf("%f\n", check);
    if (check != 0)
    {
        printf("The insert Number is not divisible by 97");
    }
    else
    {
        printf("The insert Number is  divisible by 97");
    }
    getch();
    return 0;
}