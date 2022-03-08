# Stuctures

Structure in **C** programming is a user defined data type that enables us to store the collection of differnt data type .
> Using stucture we can define a data type which holds more than one element of differnt type.

## Syntax

```c
struct Identity
{
    data_type element_1;
    data_type element_2;
    ..................
    ..................
    data_type element_n;
};
```

### Example

```c
struct Employee
{
    int e_no;
    char e_name[20];
    float e_sal;
    
};
```

### Array VS Structure

Using Array we can store 'n' number of elements but all the elements should be homogeneous (Same type)

```c
    int arr[5] = {10,20,30,40,50};
    char str[5] = "four";
```

while the structure helps to store differnt data type as single unit .

### Stucture Variable Declaration

```c
    sturct Emp{
        int e_no;
        char e_name[20];
        float e_sal;
    };
    main()
    {
        int a;
        struct Emp e;
    }
```

> Whenever we declare variable, it get memory allowcation.

### Where

- *struct Emp* --> data_type
- *e* --> variable or internal pointer variable , it holds base address

### Access

- e.e_no;
- e.e_name;
- e.e_sal;

### Dot (.) Operator

Dot (.) or period operator is used to access a data member or element in a structure variable or an array element. It has following form--
>structure_variable . data_member

### Local Structure

The declaration of a structure inside a particular function is called Local Structure.

- Example:

```c
    #include<stdio.h>
    #include <conio.h>
    int main()
    {
        // Declaring a local structure
        sturct LOCAL{
            int a,b;
            float x;
        };
        struct Local l;
        return 0;
    }
    /*int check()
    {
        //it is not allowed
        sturct LOCAL l;
    }*/
```

### Global Structure

The declaration of a structure outside to all the functions is called Global Structure.

- Example:

```c
    #include <stdio.h>
    #include <conio.h>
    // Declaring a global structure
    sturct GLOBAL{
        int a,b;
        float x;
    };
    int main()
    {
        sturct GLOBAL g;
        return 0;
    }
    int check()
    {
        //it is allowed
        sturct GLOBAL g;
    }
```

### Programs of structures

- Program to find size of the structure

```c
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
    
```

**Output:**

```console
    Size of Emp is 28 bytes. 
    Size of Emp is 28 bytes.
    Size of Std is 28 bytes.
    Size of Std is 28 bytes.
```

- How to initialized the structure directly and how to access the elements

```c
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

```

**Output:**

```console
    Emp Details: 
    Emp Number: 1001
    Emp Name: Nik Choudhury
    Emp Salary: 50000.99
```
