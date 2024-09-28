#include <stdio.h>

int main()
{
    int n;
    float i = 1, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + 1 / i;
        i++;
    }

    printf("The sum of Harmonic series is: %.3f", sum);
    return 0;
}