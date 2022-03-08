/*Program to initialized the structure and access the elements of the structure*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Declaring the structure
struct Emp
{
    int e_no;
    char e_name[20];
    float e_sal;
};

int main()
{
    // Declaring the structure
    struct Emp e = {1001, "Nik Choudhury", 50000.99};
    printf("Emp Details: \n");
    printf("Emp Number: %d \n", e.e_no);
    printf("Emp Name: %s \n", e.e_name);
    printf("Emp Salary: %.2f \n", e.e_sal);
    return 0;
}