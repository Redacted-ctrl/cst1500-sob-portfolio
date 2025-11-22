#include <stdio.h>

int main() {
    // In this line I declared character arrays using char
    //to store my student name, my student ID, and my degree program
    //I defined All three variables in one line
    // I used [] to specify that my varibles are an array of characters (a string).
    char name[] = "Mohssine Deflaoui Harrata", studentID[] = "M00930038", degreeProgramme[] = "Information Technology";
    // I then created 4 varibles from the numbers in my student ID
    int num1 = 9, num2 = 0, num3 = 8, num4 = 3;

    // I used the format specifier %s to print for strings
    // The variables are then inserted into the placeholders in the string.
    printf("Name: %s\nStudent ID: %s\nDegree Programme: %s\n", name, studentID, degreeProgramme);
    // This line prints a string stating my reason for studying the program
    printf("Reason for studying this programme: I am interested in all aspects of \ntechnology and the future it holds.\n");

    // I used the operator %d to insert the integer result
    // I used .2f for two decimal place
    // I used (float)
    printf("\nCalculations using student ID digits 9,3 and 8:\n");
    printf("9 + 0: %d\n", num1 + num2);              
    printf("9 - 8: %d\n", num1 - num3);      
    printf("9 / 3: %.2f\n", (float)num1 / num4); 
    printf("3 * 3: %d\n", num4 * num4);           


    return 0;
}