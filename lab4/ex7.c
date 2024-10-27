#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("How many intigers are you going to enter?: ");
    scanf("%d", &n);
    int arr[n];
    int min = INT_MAX, max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        printf("Intiger %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == min)
        {
            printf("%d ", arr[j]);
        }
    }

    for (int l = 0; l < n; l++)
    {
        if (arr[l] != min && arr[l] != max)
        {
            printf("%d ", arr[l]);
        }
    }

    for (int k = 0; k < n; k++)
    {
        if (arr[k] == max)
        {
            printf("%d ", arr[k]);
        }
    }

    return 0;
}