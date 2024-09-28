#include <stdio.h>

int main()
{
    int a, b, k, sum = 0;

    printf("Enter the range [a,b]: ");
    scanf("%d%d", &a, &b);

    printf("Enter value of K: ");
    scanf("%d", &k);

    int x;

    if (a > b)
    {
        x = a;
        a = b;
        b = x;
    }

    while (a < b)
    {
        if (a % k == 0)
        {
            sum = sum + a;
        }
        a++;
    }

    printf("the sum of the elements in the range [%d, %d] that are divisible by %d without a remainder are: %d", a, b, k, sum);

    return 0;
}