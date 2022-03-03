/*Program to Illustrate the Concept of Pointers*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a = 600;
    int *p;
    p = &a;
    printf("\nAddress of a: %u", &a);
    printf("\nAddress of a: %u", p);
    printf("\nAddress of p: %u", &p);
    printf("\nValue of p: %d", p);
    printf("\nValue of a: %d", a);
    printf("\nValue of a: %d", *(&a));
    printf("\nValue of a: %d", *p);

    getch();
    return 0;
}
