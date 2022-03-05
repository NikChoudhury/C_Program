/*Matrix addition and subtraction*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10

// function to get matrix elements entered by the user
void getMatrixElements(int matrix[MAX][MAX], int row, int column)
{

    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the element [%d%d] :", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// function to display the matrix
void display(int matrix[MAX][MAX], int row, int column)
{

    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
}

// function to add two matrices
void addMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2)
{
    int i, j;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {

            result[i][j] = first[i][j] + second[i][j];
        }
    }
}

// function to add two matrices
void subMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2)
{
    int i, j;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {

            result[i][j] = first[i][j] - second[i][j];
        }
    }
}
int main()
{

    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2, i, j, k;
out:
    printf("Enter the number of rows for the first matrix :");
    scanf("%d", &row1);
    printf("Enter the number of columns for the first matrix :");
    scanf("%d", &col1);

    printf("\nEnter the number of rows for the second matrix :");
    scanf("%d", &row2);
    printf("Enter the number of columns for the second matrix :");
    scanf("%d", &col2);

    if (row1 > MAX || col1 > MAX || row2 > MAX || col2 > MAX)
    {
        printf("Error! Size of Row or Column should not be greater %d\n", MAX);
        printf("Enter rows and columns again.\n");
        goto out;
    }

    // Taking input until
    // 1st matrix row is not equal to 2nd row and 1st matrix col is not equal to 2nd col
    while (row1 != row2 || col1 != col2)
    {

        printf("\n\nNote: A matrix can only be added to (or subtracted from) another matrix if the two matrices have the same dimensions .\n\n");
        printf("Error! Enter rows and columns again.\n");
        goto out;
    }

    printf("\nEnter elements for first matrix----\n");
    getMatrixElements(first, row1, col1);
    display(first, row1, col1);

    printf("\nEnter elements for second matrix----\n");
    getMatrixElements(second, row2, col2);
    display(second, row2, col2);

    addMatrices(first, second, result, row1, col1, row2, col2);
    printf("\nAddition of first and second matrix is---------\n");
    display(result, row1, col2);

    subMatrices(first, second, result, row1, col1, row2, col2);
    printf("\nSubtraction of first and second matrix is---------\n");
    display(result, row1, col2);
    getch();
    return 0;
}