/*C functions with argument and with return value*/
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b); //Function Declaration
int main()
{
    int a = 10, b = 6, c;
    c = add(a,b); //Function Call
    printf("The sum is : %d", c);
    return 0;
}
int add(int a,int b){ //Function Definition
    return a + b;
}
