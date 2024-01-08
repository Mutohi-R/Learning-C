#include <stdio.h>

// A program to find the sum of two variables inputted by the user
/* int main() {

    int a = 0;
    int b = 0;

    printf("Enter two numbers A and B: ");
    scanf("%d %d", &a, &b);

    printf("Sum of A and B is: %d\n", a + b);

    return 0;
} */

// Write a Program to find the size of int, float, double, and char.
/* int main() {
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    printf("int size: %d\n", sizeof(integerType));

    printf("char size: %d\n", sizeof(charType));

    printf("float size: %d\n", sizeof(floatType));

    printf("double size: %d\n", sizeof(doubleType));


    return 0;
} */

// Write a Program to Swap the values of two variables.
/* int main() {
    int a = 0, b = 0;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    int stored = a;
    a = b;
    b = stored;

    printf("After Swapping: a = %d, b = %d", a, b);

    return 0;
} */

// Write a Program to calculate Simple Interest. Formula: S.I = (P*R*T) /100
/* int main() {
    int principal, time, n;
    double rate;

    printf("Enter Principal (amount): ");
    scanf("%d", &principal);

    printf("Enter time: ");
    scanf("%d", &time);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    double interest = (principal * rate * time) / 100;

    printf("Interest is: %lf", interest);

    return 0;
} */

// Write a Program to calculate Compound Interest.
// Formula: Amount= P(1 + R/100)^t
/* int main() {
    int principal = 0, time = 0;
    double rate = 0.0;

    printf("Enter Principal (amount): ");
    scanf("%d", &principal);

    printf("Enter time: ");
    scanf("%d", &time);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    double rightHalf = 1.0;
    // printf("%lf\n", rightHalf);

    for(int i = 0; i < time; i++) {
        rightHalf = rightHalf * (1 + (rate / 100));
    }

    // printf("rightHalf: %lf\n", rightHalf);
    // printf("%d\n", principal);


    double amount = principal * rightHalf;
    // printf("%lf\n", amount);


    printf("Compound Interest is: %lf", amount);

    return 0;
} */

// Write a Program to check if the given number is Even or Odd.
/* int main() {

    int number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    int converted = number % 2;

    switch (converted)
    {
    case 0:
        printf("%d is an even number", number);
        break;

    case 1:
        printf("%d is an odd number", number);
        break;
    }

    return 0;
} */

// Write a Program to find the largest number among three numbers.
/* int main() {

    int a = 0;
    int b = 0;
    int c = 0;
    int num[3];
    int max = 0;

    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    num[0] = a;
    num[1] = b;
    num[2] = c;

    for(int i = 0; i < 3; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    printf("The largest number is: %d", max);

    return 0;
} */

// Write a Program to make a simple calculator.
/* int main()
{

    int a = 0;
    int b = 0;
    char c = ' ';

    while (c != 'x')
    {
        printf("Enter an operator (*, +, -, /)"
               "Enter x to quit: ");
        scanf("%c", &c);

        if (c == 'x') {
            break;
        }

        getchar();

        printf("Enter first operand: ");
        scanf("%d", &a);

        printf("Enter second operand: ");
        scanf("%d", &b);

        switch (c)
        {
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '/':
             if (b != 0) {
                    printf("%d / %d = %d\n", a, b, a / b);
                } else {
                    printf("Division by zero is undefined.\n");
                }
                break;

        default:
            printf("You did not input a valid operator\n");
            break;
        }
    }

    return 0;
} */

// Write a Program to find the factorial of a given number.
int main() {

    int number = 0;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    int count = number - 1;
    // printf("number: %d", number);

    for (int i = 0; i < count; i++) {
        factorial *= number--;

        // printf("number: %d\n", number);
        // printf("number: %d\n", factorial);
    }

    printf("The factorial of %d is: %d", number, factorial);

    return 0;
}