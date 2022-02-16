/*C functions with argument and without return value*/
#include <stdio.h>
#include <stdlib.h>

void printStar(int n); //Function Declaration

int main()
{
    printStar(8); //Function Call
    return 0;
}
void printStar(int n){ //Function Definition
    int i;
    for(i=0;i<n;i++){
        printf("%c\t",'*');
    }

}

