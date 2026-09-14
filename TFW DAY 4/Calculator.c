#include <stdio.h> 

int main(void) {
    setbuf(stdout, NULL);
    
    char op; // Changed from 'operator' to 'op'
    double num1, num2;
    
    printf("=================================\n");
    printf("  SUPER KIDS CALCULATOR 2000!    \n");
    printf("=================================\n\n");
    
    printf("Choose your math operator  (+, -, *, /): ");
    scanf(" %c", &op); // Added a space before %c
    
    printf("Type your first number: ");
    scanf("%lf", &num1);
    
    printf("Type your second number: ");
    scanf("%lf", &num2);
    
    printf("\nDrumroll please....\n"); 
    
    switch (op) { // Updated to use the new variable name
        case '+':
            printf("%.2lf + %.2lf = %.2lf \n\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf \n\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf \n\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("You can't divide by zero! \n");
            } else {
                printf("%.2lf / %.2lf = %.2lf \n\n", num1, num2, num1 / num2);
            }
            break;
       
            printf("Oops! That's not a valid math operator.\n");
            break;
    }
    
    return (0); // Added return statement
}