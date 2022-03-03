/*Multiplication Table Up to 10*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n,i;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d \n",n,i,n*i);
    }
    getch();
    return 0;
}
