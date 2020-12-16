#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter a Charcter : ");
    ch = getche();
    printf("\n\n ASCII value of %c is %u", ch, ch);
    puts("\n Press Any Key To Stop !!");
    getch();
    return 0;
}
