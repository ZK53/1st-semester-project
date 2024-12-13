#include <stdio.h>
#include <conio.h>

#include "Arithmetic.h"
#include "Calculations.h"
#include "matrixCalculator.h"
#include "solve2EquIn2Variables.h"
#include "solvingQuadraticEqu.h"


int main(void){
    while (1)
    {
        int choice;
        printf("\n\n=========WELCOME TO OUR ADVANCED CALCULATOR.=========\n\n");
        printf("Please choose your coming operation.\n");
        printf("1.For basic arithmetic operations.\n");
        printf("2.For advanced arithmetic operations.\n");
        printf("3.For matrices calculations.\n");
        printf("4.For solving two equ. in two variable.\n");
        printf("5.For solving quadratic equ.\n");
        printf("0.For exist from the calculator.\n");
        printf("Please enter your choice: ");
        scanf("%d",&choice);

        
        switch (choice)
        {
    
        case 1: 
            arithmeticMode();
            double arithmeticOperations (double x,int operationNum, double y);
            int exitArithmetic();
            break;

        case 2:
            {   
                int choice;
                do{
                    printf("\n\n1.For power calculation.\n");
                    printf("2.For roots calculations.\n");
                    printf("3.For logarithm calculations.\n");
                    printf("4.For angles operations.\n");
                    printf("5.For numerical approximations.\n");
                    printf("6.For absolute value.\n");
                    printf("7.For remainder.\n");
                    printf("0.To exist.\n");
                    printf("Please enter your choice:");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                        
                        case 1:
                            powerCalculation();
                            break;

                        case 2:
                            rootsCalculation();
                            break;
                        
                        case 3:
                            logarithmCalculation();
                            break;

                        case 4:
                            anglesOperations();
                            break;

                        case 5:
                            Numerical_approximation();
                            break;

                        case 6:
                            fabsCalculation();
                            break;

                        case 7:
                            fmodCalculation();
                            break;
                        case 0:
                            break;
                        default :
                            printf("Invalid choice. Please choose again.\n");
                            break;
                    }
                }while(choice != 0);
                break;
            }
            

        case 3:
            matrix();
            break;
        
        case 4:
            solveEquations(); 
            break;
        case 5:
            start();
            break;
        default:
            printf("\nInvalid choice. Please choose again.\n");
            break;
        }

        if(choice == 0){
            printf("Thank you for using our calculator.\n");
            break;
        }
    }

    return 0;
}