#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, sum;
    printf("Please Enter First number : ");
    scanf("%d", &a);
    printf("Please Enter Sceond number : ");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum = %d", sum);
    getch();
    return 0;
}

// gcc sum.c -o sum.exe