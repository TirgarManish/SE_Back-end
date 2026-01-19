#include <stdio.h>

// Function prototypes
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(int a, int b);

int main()
{
    int choice, x, y;
    do
    {
        // Display Menu
        printf("\n=========== MENU ===========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("=======================================\n");

        // Taking user choice
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        // Perform operation based on choice
        switch (choice)
        {
        case 1: // Addition
            printf("\nEnter First Number: ");
            scanf("%d", &x);
            printf("Enter Second Number: ");
            scanf("%d", &y);
            printf("Result: %d + %d = %d\n", x, y, add(x, y));
            break;

        case 2: // Subtraction
            printf("\nEnter First Number: ");
            scanf("%d", &x);
            printf("Enter Second Number: ");
            scanf("%d", &y);
            printf("Result: %d - %d = %d\n", x, y, sub(x, y));
            break;

        case 3: // Multiplication
            printf("\nEnter First Number: ");
            scanf("%d", &x);
            printf("Enter Second Number: ");
            scanf("%d", &y);
            printf("Result: %d * %d = %d\n", x, y, mul(x, y));
            break;

        case 4: // Division
            printf("\nEnter First Number: ");
            scanf("%d", &x);
            printf("Enter Second Number: ");
            scanf("%d", &y);
            if (y != 0)
                printf("Result: %d / %d = %.2f\n", x, y, divide(x, y));
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        case 5: // Exit
            printf("\nExiting Calculator... Thank You!\n");
            break;

        default:
            printf("\nInvalid Choice! Please select between 1 - 5.\n");
        }

    } while (choice != 5); // Repeat until user chooses Exit

    return 0;
}

// Business Logic Functions
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b; // return float for decimal precision
}
