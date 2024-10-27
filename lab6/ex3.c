#include <stdio.h>

int main()
{

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
        sum += arr[i][n - i - 1];
    }

    if (n % 2 == 1)
    {
         sum -= arr[n / 2][n / 2];
    }

    printf("The sum of the diagonals is: %d", sum);

    return 0;
}