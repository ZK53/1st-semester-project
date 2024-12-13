#include "matrixCalculator.h"


// Function to perform matrix operations
void matrix()
{
    int arr1[3][3], arr2[3][3], arr3[3][3], operation;

    // Display menu for the user to choose an operation
    printf("1 = Addition \n2 = Subtraction \n3 = Multiplication \n4 = Transpose \n5 = Determinant \nThe operation you want: ");
    scanf("%d", &operation);

    // Addition of two matrices
    if (operation == 1)
    {
        printf("\nThe nine elements of the first matrix:\n");
        // Input the elements of the first matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("\nThe nine elements of the second matrix:\n");
        // Input the elements of the second matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }

        printf("\nSum of the two matrices:\n");
        // Calculate and display the sum of the two matrices
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
                printf("%d\t", arr3[i][j]);
            }
            printf("\n");
        }
    }

    // Subtraction of two matrices
    if (operation == 2)
    {
        printf("\nThe nine elements of the first matrix:\n");
        // Input the elements of the first matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("\nThe nine elements of the second matrix:\n");
        // Input the elements of the second matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }

        printf("\nSubtraction of the two matrices:\n");
        // Calculate and display the subtraction of the two matrices
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr3[i][j] = arr1[i][j] - arr2[i][j];
                printf("%d\t", arr3[i][j]);
            }
            printf("\n");
        }
    }

    // Multiplication of two matrices
    if (operation == 3)
    {
        printf("\nThe nine elements of the first matrix:\n");
        // Input the elements of the first matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("\nThe nine elements of the second matrix:\n");
        // Input the elements of the second matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }

        printf("\nMultiplication of the two matrices:\n");
        // Calculate and display the product of the two matrices
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr3[i][j] = 0; // Initialize the cell to 0
                for (int k = 0; k < 3; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
                printf("%d\t", arr3[i][j]);
            }
            printf("\n");
        }
    }

    // Transpose of a matrix
    if (operation == 4)
    {
        printf("\nThe nine elements of the matrix:\n");
        // Input the elements of the matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &arr3[i][j]);
            }
        }

        printf("\nThe transpose of the matrix:\n");
        // Calculate and display the transpose of the matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d\t", arr3[j][i]);
            }
            printf("\n");
        }
    }

    // Determinant of a matrix
    if (operation == 5)
    {
        printf("\nThe nine elements of the matrix:\n");
        // Input the elements of the matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &arr3[i][j]);
            }
        }

        // Calculate the determinant of the 3x3 matrix
        int det = (arr3[0][0] * (arr3[1][1] * arr3[2][2] - arr3[1][2] * arr3[2][1])) -
                  (arr3[0][1] * (arr3[1][0] * arr3[2][2] - arr3[1][2] * arr3[2][0])) +
                  (arr3[0][2] * (arr3[1][0] * arr3[2][1] - arr3[1][1] * arr3[2][0]));

        printf("\nThe Determinant of the matrix: %d\n", det);
    }
}


int inverse(){
    
}