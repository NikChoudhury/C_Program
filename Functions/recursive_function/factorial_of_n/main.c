#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

unsigned long long int factorial(int);
int main()
{
    int n,check;
    printf("Enter a positive Integer: ");
    //Input Validation
    check=scanf("%d",&n);
    if(check !=1){
        printf("\nPlease enter a integer!");
        return 0;
    }else if(n<0){
        printf("\nThere is no factorial exist for the negative number");
        return 0;
    }

    printf("Factorial of %d is %llu\n",n,factorial(n));
    getch();
    return 0;
}
/*Recursive Function Definition For Factorial*/
unsigned long long int factorial(int n){
    if(n<0){ //Base Case or termination case
        return 0;
    }
    else if(n==0 || n==1){ //Base Case or termination case
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

/*unsigned long long int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++)
    fact = fact * i;
    return fact;
}*/

