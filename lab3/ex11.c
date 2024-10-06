#include <stdio.h>
#include <math.h>

int main()
{
    int number, originalNumber, remainder, digits = 0, result = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        originalNumber /= 10;
        digits++;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, digits);
        originalNumber /= 10;
    }

    if (result == number)
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;

    return 0;
}