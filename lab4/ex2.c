#include <stdio.h>

int main()
{
    int n;
    printf("How many intigers are you going to enter?: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Intiger %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Elements less than both their neighbors:\n");

    if (n > 1 && arr[0] < arr[1])
    {
        printf("%d ", arr[0]);
    }

    for (int j = 1; j < n - 1; j++)
    {
        if (arr[j] < arr[j - 1] && arr[j] < arr[j + 1])
        {
            printf("%d ", arr[j]);
     
        }
    }

    if (n > 1 && arr[n - 1] < arr[n - 2])
    {
        printf("%d ", arr[n - 1]);
    }
}