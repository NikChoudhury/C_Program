/*Natural Sum */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

unsigned long long int naturalSum(int n);
unsigned long long int naturalSumWithoutRec(int n);
void printPlus(int);
int main() {

    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Without recursion\n");
    printf("Natural Sum of ");
    printPlus(num);
    printf("%llu\n",naturalSumWithoutRec(num));
    printf("\n-----------\n");
    printf("With recursion\n");
    printf("Natural Sum of ");
    printPlus(num);
    printf("%llu\n",naturalSum(num));

    getch();
    return 0;
}
/*Function Defination Of Natural Sum With Recursion*/
unsigned long long int naturalSum(int n) {
  if (n != 0)
    return n + naturalSum(n-1);
  else
    return 0;
}
/*Function Defination Of Natural Sum Without Recursion*/
unsigned long long int naturalSumWithoutRec(int n) {
    int i=1,sum=0;
    do
    {
        sum += i; //sum= sum+i;
        i++;
    }
    while(i<=n);
    return sum;
}

void printPlus(num){
    int i;
    for(i=1;i<=num;i++){
        printf("%d",i);
        if(num!=i){
            printf("+");
        }else{
            printf(" = ");
        }

    }

}
