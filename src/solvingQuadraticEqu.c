#include "solvingQuadraticEqu.h"


// ==================================================
// | Function to Take Coefficients of the Equation  |
// ==================================================
void inputCoefficients(double eq[3])
{
    printf("\n=========== Input Coefficients ===========\n");
    printf("Enter the coefficients for the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("Enter coefficient a: ");
    scanf("%lf", &eq[0]);
    printf("Enter coefficient b: ");
    scanf("%lf", &eq[1]);
    printf("Enter coefficient c: ");
    scanf("%lf", &eq[2]);
}

// ==================================================
// | Function to Display the Equation               |
// ==================================================
void displayEquation(double eq[3])
{
    printf("\n=========== Display Equation ===========\n");
    printf("%.2lfx^2 + %.2lfx + %.2lf = 0\n", eq[0], eq[1], eq[2]);
}

// ==================================================
// | Function to Solve the Quadratic Equation       |
// ==================================================
void solveQuadratic(double eq[3])
{
    double a = eq[0], b = eq[1], c = eq[2];
    double discriminant = b * b - 4 * a * c;

    printf("\n=========== Results ===========\n");

    if (discriminant > 0)
    {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The equation has two real and distinct roots:\n");
        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    }
    else if (discriminant == 0)
    {
        // One real root (repeated root)
        double root = -b / (2 * a);
        printf("The equation has one real root: %.2lf\n", root);
    }
    else
    {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The equation has two complex roots:\n");
        printf("Root 1: %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2: %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}

// ==================================================
// | Start Function                                 |
// ==================================================
void start()
{
    char choice;
    do
    {
        double eq[3]; // coefficients a, b, and c

        inputCoefficients(eq);
        displayEquation(eq);
        solveQuadratic(eq);

        printf("\nDo you want to solve another quadratic equation? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the quadratic equation solver. Goodbye!\n");
}