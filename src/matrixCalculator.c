#include "matrixCalculator.h"

#include <stdio.h>

int arr1[3][3], arr2[3][3], arr3[3][3], operation;

void matrix();
void getMatElements(int array[3][3]);
void matricesSum(int arr1[3][3], int arr2[3][3]);
void matricesSub(int arr1[3][3], int arr2[3][3]);
void matricesMulti(int arr1[3][3], int arr2[3][3]);
void calculateTranspose(int array[3][3]);
int calculateDeterminant(int array[3][3]);

// Function to perform matrix operations
void matrix() {
    printf("1 = Addition \n2 = Subtraction \n3 = Multiplication \n4 = Transpose \n5 = Determinant \nThe operation you want: ");
    scanf("%d", &operation);

    switch (operation) {
        case 1: // Addition
            printf("\nEnter the elements of the first matrix:\n");
            getMatElements(arr1);

            printf("\nEnter the elements of the second matrix:\n");
            getMatElements(arr2);

            printf("\nSum of the two matrices:\n");
            matricesSum(arr1, arr2);
            break;

        case 2: // Subtraction
            printf("\nEnter the elements of the first matrix:\n");
            getMatElements(arr1);

            printf("\nEnter the elements of the second matrix:\n");
            getMatElements(arr2);

            printf("\nSubtraction of the two matrices:\n");
            matricesSub(arr1, arr2);
            break;

        case 3: // Multiplication
            printf("\nEnter the elements of the first matrix:\n");
            getMatElements(arr1);

            printf("\nEnter the elements of the second matrix:\n");
            getMatElements(arr2);

            printf("\nMultiplication of the two matrices:\n");
            matricesMulti(arr1, arr2);
            break;

        case 4: // Transpose
            printf("\nEnter the elements of the matrix:\n");
            getMatElements(arr3);

            printf("\nTranspose of the matrix:\n");
            calculateTranspose(arr3);
            break;

        case 5: // Determinant
            printf("\nEnter the elements of the matrix:\n");
            getMatElements(arr3);

            int det = calculateDeterminant(arr3);
            printf("\nThe Determinant of the matrix: %d\n", det);
            break;

        default: // Invalid operation
            printf("\nInvalid operation selected!\n");
            break;
    }
}

// Function to input matrix elements
void getMatElements(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

// Function to calculate sum of two matrices
void matricesSum(int arr1[3][3], int arr2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate subtraction of two matrices
void matricesSub(int arr1[3][3], int arr2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate multiplication of two matrices
void matricesMulti(int arr1[3][3], int arr2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr3[i][j] = 0; // Initialize the cell to 0
            for (int k = 0; k < 3; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate transpose of a matrix
void calculateTranspose(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", array[j][i]);
        }
        printf("\n");
    }
}

// Function to calculate determinant of a matrix
int calculateDeterminant(int array[3][3]) {
    int det = (array[0][0] * (array[1][1] * array[2][2] - array[1][2] * array[2][1])) -
              (array[0][1] * (array[1][0] * array[2][2] - array[1][2] * array[2][0])) +
              (array[0][2] * (array[1][0] * array[2][1] - array[1][1] * array[2][0]));
    return det;
}
