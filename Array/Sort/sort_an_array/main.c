/*Sorting an array and hence finding median*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int arr[10];
    int i,j,temp;
    for(i=0;i<10;i++){
        printf("Enter the number for [%d] element: ",i);
        scanf("%d",&arr[i]);
    }

    /*Sort in descending order*/
    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(arr[j]<arr[j+1]){
                /* interchange */
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;

            }
        }
    }

    /*printing result */
    printf("Sorted array in descending order: \n");
    for(i=0; i<10; i++) {
        printf("%d  ", arr[i]);
    }

    /*Sort in Ascending order*/

    getch();
    return 0;
}
