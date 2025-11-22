#include <stdio.h>

int main() {
    // here I decleared a character array named name and gave it a size of 20.
    // It will store the user's name as a string.
    char name[20];
    // Ithen declared two variables, num1 and num2 and made them floats. 
    // which will hold the two numbers entered by the user.
    float num1, num2;
    // Get user input for name and two numbers
    printf("Enter your name: ");
   
    // Here i used the fgets function foe user inpout form the keyboard.
    //name – This is the array where the input will be stored so aka the users name.
    // sizeof(name) – This specifies the maximum number of characters to read 
    // stdin – This stands for standard input, which is typically the keyboard.
    fgets(name, sizeof(name), stdin);

    printf("Enter your first number: ");
    // i used scanf for user input to be stored into num1
    //%f format specifier is used to indicate that a float is expected
    // also used the Address-of Operator (&) to allocate input straight into num1
    scanf("%f", &num1);
    printf("Enter your first second number: ");
     scanf("%f", &num2);

    // Perform operations and display results
    printf("%s has entered %.2f and %.2f. %.2f + %.2f equals %.2f.\n", name, num1, num2, num1, num2, num1 + num2);
    printf("%s has entered %.2f and %.2f. %.2f - %.2f equals %.2f.\n", name, num1, num2, num1, num2, num1 - num2);
    printf("%s has entered %.2f and %.2f. %.2f * %.2f equals %.2f.\n", name, num1, num2, num1, num2, num1 * num2);
    printf("%s has entered %.2f and %.2f. %.2f / %.2f equals %.2f.\n", name, num1, num2, num1, num2, num1 / num2);

    return 0;
}