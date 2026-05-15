#include <stdio.h>

// Function implementations:

void q1() {
    // NOTE: Implement logic only. Print statements are already provided.
    
    int sum, diff, product, abs_sum;
    double ratio;
    
    // <fill the code> for Question 1


    printf("The sum is: %d\n", sum);
    printf("The difference is: %d\n", diff);
    printf("The product is: %d\n", product);
    printf("The ratio is: %.4f\n", ratio);
    printf("The absolute sum is: %d\n", abs_sum);
}

void q2() {
    // <fill the code> for Question 2
    
    
    
}

void q3() {
    // <fill the code> for Question 3

}

// Main function
int main() {
    
   // NOTE: Do not change main function! It is used to choose and execute specific question.
    
    int choice;

    printf("Select a question to run (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            q1();
            break;
        case 2:
            q2();
            break;
        case 3:
            q3();
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
