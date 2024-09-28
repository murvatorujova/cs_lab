#include <stdio.h>

int main()
{
    int n;
    float f, sum = 0;
    printf("Enter the length of the sequence of floating numbers: ");
    scanf("%d", &n);

    int count = 0;

    while (count < n)
    {
        scanf("%f", &f);
        sum = sum + f;
        count++;
    }

    printf("%f", sum);
    return 0;
}