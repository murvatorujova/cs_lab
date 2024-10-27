#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter values for n and k: ");
    scanf("%d%d", &n, &k);
    int arr[n], count = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Intiger %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Reversed array printed %d elements per line:\n", k);

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        count +=1;
       
        if (count % k == 0) {
            printf("\n");
        }
        
        
    }

    if (n % k != 0) {
        printf("\n");
    }

return 0;
}