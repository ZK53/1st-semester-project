#include "solve2EquIn2Variables.h"


// Function to receive input from the user
void getInput(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2) {
    printf("\n=========== Input Coefficients ===========\n");
    printf("Enter coefficients for the first equation (a1, b1, c1): ");
    scanf("%lf %lf %lf", a1, b1, c1);

    printf("Enter coefficients for the second equation (a2, b2, c2): ");
    scanf("%lf %lf %lf", a2, b2, c2);
}

// Function to solve equations in a loop
void solveEquations() {
    char repeat;  // Variable to check if the user wants to repeat

    do {
        double a1, b1, c1, a2, b2, c2;

        // Get input from the user
        getInput(&a1, &b1, &c1, &a2, &b2, &c2);

        // Calculate the determinant
        double determinant = a1 * b2 - a2 * b1;

        printf("\n=========== Results ===========\n");

        // Check if determinant is zero
        if (determinant == 0) {
            printf("The equations have no unique solution (determinant is zero).\n");
        } else {
            // Calculate solutions for x and y
            double x = (c1 * b2 - c2 * b1) / determinant;
            double y = (a1 * c2 - a2 * c1) / determinant;

            // Print results in table format
            printf("%-20s %-20s\n", "Variable", "Value");
            printf("%-20s %-20s\n", "--------------------", "--------------------");
            printf("%-20s %.2f\n", "x", x);
            printf("%-20s %.2f\n", "y", y);
        }

        // Ask the user if they want to solve another system
        printf("\nWould you like to solve another system of equations? (y/n): ");
        scanf(" %c", &repeat);  // Note the space before %c to consume leftover newline character
    } while (repeat == 'y' || repeat == 'Y');

    printf("\nThank you for using the equation solver. Goodbye!\n");
}