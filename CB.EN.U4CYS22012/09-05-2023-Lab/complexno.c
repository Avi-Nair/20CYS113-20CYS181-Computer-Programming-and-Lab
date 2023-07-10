#include<stdio.h>

struct compno
{
    int real, comp;
};

void main()
{
    struct compno a,b;  // Declare two variables of type struct compno to store complex numbers

    // Read the real and complex parts of the first complex number
    scanf("%d %d", &a.real, &a.comp);

    // Read the real and complex parts of the second complex number
    scanf("%d %d", &b.real, &b.comp);

    // Perform addition of the complex numbers and print the result
    printf("%d+%di\n", a.real + b.real, a.comp + b.comp);

    // Perform subtraction of the complex numbers and print the result
    printf("%d+%di", a.real - b.real, a.comp - b.comp);
}

