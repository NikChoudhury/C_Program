/*C functions Without argument and with return value*/
#include <stdio.h>
#include <stdlib.h>

int takeNumber(); //Function Declaration
int main()
{
    int num;
    num = takeNumber(); // Function Call
    printf("The number entered is %d",num);
    return 0;
}
int takeNumber(){ //Function Definition
    int i;
    printf("Enter a number :");
    scanf("%d",&i);
    return i;
}
