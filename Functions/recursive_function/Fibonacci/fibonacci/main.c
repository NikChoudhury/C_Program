#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
unsigned int fiboWithRecursion(int i){
    if ( i <0 || i == 0 )
      return 0;
    else if ( i == 1 )
      return 1;
    else
      return ( fiboWithRecursion(i-1) + fiboWithRecursion(i-2) );
}

unsigned int fiboWithOutRecursion(int n){
    int i,n1=0,n2=1,n3;
    for(i=0;i<n;i++){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
    }
    return n1;
}

int main()
{
    int i,n;
    printf("Enter Total terms: ");
    scanf("%d",&n);

    printf("\n\nFibonacci series without Recursion \n");
    printf("Fibonacci series terms are \n");
    for(i = 0 ; i<n ; i++ ){
        printf("%u ", fiboWithOutRecursion(i));
    }

    printf("\n\nFibonacci series with Recursion \n");
    printf("Fibonacci series terms are \n");
    for(i = 0 ; i<n ; i++ ){
        printf("%u ", fiboWithRecursion(i));
    }


    getch();
    return 0;
}
