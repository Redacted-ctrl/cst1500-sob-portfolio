#include <stdio.h>

int main() {
    // I Declared two variables and two pointers to store their addresses
    // point1 is assigned the address of num1 using the address-of operator &.
    // and point 2 is assigned the address of num2
    int num1, num2;
    int *point1 = &num1, *point2 = &num2;

    // The user will input their first number by scanf replacing the format specifier
    // The input will be stored in num1 through the pointer
    printf("Enter the first number: ");
    scanf("%d", point1);

    // same as i did with before but this time the input is stored in num2
    printf("Enter the second number: ");
    scanf("%d", point2);

    // I then Printed the memory addresses of num1 and num2 using 
    // %p which is the format specifier for printing pointer addresses(%p is replaced by point)
    // i used void* to casts point to a void*. 
    // This tells printf they should be treated as a generic pointer for printing purposes.
    printf("\nAddress of Memory before calculations:\n");
    printf("Address of num1: %p\n", point1);
    printf("Address of num2: %p\n", point2);

    // I then Calculated  the sum, difference, product, and quotient
    // I used the pointers and i know they hold the num values
    // the results are stored in new varibles i created
    // so in this case we are de referencing
    int sum = *point1 + *point2;
    int difference = *point1 - *point2;
    int product = *point1 * *point2;
    float quotient = 0.0; 

    // since num2 is the denominator(divisor) i hsve to check its not 0
    // I made a simple if else statement to make sure if 0 is entered a message appears
    if (*point2 != 0) {
        quotient = (float)*point1 / *point2;
    } else {
        printf("\nWarning: Division by zero is not allowed.\n");
    }

    // Print results of my calculation using format specifier
    // I had to used if (*point2 != 0) a second time 
    printf("\nResults:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    if (*point2 != 0) {
        printf("Quotient: %.2f\n", quotient);
    }

    // same as before but after the calculations showing same address of memory
    printf("\nAddress of Memory after calculations:\n");
    printf("Address of num1: %p\n", (void*)point1);
    printf("Address of num2: %p\n", (void*)point2);

    return 0;
}