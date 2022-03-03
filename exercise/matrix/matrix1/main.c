#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_ROW 10
#define MAX_COL 10

int first[MAX_ROW][MAX_COL], second[MAX_ROW][MAX_COL],result[MAX_ROW][MAX_COL];
int row,col,i,j;

void displayMatrix(int [MAX_ROW][MAX_COL]);
void addMatrix(int [MAX_ROW][MAX_COL],int [MAX_ROW][MAX_COL],int [MAX_ROW][MAX_COL]);
void subMatrix(int [MAX_ROW][MAX_COL],int [MAX_ROW][MAX_COL],int [MAX_ROW][MAX_COL]);
void multMatrix(int [MAX_ROW][MAX_COL],int [MAX_ROW][MAX_COL],int [MAX_ROW][MAX_COL]);
void transpose(int [MAX_ROW][MAX_COL],int [MAX_ROW][MAX_COL]);
int trace(int [MAX_ROW][MAX_COL]);
void displayTransMatrix(int [MAX_ROW][MAX_COL]);

int main()
{

    printf("For First matrix\n");
    printf("Enter the number of row (MAX %d): ",MAX_ROW);
    scanf("%d",&row);
    printf("Enter the number of col (MAX %d): ",MAX_COL);
    scanf("%d",&col);
    if(row>MAX_ROW || col>MAX_COL){
        printf("Size of Row or Col should not greater %d",MAX_COL);
        exit(1);
    }
    /*Input the element of first matrix*/
    printf("Enter the elements for first matrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter the element [%d%d] :",i+1,j+1);
            scanf("%d",&first[i][j]);
        }
    }

    printf("\nFirst matrix is \n");
    displayMatrix(first);

    /*Input the element of Second matrix*/
    printf("\nEnter the elements for Second matrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter the element [%d%d] :",i+1,j+1);
            scanf("%d",&second[i][j]);
        }
    }

    printf("\nSecond matrix is \n");
    displayMatrix(second);

    int choice;
    while(1){
        printf("\nChoose the matrix operation,\n");
        printf("----------------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Transpose\n");
        printf("5. Trace\n");
        printf("6. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Sum of matrix: \n");
                addMatrix(first,second,result);
                displayMatrix(result);
                break;
            case 2:
                printf("Subtraction of matrix: \n");
                subMatrix(first,second,result);
                displayMatrix(result);
                break;
            case 3:
                printf("Multiplication of matrix: \n");
                multMatrix(first,second,result);
                displayMatrix(result);
                break;
            case 4:
                printf("Transpose of the first matrix: \n");
                transpose(first, result);
                displayTransMatrix(result);
                printf("Transpose of the second matrix: \n");
                transpose(second, result);
                displayTransMatrix(result);
                break;
            case 5:
                if(row!=col){
                    printf("Trace is possible only for a square matrix.\n");
                    break;
                }

                printf("\nTrace of the first matrix: %d ",trace(first));
                printf("\nTrace of the second matrix: %d",trace(second));
                trace(second);
                break;
            case 6:
                printf("Thank You.\n");
                exit(0);
            default:
                printf("Invalid input.\n");
                printf("Please enter the correct input.\n");


        }
    }
    getch();
    return 0;
}

/*Function Definition for display matrix*/
void displayMatrix(int result[MAX_ROW][MAX_COL]){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",result[i][j]);

        }
        printf("\n");
    }
}

void addMatrix(int first[MAX_ROW][MAX_COL],int second[MAX_ROW][MAX_COL],int result[MAX_ROW][MAX_COL]){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            result[i][j] = first[i][j]+second[i][j];

        }
    }
}

void subMatrix(int first[MAX_ROW][MAX_COL],int second[MAX_ROW][MAX_COL],int result[MAX_ROW][MAX_COL]){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            result[i][j] = first[i][j]-second[i][j];

        }
    }
}

void multMatrix(int first[MAX_ROW][MAX_COL],int second[MAX_ROW][MAX_COL],int result[MAX_ROW][MAX_COL]){
    int i,j,k;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            result[i][j] = 0;
            for(k=0;k<row;k++){
                result[i][j]=result[i][j]+(first[i][k]*second[k][j]);
            }

        }
    }
}
void transpose(int matrix[MAX_ROW][MAX_COL], int result[MAX_ROW][MAX_COL])
{
    int i,j;
    // computing the transpose
    for (i = 0; i < row; ++i){
      for (j = 0; j < col; ++j) {
        result[j][i] = matrix[i][j];
      }
    }
}

int trace(int matrix[MAX_ROW][MAX_COL])
{
    int i,sum=0;
    for(i=0;i<row;i++){
        sum = sum + matrix[i][i];
    }
    return sum;
}

void displayTransMatrix(int result[MAX_ROW][MAX_COL]){
    int i,j;
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf("%d\t",result[i][j]);

        }
        printf("\n");
    }
}
