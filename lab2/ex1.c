#include <stdio.h>

int main()
{
    int n, sum = 0, product = 1;

    printf("Enter the number of elements n: ");
    scanf("%d", &n);

    int i = 1, x;

    while (i <= n)
    {
        x = 3 * i - 1;
        sum = sum + x;
        product = product * x;
        i++;
    }

    printf("Sum of the first %d elements is %d\n", n, sum);
    printf("Product of the first %d elements is %d\n", n, product);

    return 0;
}