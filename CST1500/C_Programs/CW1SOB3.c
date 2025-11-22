#include <stdio.h>
int main() {
    // Here i declared an integer variable named score that will
    // store the exam score entered by the user.
    int score;
    // i used while(1) for an infinite loop, because The condition 1 is true 
    // this is so that the user can enter multiple scores one after another
    // until it encounters a break statement that i will create.
    while (1) {
        printf("Enter your exam score (to quit Enter -1): ");

        // This line will read the value from the user and store it in (score) using(&)
        //%d format specifier tells scanf to expect an integer input
        // If the input is not an integer, scanf will fail and return a value other than 1. 
        // If scanf returns any value other than 1, the condition scanf("%d", &score) != 1 will be true, indicating that an invalid input was detected.
        if (scanf("%d", &score) != 1) {
            // I created this loop to clear any leftover characters in the
            // input buffer until it encounters a newline (\n). 
            while (getchar() != '\n'); 
            //This prints an error message informing the user that the input 
            // was invalid
            printf("Invalid input. Please enter a valid score number or to quit Enter -1.\n");
            continue; // skips the remaining code in the current loop
            // It will asks the user to enter a new value.
        } // this closes the if block

         // : This line checks if the user entered -1. 
         // If so, the program executes the break; 
        if (score == -1) break; 
        //  If score is less than 0 or greater than 100, 
        // the following code inside this if block will be executed. aka the print
        // else the other printf will be executed with all the scores
        if (score < 0 || score > 100)
            printf("Invalid score. Enter a score between 0 and 100 or to quit Enter -1.\n");
        else
        // If score is not less than 40, 
        // the expression after the colon (:) is evaluated.
        // also note that i used the Ternary Operator (?:)
        // to replace if-else and make the code more concise
            printf("Your exam score is %d which is a %s.\n", score, 
                (score < 40) ? "FAIL" : 
                (score < 50) ? "THIRD" : 
                (score < 60) ? "LOWER SECOND" : 
                (score < 70) ? "UPPER SECOND" : "FIRST"); // anything more than 70 is a first
    }

    return 0;
}