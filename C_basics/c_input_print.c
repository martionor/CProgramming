// This simple program asks the user for their favorite number,
// reads it using scanf, and then prints it back.
#include <stdio.h>

int main(){
    // Variable to store user's input
    int myFavoriteNumber = 0;
    
    // Prompt the user to enter a number
    printf("Please enter your favorite number \n");
    
    // Read an integer from user input and store it in the variable
    scanf("%d", &myFavoriteNumber);
    
    // Print the number back to the user
    printf("You entered number: %d\n", myFavoriteNumber);
    
    return 0;
}
