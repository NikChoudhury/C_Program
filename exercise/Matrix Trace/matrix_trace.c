/*Matrix Trace*/
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
void transposeMatrix(int matrix[MAX][MAX], int row, int col)
{
    int i, j, temp;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
}

int main()
{

    int matrix[MAX][MAX], result[MAX][MAX];
    int row, col;
out:
    printf("Enter the number of rows for the matrix :");
    scanf("%d", &row);
    printf("Enter the number of columns for the matrix :");
    scanf("%d", &col);

    if (row > MAX || col > MAX)
    {
        printf("Error! Size of Row or Column should not be greater %d\n", MAX);
        printf("Enter rows and columns again.\n");
        goto out;
    }
    while (row != col)
    {
        printf("\n\nNote: The trace is only defined for a square matrix (n × n)\n\n");
        printf("Error! Enter rows and columns again.\n");
        goto out;
    }

    printf("\nEnter elements for matrix matrix----\n");
    getMatrixElements(matrix, row, col);
    display(matrix, row, col);

    //Code For Trace
    int i, sum = 0;
    for (i = 0; i < row; i++)
    {
        sum += matrix[i][i];
    }

    //OR
    /* ****
    int i, j,sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
    }

    *** */

    printf("\nTrace matrix is---------\n");
    printf("tr(Matrix) = %d", sum);

    getch();
    return 0;
}