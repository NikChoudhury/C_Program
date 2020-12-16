#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter a Number :");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The Number %d is Even", num);
    }
    else
    {
        printf("The Number %d is Odd", num);
    }
    getch();
    return 0;
}