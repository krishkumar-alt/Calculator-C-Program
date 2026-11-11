#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    int choice, n, i;
    float num, result;

    printf("1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4)
    {
        printf("Invalid choice");
        return 0;
    }

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Invalid number of inputs");
        return 0;
    }

    printf("Enter the numbers: ");
    scanf("%f", &result);

    for (i = 2; i <= n; i++)
    {
        scanf("%f", &num);

        switch (choice)
        {
            case 1:
                result = add(result, num);
                break;

            case 2:
                result = subtract(result, num);
                break;

            case 3:
                result = multiply(result, num);
                break;

            case 4:
                if (num == 0)
                {
                    printf("Division by zero is not possible");
                    return 0;
                }
                result = divide(result, num);
                break;
        }
    }

    printf("Result = %.2f", result);

    return 0;
}
