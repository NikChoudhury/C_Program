#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int a,b;
void inputValue();
int add();
int sub();
int mult();
int divi();
/*
int main(){
    int a,b;
    int choice;
    while(1){
        printf("----------------\n");
        printf("Enter '1' for addition \n");
        printf("Enter '2' for Subtraction \n");
        printf("Enter '3' for Multiplication \n");
        printf("Enter '4' for division \n");
        printf("Enter '5' for Quit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        printf("----------------\n");
        if( choice == 1 || choice == 2 || choice == 3 || choice == 4){
            printf("Enter 2 integer numbers\n");
            scanf("%d %d", &a, &b);
        }
        switch(choice){

            case 1:
                printf("%d + %d = %d\n", a, b, add(a,b));
                break;
            case 2:
                printf("%d - %d = %d\n", a, b, sub(a,b));
                break;
            case 3:
                printf("%d x %d = %d\n", a, b, mult(a,b));
                break;
            case 4:
                if(b !=0)
                    printf("%d / %d = %d\n", a, b, divi(a,b));
                else
                    printf("Number can't be divided by 0\n");
                break;
            case 5:
                exit(1);
                break;
            default: printf("You entered wrong choice\n");
                 break;
        }

    }
    getch();
    return 0;
}

*/
int main(){

    char choice;
    while(1){
        printf("----------------\n");
        printf("Enter '+' for addition \n");
        printf("Enter '-' for Subtraction \n");
        printf("Enter '*' for Multiplication \n");
        printf("Enter '/' for division \n");
        printf("Enter 'Q' for Quit\n");
        printf("Enter your choice:");
        scanf("%s",&choice);
        printf("----------------\n");

        switch(choice){
            case '+':
                inputValue();
                printf("%d + %d = %d\n", a, b, add(a,b));
                break;
            case '-':
                inputValue();
                printf("%d - %d = %d\n", a, b, sub(a,b));
                break;
            case '*':
                inputValue();
                printf("%d x %d = %d\n", a, b, mult(a,b));
                break;
            case '/':
                inputValue();
                if(b !=0)
                    printf("%d / %d = %d\n", a, b, divi(a,b));
                else
                    printf("Number can't be divided by 0\n");
                break;
            case 'q':
            case 'Q':
                exit(1);
                break;
            default: printf("You entered wrong choice\n");
                 break;



        }

    }

    getch();
    return 0;

}

void inputValue(){

    printf("Enter 2 integer numbers\n");
    scanf("%d %d", &a, &b);

}

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mult(int a, int b){
    return a*b;
}
int divi(int a, int b){
    return a/b;
}

