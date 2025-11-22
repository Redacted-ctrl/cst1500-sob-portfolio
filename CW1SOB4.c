#include <stdio.h>
#include <string.h> // included the string library to use the strcmp() function
// here i decleated two functions but have not yet defined them.
// now since i want these two functions to perform an action 
//and not to return a value i used the keyword void.
void printName(int X, char userName[]); 
void passwordEntry(char userName[]);

int main() {
    // here i Declared an integer variable X
    // to store the number of times the user’s name will be printed.
    // Declares a character array named username with a size of 20
    // to store the users name 
    int X;
    char userName[20];
    // scanf reads the input from the user in this case a number and
    // stores it in the varible (X) using the address-of operator (&)
    printf("Enter a whole number : ");
    scanf("%d", &X);
    // scanf reads the input from the user in this case a string using
    // the format specifier (%s) and stores it in the varible (username)
    printf("Enter your name: ");
    scanf("%s", userName);

    // Calls the printName function, passing X and userName as the arguments. 
    // This function is going to print the name of the user X amount of times.
    // I also called the passwordEntry function, passing userName as an argument. 
    // This function is going to prompt the user to enter a password and validate it.
    printName(X, userName); 
    passwordEntry(userName); 

    return 0;
}   // This closes the main function which is 1 of 3 functions in this code.

// Now im going to define the function i decleared earlier named printname
// And im going to give it two parameters x and username
void printName(int X, char userName[]) {
    // This prints a message on the user’s name being printed X amount of times. 
    // value of X will replace The format specifier (%d) 
    printf("\nPrinting your name %d times:\n", X);
    // Here i created a loop to print the name x amount of times
    // int i = 0; initializes the loop counter i to 0.
    //i < X; keeps the loop running as long as i is less than X.
    //i++ increments i by 1 after each iteration.
    // then i print the users name by replacing the format specifier (%s)
    for (int i = 0; i < X; i++) {
        printf("%s\n", userName);
    }
}  // This closes the printname function which is the 2nd function

// Once again I defined the function i decleared earlier named passwordEntry
// I use char userName as an argument
// I then declare a constant char array and named it correctPassword
// This will be used for password validation
void passwordEntry(char userName[]) {
    const char correctPassword[] = "Cat211";
    // I declared a char array named password to store the users password
    // I then declared an int varible to track the number of attempts made by the user.
    char password[20];
    int attempts;
    // I then created a for loop that allows the user to have 3 attempts
    // to enter the corect password
    //attempts = 1; initializes the attempts counter to 1.
    //attempts <= 3; keeps the loop running as long as attempts is less than or equal to 3.
    //attempts++ increments attempts by 1 after each iteration.
    for (attempts = 1; attempts <= 3; attempts++) {
        // The printf and scanf will ask the user to enter the password
        // and it will show the current attempt number
        // the value of attempts replaces the format specidier (%d).
        // %s format specifier (%s) reads the password inputyed by the user 
        // and stores it in password
        printf("Attempt %d: Enter password: ", attempts);
        scanf("%s", password);
        // i created an if statement to compare the entered password
        // with the correctPassword using strcmp if they match it returns 0
        // now the if statemnt will make it so if it matches i want the
        // first messege to be printed with username and attempt value in there
        // otherwise print incorrect password
        if (strcmp(password, correctPassword) == 0) {
            printf("Success\nWell done %s, you got the password right in %d attempts!\n", userName, attempts);
            return;
        } 
        printf("Incorrect password.\n");
    } // closes the for loop
    //this last printf is outside the for loop and is executed only
    // if the for loop completes all its iterations
    // aka the user did not enter the correct password within 3 attempts.
    printf("Failure\nBad luck %s, you took %d attempts, you are locked out.\n", userName, attempts - 1);
} // This is the end of passwordentry function
  // the 3rd and last function in this code 