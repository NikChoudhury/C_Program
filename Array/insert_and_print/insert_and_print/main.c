/*Program To insert element into an array and print the array element*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a[5],i;
    printf("Enter 5 element into an array :\n");

    for(i=0;i<5;i++){
            scanf("%d",&a[i]);
    }

    printf("The 5 elements are : \n");
    for(i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    //printf("\n%d",a[4]);
    getch();
    return 0;
}
