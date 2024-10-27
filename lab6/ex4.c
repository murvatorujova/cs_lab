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

    int a;
    printf("Enter the intiger by which you gonna multiply the elements of the array: ");
    scanf("%d", &a);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = a * arr[i][j];
            printf("%d ", arr[i][j]);
        }
        puts("");
    }

    return 0;
}