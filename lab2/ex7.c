#include <stdio.h>

int main()
{
    int n, count;
    printf("Enter the number ");
    scanf("%d", &n);


     if (n <= 0) {
        printf("The input must be a positive integer greater than 0\n");
        return 1; // Exit the program with a non-zero status indicating an error
    }

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        
        printf("%d ", n);
        count++;
    }

    printf("\nLength of the sequence is %d\n", count);
}