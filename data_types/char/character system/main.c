#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    unsigned int ch = 258;
    //printf("%d",ch);
    //printf("%c",ch);

    //char ch;
    //int i;
    printf("Enter one character :");
    ch = getche();
    //scanf("%c",&ch);

    printf("\nThe ASCII Code of %c is %d",ch,ch);

    puts("\n\nPress any key to Stop");


    /*
    for(i=0;i<256;i++)
    {
        printf("ASCII Value of '%c' is %d\n",i,i);
    }

    */
    return 0;
}
