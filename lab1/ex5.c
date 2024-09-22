#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, num1, num2, num3;
    int greatest, smallest;
    int digit;
    int firstDigit = 1;

    printf("Enter a three digit number:");
    scanf("%d", &a);

    num1 = a / 100;
    num2 = a / 10 % 10;
    num3 = a % 10;

    a = abs(a);

    greatest = smallest = a % 10; // We start with assigning the greatest and the smallest value to the last digit
    // Extracting digits
    for (int i = 0; i < 3; i++)
    {
        digit = a % 10; // Getting the last digit
        if (digit > greatest)
        {
            greatest = digit; // Updating greatest
        }
        if (digit < smallest)
        {
            smallest = digit; // Updating smallest
        }
        a /= 10; // Removing the last digit
    }
    printf("The Greatest digit is: %d\n", greatest);
    printf("The smallest digit is: %d\n", smallest);

    return 0;
}