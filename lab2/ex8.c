#include <stdio.h>

int main()
{
    int x, a = 0, b = 1, c = 0, i = 2; // we start from i = 2 because the first two numbers we alredy establish, a, which is 0, and b = 1.
    printf("Enter the number of elemtnts: ");
    scanf("%d", &x);

    if (x == 0)
    {
        printf("The 0th element of Fibonacci sequence is 0\n");
        return 0;
    }

    if (x == 1)
    {
        printf("The 1st element of Fibonacci sequence is 1\n");
        return 0;
    }

    while (i <= x)
    {
        c = a + b;
        a = b;
        b = c;
        i++;
    }

    if (x == 3)
    {
        printf("The %drd element of Fibonacci sequence is %d", x, c);
    }
    else
    {
        printf("The %dth element of Fibonacci sequence is %d", x, c);
    }

    return 0;
}