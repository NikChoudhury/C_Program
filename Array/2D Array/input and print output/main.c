#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    /*2D Array declaration*/
    int abc[5][4];
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("Enter value for abc[%d][%d] : ",i,j);
            scanf("%d",&abc[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("%d \t",abc[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
