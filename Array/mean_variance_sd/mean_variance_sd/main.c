#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define SIZE 1024
int main()
{
    int n,i;
    float arr[SIZE],sum=0,xbar,vsum=0,sigmax,sd;
    printf("Enter the number of observations? \n");
    scanf("%d",&n);
    printf("Enter %d number of observations : \n",n);

    /*Loop To input or read all values*/

    for(i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }

    /*Loop To print observations */
    printf("The observations are: \n");
    for(i=0;i<n;i++){
        printf("%.3f  ",arr[i]);
    }

    /*Loop to finds sum of all values*/
    for(i=0;i<n;i++){
        sum = sum+arr[i];
        //sum +=arr[i];
    }

    /*Calculation For arithmetic Mean*/
    xbar = sum/n;

    /*Loop to finds numerator vsum to finds variance*/
    for(i=0;i<n;i++){
        //vsum = vsum+((arr[i]-xbar)*(arr[i]-xbar));
        //vsum +=((arr[i]-xbar)*(arr[i]-xbar));
        vsum = vsum + pow((arr[i]-xbar),2);
    }
    /*Calculation For Variance Mean*/
    sigmax = vsum/n;

    /*Calculation For Standard Deviation*/
    sd = sqrt(sigmax);

    /**
        For Tabulation Output
     **/

    /*
    printf("\n---------------------\n");
    printf("\nObservations\tXi-Xbar\t(Xi-Xbar)^2\n");
    printf("---------------------\n");
    for(i=0;i<n;i++){
        printf("%.2f",arr[i]);
        printf("\t|");
        printf(" %.2f",(arr[i]-xbar));
        printf("\t|");
        printf(" %.2f\n",pow((arr[i]-xbar),2));
    }
    */

    /*Printing Result*/
    printf("\n----------------------------");
    printf("\nArithmetic mean : %.4f", xbar);
    printf("\nVariance : %.4f", sigmax);
    printf("\nStandard deviation: %.4f",sd);
    printf("\n----------------------------\n");
    getch();
    return 0;
}
