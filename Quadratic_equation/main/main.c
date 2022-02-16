/*Quadratic Equation*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadratic_root(double,double,double);
int main()
{
    double a,b,c;
    printf("Enter the coefficient of a:");
    scanf("%lf",&a);
    printf("Enter the coefficient of b:");
    scanf("%lf",&b);
    printf("Enter the coefficient of c:");
    scanf("%lf",&c);
    quadratic_root(a,b,c);
    getch();
    return 0;
}
void quadratic_root(double a, double b,double c){
    double disc,root1,root2,realPart,imagPart;
    disc = b*b - (4*a*c);
    printf("\nDiscriminant = %lf \n",disc);
    if(disc>0){
        root1 = (-b+sqrt(disc))/(2*a);
        root2 = (-b-sqrt(disc))/(2*a);
        printf("\nRoots are real and different\n");
        printf("root1 = %lf\t",root1);
        printf("root2 = %lf\t",root2);
    }
    else if(disc == 0){
        root1 = -b/(2*a);
        printf("\nRoots are real and Equal\n");
        printf("root1 = root2 = %lf \n",root1);
    }else{
        realPart = -b/(2*a);
        imagPart = sqrt(-disc)/(2*a);
        printf("Roots are complex and differant\n");
        printf("root1 = %lf + %lfi \n",realPart,imagPart);
        printf("root2 = %lf - %lfi \n",realPart,imagPart);
    }
}
