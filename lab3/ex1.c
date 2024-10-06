#include <stdio.h>

int main()
{
    int n, sum = 0, product = 1;

    printf("Enter the number of elements n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x = 2 * i + 1;
        sum = sum + x;
        product = product * x;
    }

    printf("Sum of the first %d elements is %d\n", n, sum);
    printf("Product of the first %d elements is %d\n", n, product);

    return 0;
}