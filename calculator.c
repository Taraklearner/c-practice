#include <stdio.h>

int main()
{
    int num1, num2;
    int choice;

    printf("=================================\n");
    printf("      SIMPLE CALCULATOR\n");
    printf("=================================\n\n");

    printf("Enter First Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("\nChoose an Operation\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nAnswer = %d\n", num1 + num2);
            break;

        case 2:
            printf("\nAnswer = %d\n", num1 - num2);
            break;

        case 3:
            printf("\nAnswer = %d\n", num1 * num2);
            break;

        case 4:
            if(num2 == 0)
                printf("\nCannot divide by zero.\n");
            else
                printf("\nAnswer = %.2f\n", (float)num1 / num2);
            break;

        default:
            printf("\nInvalid Choice.\n");
    }

    return 0;
}