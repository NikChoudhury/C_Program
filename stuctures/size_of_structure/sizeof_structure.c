/*Program to find size of the structure*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Declaring a global structure
struct Emp
{
    int e_no;
    char e_name[20];
    float e_sal;
};

int main()
{
    // Declaring a local structure
    struct Std
    {
        int s_no;
        char s_name[20];
        float s_mark;
    };
    // Declaration of structure variable
    struct Emp e;
    struct Std s;
    printf("Size of Emp is %d bytes. \n", sizeof(e));
    printf("Size of Emp is %d bytes. \n", sizeof(struct Emp));

    printf("Size of Std is %d bytes. \n", sizeof(s));
    printf("Size of Std is %d bytes. \n", sizeof(struct Std));
    return 0;
}