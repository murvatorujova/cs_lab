#include <stdio.h>

int main()
{
    int n;
    printf("How many intigers are you going to enter?: ");
    scanf("%d", &n);
    int arr[n];
    float sum = 0;
    float average;

    for (int i = 1; i <= n; i++)
    {
        printf("Intiger %d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / n;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] <= average)
        {
            printf("%d ", arr[j]);
        }
    
    }

    return 0;
}