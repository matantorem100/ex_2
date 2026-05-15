#include <stdio.h>

// Function implementations:

void q1() {
    // <fill the code> for Question 1

}

void q2() {
    // <fill the code> for Question 2
   
}
    
// Main function
int main() {
    
    // NOTE: Do not change main function! It is used to choose and execute specific question.
    
    int choice;

    printf("Select a question to run (1/2): ");
    scanf(" %d", &choice);

    switch (choice) {
        case 1:
            q1();
            break;
        case 2:
            q2();
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
