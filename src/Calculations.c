#include "Calculations.h"


// To calculate x power y.



void powerCalculation(){
    while (1)
    {
        printf("=========POWER CALCULATION==========\n");
        int choice;
        printf("1.For calculations\n0.To exist.\n");
        scanf("%d",&choice);
        if(choice == 1){
            double x,y;
            printf("Enter the base: ");
            scanf("%lf",&x);
            printf("Enter the power: ");
            scanf("%lf",&y);
            printf("The result of %0.3lf raised to the power of %0.3lf is %0.3lf.\n\n",x,y,pow(x,y));
        }else if (choice == 0)
            return;
        else{
            printf("Invalid choice. Please choose again.\n");
            break;
        }   
    }
}
    

// To calculate the square root.
void rootsCalculation(){
    while (1)
    {
        printf("=========ROOTS CALCULATIONS=========\n");
        int choice;
        printf(" 1.square root\n 2.cubic root\n 3.click 0 to exist.\n Your choice:");
        scanf("%d",&choice);
        
        if(choice == 1 || choice==2){ 
            double value;
            printf("Enter the value: ");
            scanf("%lf",&value);
            switch (choice)
            {
            // To cal. the square root for real numbers
            case 1:
                if(value >= 0){                  
                    printf("The square root of %0.3lf is %0.3lf.\n\n",value,sqrt(value));
                    }
                // To cal. the square root for imagine numbers
                else if(value < 0) {  
                    printf("The square root of %0.3lf is +%0.3lfi and -%0.3lfi.\n\n",value,sqrt(-value),sqrt(-value));
                }
                break;
                // To cal. cubic root
            case 2:
                printf("The cubic root of %0.3lf is %0.3lf.\n\n ",value,cbrt(value));
                break;
            
            default:
                printf("Invalid choice. Please choose again.\n");
                break;
            }
        }
        // To exist from the program
        else if(choice == 0){
            printf("Exist form the program.\n");
            return;
        }
        // If ivalid choice is entered
        else
            printf("Invalid choice. Please choose again.\n ");
    }}

// To calculate logarithms
void logarithmCalculation(){
    while (1)
    {   
        printf("=========LOGARITHM CALCULATIONS=========\n");
        int choice;
        printf(" 1.Natural logarithm\n 2.Decimal logarithm\n 3.logarithm with base\n 4.click 0 to exist.\n Your choice: ");
        scanf("%d",&choice);

        if(choice == 1 || choice == 2 || choice == 3){

            double x;
            printf("Enter the value of the argument(x):");
            scanf("%lf",&x);
            switch (choice)
            {
                // To calculate Natural logarithm.
            case 1:
                if(x>0){
                printf("The natural logarithm of %0.3lf is %0.3lf.\n\n",x,log(x));
                break;
                }else
                    printf("Error in inputs");
                
                // To calculate Decimal logarithm.
            case 2:
                if(x>0){
                printf("The decimal logarithm of %0.3lf is %0.3lf.\n\n",x,log10(x));
                break;
                }else
                    printf("Error in inputs");

                // To calculate logarithm with base
            case 3:
                {
                    double b;
                    printf("Enter the base value: ");
                    scanf("%lf",&b);
                    if(x<=0 || b<=0 || b==1)
                        printf("Error in inputs");
                    else{
                        printf("logb(x) = %0.3lf\n\n",(log(x))/(log(b)));
                    }
                    break;
                }
            default:
                printf("Invalid choice. Please choose again.\n");
                break;
            }}
        // To exist from the program
        else if(choice == 0 ){
            printf("Exist from the program.\n");
            return;
            }
        // If invalid choice is entered
        else 
            printf("Invalid choice. Please choose again.\n");
            }}


// Operations on angles
void anglesOperations(){
    printf("Calculating the operations on angles.\n");
    while (1)
    {
        printf("=========ANGLES OPERATIONS=========\n");
        int choice1;
        printf(" 1.trigonometric.\n 2.hyperbolic.\n 3.inverse trigonometric\n 4.click 0 to exist\n Your choice: ");
        scanf("%d",&choice1);
        if(choice1 == 1){
            int choice2;
            printf(" 1.sin\n 2.cos\n 3.tan\n Your choice:  ");
            scanf("%d",&choice2);

            if(choice2 == 1 || choice2 == 2 || choice2 == 3){           
                double angle ;
                printf("Enter the angle in degrees: ");
                scanf("%lf",&angle);
                angle *= pi/180;
                    switch (choice2)
                    {
                    // Trigonometric operation
                    case 1:
                        printf("sinx = %0.3lf\n\n",sin(angle));
                        break;
                    case 2:
                        printf("cosx = %0.3lf\n\n",cos(angle));
                        break;
                    case 3:
                        printf("tanx = %0.3lf\n\n",tan(angle)); 
                        break;  
                    default:
                        printf("Invalid choice. Please choose again.\n");
                        break;
                    }}
                    else
                        printf("Invalid choice. Please choose again.\n\n");
           // Hyperbolic operation             
        } else if(choice1 == 2) {
            int choice3;
            printf(" 1.sinh\n 2.cosh\n 3.tanh\n Your choice: ");
            scanf("%d",&choice3);
            if(choice3 == 1 || choice3 == 2 || choice3 == 3){
                double angle;
                printf("Enter the value: ");
                scanf("%lf",&angle);
                 switch (choice3)
                {
                case 1:
                    printf("sinh x = %0.3lf\n\n",sinh(angle));
                    break;
                case 2:
                    printf("cosh x = %0.3lf\n\n",cosh(angle));
                    break;
                
                case 3:
                    printf("tanh x = %0.3lf\n\n",tanh(angle));
                    break;
                default:
                    printf("Invalid choice. Please choose again.\n");
                    break;
                }
            } else 
                printf("Invalid choice. Please choose again.\n");
        // To exist from the program  
        }else if(choice1 == 3){
            int choice4;
            printf(" 1.sin^-1\n 2.cos^-1\n 3.tan^-1\n Your choice:");
            scanf("%d",&choice4);
            if(choice4 == 1||choice4 == 2||choice4 == 3){
            double value;
            printf("Enter the radian value:");
            scanf("%lf",&value);
                switch(choice4)
                {
                    
                case 1 :
                    if(-1<=value<=1){
                        printf("The inverse of %0.3lf is %0.3lf\n\n",value,asin(value)*180/pi) ;
                        break;
                        }else 
                            printf("The value should be in the range of -1<1radian value<=1.\n");

                case 2 :
                    if(-1<=value<=1){
                        printf("The inverse of %0.3lf is %0.3lf\n\n ",value,acos(value)*180/pi);
                        break;
                        }else
                            printf("The value should be in the range of -1<1radian value<=1.\n");

                case 3:
                    printf("The inverse of %0.3lf is %0.3lf\n\n ",value,atan(value)*180/pi);
                    break;
                default :
                    printf("Invalid choice. Please choose again.\n\n ");
                    break;
                }
            }else
                printf("Invalid choice. Please choose again.\n");
        
        } else if(choice1 == 0){
            printf("Exist from the program.\n");
            return;
        } // If invalid choice is entered       
        else
            printf("Invalid choice. Please choose again.\n\n");  
}
}  

// Mahmoud Tarek

void Numerical_approximation()// لتقريب الاعداد //
{
    while(1)
    {
        printf("=========NUMERICAL APPROXIMATIONS=========\n");
        int choice;
        printf("1-To ceil  : 1\n");// لتقريب الرقم لاعلي //
        printf("2-To floor  : 2\n");//لتقريب الرقم لاسفل //
        printf("3-To round  : 3\n");//لتقريب الرقم //
        printf("3-To exist:0\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        if(choice == 1 || choice == 2 || choice == 3){
            double num;
            printf("Enter the value of the number:");
            scanf("%lf",&num);
            switch (choice)
            {
            case 1:
            printf("Number after ceiling is:%0.3lf\n\n",ceil(num)) ;
            break;
            case 2:
            printf("Number after flooring is:%0.3lf\n\n",floor(num)) ;
            break;
            case 3:
            printf("Number after rounding is:%0.3lf\n\n",round(num));
            break;
            default :
            printf("this choice is invalid please try again\n\n");
            break;

        }
    }   else if(choice == 0){
            printf("Exist from the program.\n\n");
            return;
        }else
            printf("Invalid choice. Please choose again.\n\n");
        

        }

    }


void fabsCalculation()//لحساب القيمة المطلقة ().
{
    while (1)
    {
        printf("=========ABSOLUTE CALCULATION=========\n");
        int choice;
        printf(" 1.To calculate:1\n 2.To exist:0\n Your choice: ");
        scanf("%d",&choice);
        if(choice == 1){
            double num;
            printf("Enter the value: ");
            scanf("%lf",&num);
            printf("The number after absolute is %0.3lf\n\n",fabs(num));
        }else if(choice == 0){
            printf("Exist from the program.\n\n");
            return;
        }
        else
            printf("Invalid choice. Please choose again.\n\n");
        
    }
    
    
}


void fmodCalculation()//لحساب باقي القسمة ().
{
    while (1)
    {
        printf("=========REMAINDER CALCULATION=========\n");
        int choice;
        printf(" 1.To calculation:1\n 2.To exist:0\n Your choice: ");
        scanf("%d",&choice);

        if(choice == 1){
            double num1,num2;
            printf("Enter the two values (x,y): ");
            scanf("%lf %lf",&num1,&num2);

            if(num2==0){
                printf("num2 must not be zero\n\n");
                // break;
            }
            else if( num2 != 0){
                printf("The remainder is:%0.3lf\n\n",fmod(num1,num2));
                // break;
            }

            }else if (choice == 0){ 
                printf("Exist from the program.\n\n");
                return;
            }
            else 
                printf("Invalid choice. Please choose again.\n\n");
                // break;
        
    }
    
    }
