#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void swap (int,int);
int main()
{
    int a, b;
    printf("Before Swap value of a:");
    scanf("%d",&a);
    printf("Before Swap Value of b:");
    scanf("%d",&b);
    swap(a,b);
    getch();
    return 0;
}
/*Function defination to swap the value*/
void swap(int a, int b){
    a = a+b;
    b= a-b;
    a= a-b;
   printf("After Swap value of a: %d\n",a);
   printf("After Swap Value of b: %d\n",b);
}
