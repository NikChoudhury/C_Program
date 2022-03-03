#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define ROW_MAX 10
#define COL_MAX 10
int r, c, first[ROW_MAX][COL_MAX], second[ROW_MAX][COL_MAX], result[ROW_MAX][COL_MAX], i, j;

void inuptMatrix(int r,int c){
      for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
          printf("Enter element a%d%d: ", i + 1, j + 1);
          scanf("%d", &result[i][j]);
        }
      }
}

void displayMatrix(int matrix[r][c]){
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++) {
          printf("%d\t", matrix[i][j]);
        }
        printf("\n");
      }

}

void addMatrix(int first[r][c], int second[r][c])
{



    for (i = 0; i < r; i++)
    {
        for (j = 0; j< c; j++)
        {
            result[i][j] = first[i][j] + second[i][j];
            //printf("%d\t", sum[r][c]);
        }
        //printf("\n");
    }


}

int main2(){
    //int i,j,first[numberOfRow][numberOfCol];
    printf("Enter Details of first matrix\n");
    printf("Enter the number of rows of (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);
    inuptMatrix(r,c);


    displayMatrix(first);

    printf("Enter Details of Second matrix\n");
    printf("Enter the number of rows of (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);
    //inuptMatrix(r,c);
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
          printf("Enter element a%d%d: ", i + 1, j + 1);
          scanf("%d", &second[i][j]);
        }
      }
    displayMatrix(second);
    printf("\n\n");
    //addMatrix(first,second,result);
    int choice;

    while(1){
        printf("\nChoose the matrix operation,\n");
        printf("----------------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Transpose\n");
        printf("5. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Sum of matrix: \n");
                addMatrix(first, second);
                displayMatrix(result);
                break;
            case 2:
                //addMatrix(first, second, result);
                printf("Sum of matrix: \n");
                for (i = 0; i < r; i++)
                {
                    for (j = 0; j< c; j++)
                    {
                        result[i][j] = first[i][j] + second[i][j];
                        //printf("%d\t", sum[r][c]);
                    }
                    //printf("\n");
                }
                displayMatrix(result);
                break;
            case 3:
                printf("Thank You.\n");
                exit(0);
            default:
                printf("Invalid input.\n");
                printf("Please enter the correct input.\n");
        }
    }
  // menu-driven


    return 0;
}





/*
void inputArr1(){
    int i,j,first[ROW_MAX][COL_MAX];
    printf("Enter the number of row of first maxtrix");
    scanf("%d",&numberOfRow);
    printf("Enter the number of row of first maxtrix");
    scanf("%d",&numberOfCol);
    printf("Enter elements of matrix 1\n");
    for(i=0;i<numberOfRow;i++){
        for(j=0;j<numberOfCol;j++){
            printf("Enter a[%d][%d] element: ",i,j);
            scanf("%d",&first[i][j]);
        }
    }

}
void display1(int matrix[numberOfRow][numberOfRow])
{
     int i,j;
    for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n"); // new line
  }
}

*/
