/*C Function Without argument and without return value*/
#include <stdio.h>
#include <stdlib.h>

void addOfTwoInt(); //Function Declaration
int main()
{
    addOfTwoInt(); // Function Call
    getchar();
    return 0;
}
void addOfTwoInt(){ //Function Definition
    int a = 50, b = 20, sum;
    sum = a+b;
    printf("Sum of %d and %d = %d",a,b,sum);
}
