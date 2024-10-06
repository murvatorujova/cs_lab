#include <stdio.h>

int main()
{
    int n;
    float f, sum = 0;
    printf("Enter the length of the sequence of floating numbers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &f);
        sum = sum + f;
    }

    printf("%f", sum);
    return 0;
}