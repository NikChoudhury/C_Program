/*Program to swap two numbers using pointers*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    printf("Before Swap value of a:");
    scanf("%d",&a);
    printf("Before Swap Value of b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\n------------------------------\n\n");
    printf("After Swap value of a: %d\n",a);
    printf("After Swap Value of b: %d\n",b);
    getch();
    return 0;
}

