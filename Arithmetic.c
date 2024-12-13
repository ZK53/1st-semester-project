#include "Arithmetic.h"


int arithmeticMode()
{
    while (1)
    {

    // Prompt the user to choose a specific operation

        printf("\n\n=========== Arithmetic Operations ===========\n");
        printf("1. Summation\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("To exit press 0\n");


    // prompt the user to enter valid operation number
        int operationNum;
        do
        {
            operationNum  = getch() - '0'; //calculate the numeric value instead of ASCII Code
        }while (!((operationNum >= 0) && (operationNum <= 4)));



    // To exit the program
        if (operationNum == 0)
            {
                printf("\n\n=========== Arithmetic Operations Exited ===========\n");
                return 2;
            }


    // Prompt the user to enter two *** valid*** numbers
            double firstNum; // to store first number
            double secondNum; // to store second number
            int check; // to check if the user entered characters instead of the number
            char extra; // to check if the user entered extra characters after the number

            do
            {
            printf("\nEnter First Number: ");
            check = scanf("%lf%c", &firstNum, &extra);


            if ((check == 2) && (extra == '\n')) // to check if the user entered extra characters
                {
                    if ((firstNum > NUM_MAX) || (firstNum < -NUM_MAX)) // to check if the user entered a number out of range
                        {
                            printf("\n=========== Number is out of Range ===========\n");
                        }
                    else
                        break;
                }
            else
                {
                    printf("\n=========== Invalid Number ===========\n");
                    while(getchar() != '\n'); // *** to clear the buffer line ***

                }

            } while (1);

        // all the same as done with first Number except division by zero
           do
            {
            printf("\nEnter Second Number: ");
            check = scanf("%lf%c", &secondNum, &extra);

            if ((check == 2) && (extra == '\n'))
               {
                    if ((secondNum > NUM_MAX) || (secondNum < -NUM_MAX))
                        {
                            printf("\n=========== Number is out of Range ===========\n");
                        }
                    else
                        {
                            if ((operationNum == 4) && (secondNum == 0))
                            {
                                printf("\n=========== Division by zero is undefined ===========\n"); // To check for division by zero
                            }

                        else
                        break;
                        }
                }
            else
                {
                    printf("\nInvalid Number\n");
                    while(getchar() != '\n');

                }
            } while (1);


            // print the expression with answer
            if ((arithmeticOperations(firstNum, operationNum, secondNum) >= NUM_MAX) || (arithmeticOperations(firstNum, operationNum, secondNum) <= -NUM_MAX))
                {
                   printf("\n=========== Answer is out of Range ===========\n");
                   if (exitArithmetic() == 0)
                        break;
                    else
                        arithmeticMode;
                }
            else
                {
                printf("\n%lf ", firstNum);
                switch (operationNum)

                {
                case 1:
                    printf("+");
                    break;
                case 2:
                    printf("-");
                    break;
                case 3:
                    printf("*");
                    break;
                case 4:
                    printf("/");
                    break;
                }

                    printf(" %lf ", secondNum);
                    printf("= ");
                    printf("%lf", arithmeticOperations(firstNum, operationNum, secondNum));

                if (exitArithmetic() == 0)
                    break;
                else
                    arithmeticMode;
                }
    }

}


double arithmeticOperations (double x,int operationNum, double y)
{
    switch (operationNum)
    {
    case 1:
        return x + y;

    case 2:
        return x - y;

    case 3:
        return x * y;
    case 4:
        return x / y;
    }
}

int exitArithmetic()
{
    char exit;
            printf("\n\nDo you want to exit? [Y / N]");
            // Prompt the user to enter else y or n or their uppercase only
            do
            {
                exit = getch();
                if ((exit == 'y') || (exit == 'Y') || (exit == 'n') || (exit == 'N'))
                    break;
            }while(1);

            if ((exit == 'y') || (exit == 'Y'))
            {
                printf("\n\n=========== Arithmetic Operations Exited ===========\n");
                return 0;
            }
            else
                return 1;
}
