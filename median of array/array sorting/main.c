/*Sorting of an array and hence finding median*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 1024
int main()
{
    int i,j,n;
    float median;
    float a[SIZE], temp;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    //Reading array element
    printf("Input %d values \n",n);
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    //Sorting Ascending
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    //Sorting Descending order
  /*  for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    */

    /* calculation median */
    if(n%2 ==0){
        median = (a[(n/2)-1]+a[(n/2)])/2.0;
    }else{
        median = a[(n/2)];
    }

    /*printing result */
    printf("Sorted array is : \n");
    for(i=0; i<n; i++) {
        printf("%.2f\t", a[i]);
    }
    printf("\nMedian is %f\n", median);
    getch();
    return 0;
}
